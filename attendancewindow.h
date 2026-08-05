#ifndef ATTENDANCEWINDOW_H
#define ATTENDANCEWINDOW_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class attendancewindow;
}

class attendancewindow : public QWidget
{
    Q_OBJECT

public:
    explicit attendancewindow(QWidget *parent = nullptr);
    ~attendancewindow();

private slots:

    void on_btnSaveAttendance_clicked();
    void on_btnRefresh_clicked();
    void on_btnBack_clicked();

private:
    Ui::attendancewindow *ui;
    QSqlQueryModel *model;

    void loadStudents();
    void loadAttendance();
};

#endif // ATTENDANCEWINDOW_H
