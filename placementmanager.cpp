#include "placementmanager.h"
#include "ui_placementmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlTableModel>

placementmanager::placementmanager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::placementmanager)
{
    ui->setupUi(this);
    loadPlacements();
    this->showMaximized();
}

placementmanager::~placementmanager()
{
    delete ui;
}
void placementmanager::loadPlacements()
{
    model = new QSqlTableModel(this);
    model->setTable("placements");
    model->select();
    ui->tblPlacements->setModel(model);
    ui->tblPlacements->setColumnHidden(0,true); // hide ID
}

void placementmanager::on_btnRefresh_clicked()
{
    model->select();
}
void placementmanager::on_btnAddPlacement_clicked()
{
    QString company = ui->txtCompany->text();
    QString role = ui->txtRole->text();
    QString date = ui->txtDate->text();

    if(company.isEmpty() || role.isEmpty())
    {
        QMessageBox::warning(this,"Input Error","Please fill Company and Role fields");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO placements (company, role, date) VALUES (:company, :role, :date)");
    query.bindValue(":company", company);
    query.bindValue(":role", role);
    query.bindValue(":date", date);

    if(query.exec())
    {
        QMessageBox::information(this,"Success","Placement Added");
        ui->txtCompany->clear();
        ui->txtRole->clear();
        ui->txtDate->clear();
        model->select();
    }
    else
    {
        QMessageBox::critical(this,"Error", query.lastError().text());
    }
}

void placementmanager::on_btnDeletePlacement_clicked()
{
    int row = ui->tblPlacements->currentIndex().row();
    if(row < 0)
    {
        QMessageBox::warning(this,"Selection Error","Select a placement first");
        return;
    }

    model->removeRow(row);
    if(model->submitAll())
        QMessageBox::information(this,"Success","Placement Deleted");
    else
        QMessageBox::critical(this,"Error", model->lastError().text());
}

void placementmanager::on_pushButton_clicked()
{
     this->close();
}

