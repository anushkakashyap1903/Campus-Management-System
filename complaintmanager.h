#ifndef COMPLAINTMANAGER_H
#define COMPLAINTMANAGER_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class complaintmanager;
}

class complaintmanager : public QWidget
{
    Q_OBJECT

public:
    explicit complaintmanager(QWidget *parent = nullptr);
    ~complaintmanager();

private slots:
    void on_btnResolve_clicked();
    void on_btnRefresh_clicked();
    void on_btnBack_clicked();

private:
    Ui::complaintmanager *ui;
    QSqlTableModel *model;
    void loadComplaints();
};

#endif // COMPLAINTMANAGER_H
