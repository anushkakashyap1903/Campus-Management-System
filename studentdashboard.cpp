#include "studentdashboard.h"
#include "ui_studentdashboard.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDate>
#include <QSqlError>
#include <QSqlRecord>
#include <QHeaderView>
#include <QSqlQueryModel>
#include <QCloseEvent>

studentdashboard::studentdashboard(int id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studentdashboard)
{
    ui->setupUi(this);
    this->showMaximized();

    // store student roll number / id
    currentStudentId = id;

    attendanceModel = new QSqlQueryModel(this);
    resultsModel = new QSqlQueryModel(this);
    messModel = new QSqlQueryModel(this);
    placementModel = new QSqlQueryModel(this);

    loadAttendance();
    loadResults();
    calculateCGPA();
    loadMessMenu();
    loadPlacements();
    loadComplaints();
}

studentdashboard::~studentdashboard()
{
    delete ui;
}

void studentdashboard::loadAttendance()
{
        attendanceModel->setQuery(
            "SELECT subject, date, status FROM attendance WHERE student_id="
            + QString::number(currentStudentId)
            );

        ui->tableViewAttendance->setModel(attendanceModel);
        ui->tableViewAttendance->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void studentdashboard::loadResults()
{
    resultsModel->setQuery(
        "SELECT subject,marks,grade FROM results WHERE student_id="
        + QString::number(currentStudentId)
        );

    ui->tableViewResults->setModel(resultsModel);
    ui->tableViewResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void studentdashboard::calculateCGPA()
{
    QSqlQuery query;
    query.prepare("SELECT grade FROM results WHERE student_id=?");
    query.addBindValue(currentStudentId);
    query.exec();

    int totalPoints = 0;
    int count = 0;

    while(query.next())
    {
        QString grade = query.value(0).toString();
        int points = 0;

        if(grade == "A+")
            points = 10;
        else if(grade == "A")
            points = 9;
        else if(grade == "B")
            points = 8;
        else if(grade == "C")
            points = 7;
        else
            points = 0;

        totalPoints += points;
        count++;
    }

    if(count == 0)
        return;

    double cgpa = (double)totalPoints / count;

    ui->lblCGPA->setText(QString::number(cgpa,'f',2));
}

void studentdashboard::loadMessMenu()
{
    messModel->setQuery("SELECT day, meal, menuitem FROM messmenu");

    ui->tableViewMessMenu->setModel(messModel);
    ui->tableViewMessMenu->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
void studentdashboard::loadPlacements()
{
    placementModel = new QSqlQueryModel(this);

    placementModel->setQuery(
        "SELECT company, role, date FROM placements"
        );

    ui->tblPlacements->setModel(placementModel);
}
void studentdashboard::on_pushButtonSubmitComplaint_clicked()
{
    QString complaintText = ui->textEditComplaint->toPlainText();

    if(complaintText.isEmpty()){
        QMessageBox::warning(this,"Complaint","Please write a complaint");
        return;
    }

    QSqlQuery query;

    query.prepare("INSERT INTO complaints(student_id, complaint, status) VALUES (?,?,?)");

    query.addBindValue(currentStudentId);   // student id
    query.addBindValue(complaintText);      // complaint text
    query.addBindValue("Pending");          // status

    if(query.exec()){
        QMessageBox::information(this,"Success","Complaint submitted successfully");
        ui->textEditComplaint->clear();
        loadComplaints();
    }
    else{
        QMessageBox::critical(this,"Failed to submit Complaint", query.lastError().text());
    }
}

void studentdashboard::on_pushButtonLogout_clicked()
{
    this->close();
}

void studentdashboard::loadComplaints()
{
    QSqlQueryModel *model = new QSqlQueryModel(this);

    model->setQuery(
        "SELECT complaint,status FROM complaints WHERE student_id="
        + QString::number(currentStudentId)
        );

    ui->tableViewComplaints->setModel(model);
    ui->tableViewComplaints->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
void studentdashboard::closeEvent(QCloseEvent *event)
{
    if(parentWidget())
        parentWidget()->show();

    event->accept();
}