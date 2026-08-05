#ifndef TEACHERMANAGER_H
#define TEACHERMANAGER_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class teachermanager;
}

class teachermanager : public QWidget
{
    Q_OBJECT

public:
    explicit teachermanager(QWidget *parent = nullptr);
    ~teachermanager();

private slots:
    void on_btnAddTeacher_clicked();
    void on_btnDeleteTeacher_clicked();

    void on_pushButton_clicked();

private:
    Ui::teachermanager *ui;
    QSqlTableModel *model;
    void loadTeachers();
};

#endif // TEACHERMANAGER_H
