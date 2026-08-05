/********************************************************************************
** Form generated from reading UI file 'messmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSMANAGER_H
#define UI_MESSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_messmanager
{
public:
    QTableView *tableViewMessMenu;
    QLineEdit *txtDay;
    QLineEdit *txtMeal;
    QPushButton *btnRefresh;
    QPushButton *btnAddMenu;
    QPushButton *btnDeleteMenu;
    QLineEdit *txtMenuItem;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btnBack;

    void setupUi(QWidget *messmanager)
    {
        if (messmanager->objectName().isEmpty())
            messmanager->setObjectName("messmanager");
        messmanager->resize(520, 550);
        messmanager->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        tableViewMessMenu = new QTableView(messmanager);
        tableViewMessMenu->setObjectName("tableViewMessMenu");
        tableViewMessMenu->setGeometry(QRect(30, 70, 461, 191));
        tableViewMessMenu->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border: 1px solid rgba(255,255,255,0.2);\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"    gridline-color: rgba(255,255,255,0.2);\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    color: white;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}"));
        txtDay = new QLineEdit(messmanager);
        txtDay->setObjectName("txtDay");
        txtDay->setGeometry(QRect(270, 290, 113, 28));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setPointSize(12);
        txtDay->setFont(font);
        txtDay->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtMeal = new QLineEdit(messmanager);
        txtMeal->setObjectName("txtMeal");
        txtMeal->setGeometry(QRect(270, 340, 113, 28));
        txtMeal->setFont(font);
        txtMeal->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        btnRefresh = new QPushButton(messmanager);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(370, 470, 141, 29));
        btnRefresh->setFont(font);
        btnRefresh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnAddMenu = new QPushButton(messmanager);
        btnAddMenu->setObjectName("btnAddMenu");
        btnAddMenu->setGeometry(QRect(10, 470, 161, 29));
        btnAddMenu->setFont(font);
        btnAddMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnDeleteMenu = new QPushButton(messmanager);
        btnDeleteMenu->setObjectName("btnDeleteMenu");
        btnDeleteMenu->setGeometry(QRect(180, 470, 191, 29));
        btnDeleteMenu->setFont(font);
        btnDeleteMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        txtMenuItem = new QLineEdit(messmanager);
        txtMenuItem->setObjectName("txtMenuItem");
        txtMenuItem->setGeometry(QRect(270, 400, 113, 28));
        txtMenuItem->setFont(font);
        txtMenuItem->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        label = new QLabel(messmanager);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 491, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font-size: 32px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        label_2 = new QLabel(messmanager);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 280, 63, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        label_3 = new QLabel(messmanager);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 350, 63, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        label_4 = new QLabel(messmanager);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 400, 63, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        btnBack = new QPushButton(messmanager);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(420, 510, 90, 29));
        btnBack->setFont(font);
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        retranslateUi(messmanager);

        QMetaObject::connectSlotsByName(messmanager);
    } // setupUi

    void retranslateUi(QWidget *messmanager)
    {
        messmanager->setWindowTitle(QCoreApplication::translate("messmanager", "Form", nullptr));
        txtDay->setText(QString());
        txtMeal->setText(QString());
        btnRefresh->setText(QCoreApplication::translate("messmanager", "Refresh Table", nullptr));
        btnAddMenu->setText(QCoreApplication::translate("messmanager", "Add Menu Item", nullptr));
        btnDeleteMenu->setText(QCoreApplication::translate("messmanager", "Delete Menu Item", nullptr));
        txtMenuItem->setText(QString());
        label->setText(QCoreApplication::translate("messmanager", "Hostel Mess Menu Manager", nullptr));
        label_2->setText(QCoreApplication::translate("messmanager", "Day", nullptr));
        label_3->setText(QCoreApplication::translate("messmanager", "Meal", nullptr));
        label_4->setText(QCoreApplication::translate("messmanager", "Menu Item", nullptr));
        btnBack->setText(QCoreApplication::translate("messmanager", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class messmanager: public Ui_messmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSMANAGER_H
