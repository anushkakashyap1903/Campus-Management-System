#include "teachermanager.h"
#include "ui_teachermanager.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

teachermanager::teachermanager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::teachermanager)
{
    ui->setupUi(this);
    loadTeachers();
    this->showMaximized();
}

teachermanager::~teachermanager()
{
    delete ui;
}
void teachermanager::loadTeachers()
{
    model = new QSqlTableModel(this);
    model->setTable("teachers");      // Table name
    model->select();
    ui->tblTeachers->setModel(model);
    ui->tblTeachers->setColumnHidden(0,true); // hide ID if auto-increment
}
void teachermanager::on_btnAddTeacher_clicked()
{
    QString name = ui->txtTeacherName->text().trimmed();
    QString subject = ui->txtSubject->text().trimmed();

    if(name.isEmpty() || subject.isEmpty())
    {
        QMessageBox::warning(this,"Input Error","Please fill all fields");
        return;
    }

    // 🔎 Check if login already exists
    QSqlQuery check;
    check.prepare("SELECT * FROM users WHERE username=?");
    check.addBindValue(name);

    if(check.exec() && check.next())
    {
        QMessageBox::warning(this,"Duplicate","Teacher login already exists");
        return;
    }

    QSqlQuery query;

    // Insert into teachers table
    query.prepare("INSERT INTO teachers (name, subject) VALUES (?, ?)");
    query.addBindValue(name);
    query.addBindValue(subject);

    if(!query.exec())
    {
        QMessageBox::critical(this,"Error", query.lastError().text());
        return;
    }

    // Get the inserted teacher ID
    int teacherId = query.lastInsertId().toInt();

    // Insert login into users table
    QSqlQuery userQuery;
    userQuery.prepare("INSERT INTO users(username,password,role) VALUES (?,?,?)");
    userQuery.addBindValue(name);                       // username
    userQuery.addBindValue(QString::number(teacherId)); // password
    userQuery.addBindValue("Teacher");

    if(userQuery.exec())
    {
        QMessageBox::information(this,"Success","Teacher Added and Login Created");

        ui->txtTeacherName->clear();
        ui->txtSubject->clear();

        model->select(); // refresh table
    }
    else
    {
        QMessageBox::critical(this,"Error", userQuery.lastError().text());
    }
}

void teachermanager::on_btnDeleteTeacher_clicked()
{
    int row = ui->tblTeachers->currentIndex().row();
    if(row < 0)
    {
        QMessageBox::warning(this,"Selection Error","Select a teacher first");
        return;
    }
    model->removeRow(row);
    model->submitAll();
}

void teachermanager::on_pushButton_clicked()
{
     this->close();
}

