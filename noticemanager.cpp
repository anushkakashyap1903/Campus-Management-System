#include "noticemanager.h"
#include "ui_noticemanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlTableModel>

noticemanager::noticemanager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::noticemanager)
{
    ui->setupUi(this);
     loadNotices();
    this->showMaximized();
}

noticemanager::~noticemanager()
{
    delete ui;
}
void noticemanager::loadNotices()
{
    model = new QSqlTableModel(this);
    model->setTable("notices");
    model->select();
    ui->tblNotices->setModel(model);
    ui->tblNotices->setColumnHidden(0,true); // hide ID column
}

void noticemanager::on_btnRefresh_clicked()
{
    model->select(); // refresh table
}
void noticemanager::on_btnAddNotice_clicked()
{
    QString title = ui->txtNoticeTitle->text();
    QString content = ui->txtNoticeContent->toPlainText();

    if(title.isEmpty() || content.isEmpty())
    {
        QMessageBox::warning(this,"Input Error","Please fill all fields");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO notices (title, content) VALUES (:title, :content)");
    query.bindValue(":title", title);
    query.bindValue(":content", content);

    if(query.exec())
    {
        QMessageBox::information(this,"Success","Notice Added");
        ui->txtNoticeTitle->clear();
        ui->txtNoticeContent->clear();
        model->select();
    }
    else
    {
        QMessageBox::critical(this,"Error", query.lastError().text());
    }
}

void noticemanager::on_btnDeleteNotice_clicked()
{
    int row = ui->tblNotices->currentIndex().row();
    if(row < 0)
    {
        QMessageBox::warning(this,"Selection Error","Select a notice first");
        return;
    }

    model->removeRow(row);
    if(model->submitAll())
        QMessageBox::information(this,"Success","Notice Deleted");
    else
        QMessageBox::critical(this,"Error", model->lastError().text());
}

void noticemanager::on_btnBack_clicked()
{
     this->close();
}

