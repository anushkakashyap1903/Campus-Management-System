#include "resultwindow.h"
#include "ui_resultwindow.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

resultwindow::resultwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::resultwindow)
{
    ui->setupUi(this);

    model = new QSqlQueryModel();

    loadStudents();
    loadResults();
    this->showMaximized();
}

resultwindow::~resultwindow()
{
    delete ui;
}

void resultwindow::loadStudents()
{
    QSqlQuery query("SELECT name FROM students");

    while(query.next())
    {
        ui->comboStudent->addItem(query.value(0).toString());
    }
}

void resultwindow::loadResults()
{
    model->setQuery("SELECT student_name, subject, marks, grade FROM results");
    ui->tableResults->setModel(model);
}

QString resultwindow::calculateGrade(int marks)
{
    if(marks >= 90)
        return "A+";
    else if(marks >= 75)
        return "A";
    else if(marks >= 60)
        return "B";
    else if(marks >= 50)
        return "C";
    else
        return "F";
}

void resultwindow::on_btnSaveResult_clicked()
{
    QString student = ui->comboStudent->currentText();
    QString subject = ui->comboSubject->currentText();
    int marks = ui->txtMarks->text().toInt();

    QString grade = calculateGrade(marks);

    ui->txtGrade->setText(grade);
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

    query.prepare("INSERT INTO results(student_id,student_name,subject,marks,grade)"
                  "VALUES(:sid,:student,:subject,:marks,:grade)");
    query.bindValue(":sid", studentId);
    query.bindValue(":student",student);
    query.bindValue(":subject",subject);
    query.bindValue(":marks",marks);
    query.bindValue(":grade",grade);

    if(query.exec())
    {
        QMessageBox::information(this,"Success","Result Saved");
        loadResults();
    }
    else
    {
        QMessageBox::warning(this,"Error",query.lastError().text());
    }
}

void resultwindow::on_btnRefresh_clicked()
{
    loadResults();
}

void resultwindow::on_btnBack_clicked()
{
     this->close();
}

