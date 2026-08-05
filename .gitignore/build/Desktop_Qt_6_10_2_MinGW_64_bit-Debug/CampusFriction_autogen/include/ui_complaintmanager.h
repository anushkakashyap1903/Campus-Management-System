/********************************************************************************
** Form generated from reading UI file 'complaintmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLAINTMANAGER_H
#define UI_COMPLAINTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_complaintmanager
{
public:
    QPushButton *btnResolve;
    QPushButton *btnRefresh;
    QLabel *label;
    QTableView *tableViewComplaints;
    QPushButton *btnBack;

    void setupUi(QWidget *complaintmanager)
    {
        if (complaintmanager->objectName().isEmpty())
            complaintmanager->setObjectName("complaintmanager");
        complaintmanager->resize(539, 557);
        complaintmanager->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        btnResolve = new QPushButton(complaintmanager);
        btnResolve->setObjectName("btnResolve");
        btnResolve->setGeometry(QRect(10, 450, 291, 29));
        QFont font;
        font.setPointSize(12);
        btnResolve->setFont(font);
        btnResolve->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnRefresh = new QPushButton(complaintmanager);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(330, 450, 161, 29));
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
        label = new QLabel(complaintmanager);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 361, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font-size: 32px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        tableViewComplaints = new QTableView(complaintmanager);
        tableViewComplaints->setObjectName("tableViewComplaints");
        tableViewComplaints->setGeometry(QRect(60, 110, 421, 261));
        tableViewComplaints->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        btnBack = new QPushButton(complaintmanager);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(410, 520, 111, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font2.setPointSize(12);
        btnBack->setFont(font2);
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        retranslateUi(complaintmanager);

        QMetaObject::connectSlotsByName(complaintmanager);
    } // setupUi

    void retranslateUi(QWidget *complaintmanager)
    {
        complaintmanager->setWindowTitle(QCoreApplication::translate("complaintmanager", "Form", nullptr));
        btnResolve->setText(QCoreApplication::translate("complaintmanager", "Resolve / Delete Complaint", nullptr));
        btnRefresh->setText(QCoreApplication::translate("complaintmanager", "Refresh Table", nullptr));
        label->setText(QCoreApplication::translate("complaintmanager", "Complaint Manager", nullptr));
        btnBack->setText(QCoreApplication::translate("complaintmanager", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class complaintmanager: public Ui_complaintmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLAINTMANAGER_H
