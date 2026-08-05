#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class studentmanager;
}

class studentmanager : public QWidget
{
    Q_OBJECT

public:
    explicit studentmanager(QWidget *parent = nullptr);
    ~studentmanager();

private slots:

    void on_btnAddStudent_clicked();
    void on_btnRefresh_clicked();
    void on_btnDeleteStudent_clicked();

    void on_btnBack_clicked();

private:
    Ui::studentmanager *ui;
    QSqlTableModel *model;
    void loadStudents();
};

#endif // STUDENTMANAGER_H
