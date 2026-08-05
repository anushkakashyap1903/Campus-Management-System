#ifndef NOTICEMANAGER_H
#define NOTICEMANAGER_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class noticemanager;
}

class noticemanager : public QWidget
{
    Q_OBJECT

public:
    explicit noticemanager(QWidget *parent = nullptr);
    ~noticemanager();

private slots:
    void on_btnAddNotice_clicked();
    void on_btnDeleteNotice_clicked();
    void on_btnRefresh_clicked();

    void on_btnBack_clicked();

private:
    Ui::noticemanager *ui;
    QSqlTableModel *model;
    void loadNotices();
};

#endif // NOTICEMANAGER_H
