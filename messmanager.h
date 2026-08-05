#ifndef MESSMANAGER_H
#define MESSMANAGER_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class messmanager;
}

class messmanager : public QWidget
{
    Q_OBJECT

public:
    explicit messmanager(QWidget *parent = nullptr);
    ~messmanager();

private slots:
    void on_btnAddMenu_clicked();
    void on_btnDeleteMenu_clicked();
    void on_btnRefresh_clicked();

    void on_btnBack_clicked();

private:
    Ui::messmanager *ui;
    QSqlTableModel *model;
    void loadMenu();
};

#endif // MESSMANAGER_H
