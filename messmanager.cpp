#include "messmanager.h"
#include "ui_messmanager.h"
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

messmanager::messmanager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::messmanager)
{
    ui->setupUi(this);
    loadMenu();
    this->showMaximized();
}

messmanager::~messmanager()
{
    delete ui;
}
void messmanager::loadMenu()
{
    model = new QSqlTableModel(this);
    model->setTable("messmenu");  // Table name
    model->select();
    ui->tableViewMessMenu->setModel(model);
    ui->tableViewMessMenu->setColumnHidden(0,true); // hide ID column
}

void messmanager::on_btnRefresh_clicked()
{
    model->select();
}
void messmanager::on_btnAddMenu_clicked()
{
    QString day = ui->txtDay->text();
    QString meal = ui->txtMeal->text();
    QString menuItem = ui->txtMenuItem->text();

    if(day.isEmpty() || meal.isEmpty() || menuItem.isEmpty())
    {
        QMessageBox::warning(this,"Input Error","Please fill all fields");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO messmenu (day, meal, menuitem) VALUES (:day, :meal, :menuitem)");
    query.bindValue(":day", day);
    query.bindValue(":meal", meal);
    query.bindValue(":menuitem", menuItem);

    if(query.exec())
    {
        QMessageBox::information(this,"Success","Menu Item Added");
        ui->txtDay->clear();
        ui->txtMeal->clear();
        ui->txtMenuItem->clear();
        model->select();
    }
    else
    {
        QMessageBox::critical(this,"Error", query.lastError().text());
    }
}

void messmanager::on_btnDeleteMenu_clicked()
{
    int row = ui->tableViewMessMenu->currentIndex().row();
    if(row < 0)
    {
        QMessageBox::warning(this,"Selection Error","Select a menu item first");
        return;
    }

    model->removeRow(row);
    if(model->submitAll())
        QMessageBox::information(this,"Success","Menu Item Deleted");
    else
        QMessageBox::critical(this,"Error", model->lastError().text());
}

void messmanager::on_btnBack_clicked()
{
     this->close();
}

