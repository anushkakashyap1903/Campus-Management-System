#ifndef STUDENTDASHBOARD_H
#define STUDENTDASHBOARD_H

#include <QMainWindow>
#include <QSqlQueryModel>

namespace Ui {
class studentdashboard;
}

class studentdashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit studentdashboard(int id, QWidget *parent = nullptr);
    ~studentdashboard();

private slots:
    void on_pushButtonSubmitComplaint_clicked();
    void on_pushButtonLogout_clicked();

private:
    Ui::studentdashboard *ui;
    int currentStudentId;
    QSqlQueryModel *model;

    QSqlQueryModel *attendanceModel;
    QSqlQueryModel *resultsModel;
    QSqlQueryModel *messModel;
    QSqlQueryModel *placementModel;

    void loadAttendance();
    void loadResults();
    void calculateCGPA();
    void loadMessMenu();
    void loadPlacements();
    void loadComplaints();
protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif
