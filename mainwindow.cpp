#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "studentdashboard.h"
#include "teacherdashboard.h"
#include "admindashboard.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet(
        "QMainWindow { background-color: #1e272e; }"

        "QLabel { color: #f5f6fa; font-size: 14px; }"

        "QPushButton {"
        " background-color: #00a8ff;"
        " color: white;"
        " border-radius: 8px;"
        " padding: 6px;"
        " font-weight: bold;"
        "}"

        "QPushButton:hover {"
        " background-color: #0097e6;"
        "}"

        "QLineEdit {"
        " background-color: #2f3640;"
        " color: white;"
        " border: 1px solid #718093;"
        " border-radius: 6px;"
        " padding: 4px;"
        "}"

        "QTableWidget {"
        " background-color: #2f3640;"
        " color: white;"
        " gridline-color: #718093;"
        "}"

        "QHeaderView::section {"
        " background-color: #353b48;"
        " color: white;"
        "}"
        );
    ui->loginButton->setCursor(Qt::PointingHandCursor);
    this->showMaximized();

}

MainWindow::~MainWindow()
{
    delete ui;
}

// Slot for Login button
void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();
    QString role = ui->roleCombo->currentText();

    if(username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this,"Login","Enter username and password");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username=? AND password=? AND role=?");
    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue(role);

    if(!query.exec())
    {
        QMessageBox::critical(this,"Database Error",query.lastError().text());
        return;
    }

    if(query.next())
    {
        QMessageBox::information(this,"Login","Login Successful");

        if(role == "Student")
        {
            QString rollNo = password;   // password = roll number

            QSqlQuery q;
            q.prepare("SELECT id FROM students WHERE roll=?");
            q.addBindValue(rollNo);

            if(q.exec() && q.next())
            {
                int studentId = q.value(0).toInt();

                studentdashboard *s = new studentdashboard(studentId, this);
                s->show();
            }
            else
            {
                QMessageBox::warning(this,"Error","Student record not found");
                return;
            }
        }
        else if(role == "Teacher")
        {
            teacherdashboard *t = new teacherdashboard(this);
            t->show();
            this->hide();
        }
        else if(role == "Admin")
        {
            admindashboard *a = new admindashboard(this);
            a->show();
            this->hide();
        }

        this->hide();
    }
    else
    {
        QMessageBox::warning(this,"Login","Invalid Username or Password");
    }
}

void MainWindow::on_btnExit_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit",
                                  "Are you sure you want to exit?",
                                  QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes)
    QApplication::quit();
}

