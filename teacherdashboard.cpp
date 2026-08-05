#include "teacherdashboard.h"
#include "ui_teacherdashboard.h"
#include "studentmanager.h"
#include <QMessageBox>
#include "attendancewindow.h"
#include "resultwindow.h"
#include <QCloseEvent>

teacherdashboard::teacherdashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::teacherdashboard)
{
    ui->setupUi(this);
    this->showMaximized();
}

teacherdashboard::~teacherdashboard()
{
    delete ui;
}
void teacherdashboard::on_btnStudents_clicked()
{
    studentmanager *s = new studentmanager();
    s->show();
}

void teacherdashboard::on_btnAttendance_clicked()
{
    attendancewindow *a = new attendancewindow();
    a->show();
}

void teacherdashboard::on_btnResult_clicked()
{
    resultwindow *r = new resultwindow();
    r->show();
}

void teacherdashboard::on_btnLogout_clicked()
{
    close();
}
void teacherdashboard::closeEvent(QCloseEvent *event)
{
    if(parentWidget())
        parentWidget()->show();

    event->accept();
}