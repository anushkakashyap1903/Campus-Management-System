#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QMainWindow>
#include "ui_admindashboard.h"

namespace Ui {
class admindashboard;
}

class admindashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit admindashboard(QWidget *parent = nullptr);
    ~admindashboard();

private slots:
    void on_btnStudents_clicked();
    void on_btnTeachers_clicked();
    void on_btnComplaints_clicked();
    void on_btnNotice_clicked();
    void on_btnPlacement_clicked();
    void on_btnMess_clicked();
    void on_btnLogout_clicked();
    void on_btnRefresh_clicked();

private:
    Ui::admindashboard *ui;
    void loadStatistics();
protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // ADMINDASHBOARD_H
