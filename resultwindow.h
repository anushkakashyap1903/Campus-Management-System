#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class resultwindow;
}

class resultwindow : public QWidget
{
    Q_OBJECT

public:
    explicit resultwindow(QWidget *parent = nullptr);
    ~resultwindow();

private slots:

    void on_btnSaveResult_clicked();
    void on_btnRefresh_clicked();

    void on_btnBack_clicked();

private:
    Ui::resultwindow *ui;
    QSqlQueryModel *model;

    void loadStudents();
    void loadResults();
    QString calculateGrade(int marks);
};

#endif // RESULTWINDOW_H
