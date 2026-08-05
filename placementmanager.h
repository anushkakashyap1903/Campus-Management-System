#ifndef PLACEMENTMANAGER_H
#define PLACEMENTMANAGER_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class placementmanager;
}

class placementmanager : public QWidget
{
    Q_OBJECT

public:
    explicit placementmanager(QWidget *parent = nullptr);
    ~placementmanager();

private slots:
    void on_btnAddPlacement_clicked();
    void on_btnDeletePlacement_clicked();
    void on_btnRefresh_clicked();

    void on_pushButton_clicked();

private:
    Ui::placementmanager *ui;
    QSqlTableModel *model;
    void loadPlacements();
};

#endif // PLACEMENTMANAGER_H
