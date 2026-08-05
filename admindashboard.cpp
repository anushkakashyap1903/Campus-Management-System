#include "admindashboard.h"
#include "ui_admindashboard.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "studentmanager.h"
#include "teachermanager.h"
#include "complaintmanager.h"
#include "noticemanager.h"
#include "placementmanager.h"
#include "messmanager.h"
#include <QCloseEvent>


admindashboard::admindashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admindashboard)
{
    ui->setupUi(this);
    loadStatistics();
    this->showMaximized();
}

admindashboard::~admindashboard()
{
    delete ui;
}
void admindashboard::on_btnStudents_clicked()
{
    studentmanager *s = new studentmanager();
  s->show();
}
void admindashboard::on_btnTeachers_clicked()
{
    teachermanager *t = new teachermanager();
    t->show();
}

void admindashboard::on_btnComplaints_clicked()
{
    complaintmanager *c = new complaintmanager();
    c->show();
}

void admindashboard::on_btnNotice_clicked()
{
    noticemanager *n = new noticemanager();
    n->show();
}

void admindashboard::on_btnPlacement_clicked()
{
    placementmanager *p = new placementmanager();
    p->show();
}
void admindashboard::on_btnMess_clicked()
{
    messmanager *m = new messmanager();
    m->show();
}

void admindashboard::on_btnLogout_clicked()
{
    this->close();
}
void admindashboard::loadStatistics()
{
    QSqlQuery query;

    // Students count
    query.exec("SELECT COUNT(*) FROM students");
    if(query.next())
        ui->lblStudents->setText(query.value(0).toString());

    // Teachers count
    query.exec("SELECT COUNT(*) FROM teachers");
    if(query.next())
        ui->lblTeachers->setText(query.value(0).toString());

    // Complaints count
    query.exec("SELECT COUNT(*) FROM complaints");
    if(query.next())
        ui->lblComplaints->setText(query.value(0).toString());

    // Placements count
    query.exec("SELECT COUNT(*) FROM placements");
    if(query.next())
        ui->lblPlacements->setText(query.value(0).toString());
}
void admindashboard::on_btnRefresh_clicked()
{
    loadStatistics();
}
void admindashboard::closeEvent(QCloseEvent *event)
{
    if(parentWidget())
        parentWidget()->show();

    event->accept();
}