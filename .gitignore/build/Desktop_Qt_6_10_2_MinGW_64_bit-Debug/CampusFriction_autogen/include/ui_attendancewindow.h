/********************************************************************************
** Form generated from reading UI file 'attendancewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEWINDOW_H
#define UI_ATTENDANCEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attendancewindow
{
public:
    QLabel *lblTitle;
    QLabel *lblStudent;
    QComboBox *comboStudent;
    QLabel *lblSubject;
    QLabel *lblDate;
    QDateEdit *dateAttendance;
    QLabel *lblStatus;
    QComboBox *comboStatus;
    QPushButton *btnSaveAttendance;
    QPushButton *btnRefresh;
    QTableView *tableAttendance;
    QPushButton *btnBack;
    QComboBox *comboSubject;

    void setupUi(QWidget *attendancewindow)
    {
        if (attendancewindow->objectName().isEmpty())
            attendancewindow->setObjectName("attendancewindow");
        attendancewindow->resize(920, 645);
        attendancewindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        lblTitle = new QLabel(attendancewindow);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(250, 20, 431, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setBold(true);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("font-size: 32px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        lblStudent = new QLabel(attendancewindow);
        lblStudent->setObjectName("lblStudent");
        lblStudent->setEnabled(true);
        lblStudent->setGeometry(QRect(310, 120, 91, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setPointSize(12);
        lblStudent->setFont(font1);
        lblStudent->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        comboStudent = new QComboBox(attendancewindow);
        comboStudent->setObjectName("comboStudent");
        comboStudent->setGeometry(QRect(440, 120, 141, 41));
        comboStudent->setFont(font1);
        comboStudent->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        lblSubject = new QLabel(attendancewindow);
        lblSubject->setObjectName("lblSubject");
        lblSubject->setGeometry(QRect(310, 180, 91, 31));
        lblSubject->setFont(font1);
        lblSubject->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        lblDate = new QLabel(attendancewindow);
        lblDate->setObjectName("lblDate");
        lblDate->setGeometry(QRect(320, 220, 71, 31));
        lblDate->setFont(font1);
        lblDate->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        dateAttendance = new QDateEdit(attendancewindow);
        dateAttendance->setObjectName("dateAttendance");
        dateAttendance->setGeometry(QRect(440, 210, 141, 41));
        dateAttendance->setFont(font1);
        dateAttendance->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        dateAttendance->setCalendarPopup(true);
        lblStatus = new QLabel(attendancewindow);
        lblStatus->setObjectName("lblStatus");
        lblStatus->setGeometry(QRect(320, 270, 81, 31));
        lblStatus->setFont(font1);
        lblStatus->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        comboStatus = new QComboBox(attendancewindow);
        comboStatus->addItem(QString());
        comboStatus->addItem(QString());
        comboStatus->setObjectName("comboStatus");
        comboStatus->setGeometry(QRect(440, 260, 141, 41));
        comboStatus->setFont(font1);
        comboStatus->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        btnSaveAttendance = new QPushButton(attendancewindow);
        btnSaveAttendance->setObjectName("btnSaveAttendance");
        btnSaveAttendance->setGeometry(QRect(100, 370, 251, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font2.setPointSize(14);
        btnSaveAttendance->setFont(font2);
        btnSaveAttendance->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnRefresh = new QPushButton(attendancewindow);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(400, 370, 171, 41));
        btnRefresh->setFont(font2);
        btnRefresh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        tableAttendance = new QTableView(attendancewindow);
        tableAttendance->setObjectName("tableAttendance");
        tableAttendance->setGeometry(QRect(230, 430, 461, 201));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font3.setPointSize(10);
        tableAttendance->setFont(font3);
        tableAttendance->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        btnBack = new QPushButton(attendancewindow);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(620, 370, 211, 41));
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
        comboSubject = new QComboBox(attendancewindow);
        comboSubject->addItem(QString());
        comboSubject->addItem(QString());
        comboSubject->addItem(QString());
        comboSubject->addItem(QString());
        comboSubject->setObjectName("comboSubject");
        comboSubject->setGeometry(QRect(440, 170, 141, 41));
        QFont font4;
        font4.setPointSize(12);
        comboSubject->setFont(font4);
        comboSubject->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));

        retranslateUi(attendancewindow);

        QMetaObject::connectSlotsByName(attendancewindow);
    } // setupUi

    void retranslateUi(QWidget *attendancewindow)
    {
        attendancewindow->setWindowTitle(QCoreApplication::translate("attendancewindow", "Form", nullptr));
        lblTitle->setText(QCoreApplication::translate("attendancewindow", "Attendance Manager", nullptr));
        lblStudent->setText(QCoreApplication::translate("attendancewindow", "Student", nullptr));
        lblSubject->setText(QCoreApplication::translate("attendancewindow", "Subject", nullptr));
        lblDate->setText(QCoreApplication::translate("attendancewindow", "Date", nullptr));
        lblStatus->setText(QCoreApplication::translate("attendancewindow", "Status", nullptr));
        comboStatus->setItemText(0, QCoreApplication::translate("attendancewindow", "Present", nullptr));
        comboStatus->setItemText(1, QCoreApplication::translate("attendancewindow", "Absent", nullptr));

        btnSaveAttendance->setText(QCoreApplication::translate("attendancewindow", "Save Attendance", nullptr));
        btnRefresh->setText(QCoreApplication::translate("attendancewindow", "Refresh", nullptr));
        btnBack->setText(QCoreApplication::translate("attendancewindow", "Back", nullptr));
        comboSubject->setItemText(0, QCoreApplication::translate("attendancewindow", "OOPS", nullptr));
        comboSubject->setItemText(1, QCoreApplication::translate("attendancewindow", "DAA", nullptr));
        comboSubject->setItemText(2, QCoreApplication::translate("attendancewindow", "Software", nullptr));
        comboSubject->setItemText(3, QCoreApplication::translate("attendancewindow", "System", nullptr));

    } // retranslateUi

};

namespace Ui {
    class attendancewindow: public Ui_attendancewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEWINDOW_H
