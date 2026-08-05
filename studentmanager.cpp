#include "studentmanager.h"
#include "ui_studentmanager.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSqlRecord>

studentmanager::studentmanager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentmanager)
{
    ui->setupUi(this);
    this->showMaximized();

    // Create table model
    model = new QSqlTableModel(this);
    model->setTable("students");  // your SQLite table
    model->select();              // load data

    // Connect model to tableview
    ui->tableStudents->setModel(model);   // make sure QTableView objectName = tblStudents
    ui->tableStudents->setColumnHidden(0,true); // hide ID column if auto-increment

    loadStudents();
}
void studentmanager::on_btnAddStudent_clicked()
{
    QString name = ui->txtName->text();
    QString rollno = ui->txtRoll->text();
    QString course = ui->txtCourse->text();
    QString branch = ui->comboBranch->currentText();

    if(name.isEmpty() || rollno.isEmpty() || course.isEmpty())
    {
        QMessageBox::warning(this,"Input Error","Please fill all fields");
        return;
    }

    QSqlQuery query;

    // Insert student into students table
    query.prepare("INSERT INTO students(name, roll, course, branch) VALUES (?,?,?,?)");
    query.addBindValue(name);
    query.addBindValue(rollno);
    query.addBindValue(course);
    query.addBindValue(branch);

    if(branch.isEmpty())
    {
        QMessageBox::warning(this,"Error","Please select branch");
        return;
    }

    if(query.exec())
    {
        // Automatically create login
        QSqlQuery userQuery;
        userQuery.prepare("INSERT INTO users(username,password,role) VALUES (?,?,?)");

        userQuery.addBindValue(name);     // username = student name
        userQuery.addBindValue(rollno);   // password = roll number
        userQuery.addBindValue("Student");

        if(userQuery.exec())
        {
            QMessageBox::information(this,"Success","Student added and login created");

            ui->txtName->clear();
            ui->txtRoll->clear();
            ui->txtCourse->clear();
            ui->comboBranch->setCurrentIndex(0);

            loadStudents();   // refresh table
        }
        else
        {
            QMessageBox::critical(this,"Error", userQuery.lastError().text());
        }
    }
    else
    {
        QMessageBox::critical(this,"Error", query.lastError().text());
    }
}
studentmanager::~studentmanager()
{
    delete ui;
}
void studentmanager::on_btnDeleteStudent_clicked()
{
    int row = ui->tableStudents->currentIndex().row();

    if(row < 0)
    {
        QMessageBox::warning(this,"Selection Error","Please select a student first");
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Confirm Delete",
                                  "Are you sure you want to delete this student?",
                                  QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::No)
        return;

    QString roll = model->record(row).value("roll").toString();
    QString name = model->record(row).value("name").toString();

    QSqlQuery query;

    // delete from students table
    query.prepare("DELETE FROM students WHERE roll=?");
    query.addBindValue(roll);

    if(!query.exec())
    {
        QMessageBox::critical(this,"Error",query.lastError().text());
        return;
    }

    // delete login from users table
    query.prepare("DELETE FROM users WHERE username=? AND role='Student'");
    query.addBindValue(name);
    query.exec();

    QMessageBox::information(this,"Success","Student deleted successfully");

    loadStudents(); // reload table
}

void studentmanager::on_btnRefresh_clicked()
{
    loadStudents();
}
void studentmanager::loadStudents()
{
    model->setTable("students");
    model->select();
    ui->tableStudents->setColumnHidden(0,true);
    ui->tableStudents->setModel(model);
    ui->tableStudents->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void studentmanager::on_btnBack_clicked()
{
     this->close();
}

