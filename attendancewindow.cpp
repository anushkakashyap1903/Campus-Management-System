#include "attendancewindow.h"
#include "ui_attendancewindow.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDate>

attendancewindow::attendancewindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::attendancewindow)
{
    ui->setupUi(this);

    ui->dateAttendance->setDate(QDate::currentDate());
    ui->dateAttendance->setMinimumDate(QDate::currentDate());
    ui->dateAttendance->setMaximumDate(QDate::currentDate());
    ui->dateAttendance->setCalendarPopup(true);

    model = new QSqlQueryModel();

    loadStudents();
    loadAttendance();
    this->showMaximized();
}

attendancewindow::~attendancewindow()
{
    delete ui;
}

void attendancewindow::loadStudents()
{
    QSqlQuery query("SELECT name FROM students");

    while(query.next())
    {
        ui->comboStudent->addItem(query.value(0).toString());
    }
}
void attendancewindow::loadAttendance()
{
    QSqlQueryModel *model = new QSqlQueryModel(this);

    model->setQuery("SELECT student_name,subject,date,status FROM attendance");

    ui->tableAttendance->setModel(model);
}


void attendancewindow::on_btnSaveAttendance_clicked()
{
    QString student = ui->comboStudent->currentText();
    QString subject = ui->comboSubject->currentText();
    QString date = ui->dateAttendance->date().toString("yyyy-MM-dd");
    QString status = ui->comboStatus->currentText();

    QSqlQuery q;
    q.prepare("SELECT id FROM students WHERE name=?");
    q.addBindValue(student);
    if(!q.exec() || !q.next())
    {
        QMessageBox::warning(this,"Error","Student not found");
        return;
    }

    int studentId = q.value(0).toInt();
    QSqlQuery query;
    query.prepare("INSERT INTO attendance(student_id,student_name,subject,date,status) "
                  "VALUES(:sid,:student,:subject,:date,:status)");
    query.bindValue(":sid", studentId);
    query.bindValue(":student",student);
    query.bindValue(":subject",subject);
    query.bindValue(":date",date);
    query.bindValue(":status",status);

    if(query.exec())
    {
        QMessageBox::information(this,"Success","Attendance Saved");
        loadAttendance();
    }
    else
    {
        QMessageBox::warning(this,"Error","Attendance Failed");
    }
}

void attendancewindow::on_btnRefresh_clicked()
{
    loadAttendance();
}
void attendancewindow::on_btnBack_clicked()
{
    this->close();
}