#include "complaintmanager.h"
#include "ui_complaintmanager.h"
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

complaintmanager::complaintmanager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::complaintmanager)
{
    ui->setupUi(this);
    loadComplaints();
    this->showMaximized();
}

complaintmanager::~complaintmanager()
{
    delete ui;
}
void complaintmanager::loadComplaints()
{
    model = new QSqlTableModel(this);
    model->setTable("complaints");  // Table name
    model->select();
    ui->tableViewComplaints->setModel(model);
    ui->tableViewComplaints->setColumnHidden(0,true); // hide ID column
}

void complaintmanager::on_btnRefresh_clicked()
{
    model->select(); // Refresh table
}
void complaintmanager::on_btnResolve_clicked()
{
    int row = ui->tableViewComplaints->currentIndex().row();
    if(row < 0)
    {
        QMessageBox::warning(this,"Selection Error","Select a complaint first");
        return;
    }

    // Delete or mark resolved (here we delete)
    model->removeRow(row);
    if(model->submitAll())
        QMessageBox::information(this,"Success","Complaint Resolved");
    else
        QMessageBox::critical(this,"Error", model->lastError().text());
}

void complaintmanager::on_btnBack_clicked()
{
    this->close();
}

