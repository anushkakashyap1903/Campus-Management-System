#ifndef TEACHERDASHBOARD_H
#define TEACHERDASHBOARD_H

#include <QMainWindow>

namespace Ui {
class teacherdashboard;
}

class teacherdashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacherdashboard(QWidget *parent = nullptr);
    ~teacherdashboard();

private slots:

    void on_btnStudents_clicked();
    void on_btnAttendance_clicked();
    void on_btnResult_clicked();
    void on_btnLogout_clicked();

private:
    Ui::teacherdashboard *ui;
protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // TEACHERDASHBOARD_H
