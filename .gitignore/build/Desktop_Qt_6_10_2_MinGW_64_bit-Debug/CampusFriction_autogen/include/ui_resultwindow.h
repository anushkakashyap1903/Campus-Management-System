/********************************************************************************
** Form generated from reading UI file 'resultwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTWINDOW_H
#define UI_RESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultwindow
{
public:
    QLabel *lblTitle;
    QLabel *lblStudent;
    QComboBox *comboStudent;
    QLabel *lblSubject;
    QLineEdit *txtMarks;
    QLineEdit *txtGrade;
    QLabel *lblMarks;
    QLabel *lblGrade;
    QPushButton *btnRefresh;
    QPushButton *btnSaveResult;
    QTableView *tableResults;
    QPushButton *btnBack;
    QComboBox *comboSubject;

    void setupUi(QWidget *resultwindow)
    {
        if (resultwindow->objectName().isEmpty())
            resultwindow->setObjectName("resultwindow");
        resultwindow->resize(690, 627);
        resultwindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        lblTitle = new QLabel(resultwindow);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(90, 20, 321, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setBold(true);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("font-size: 35px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        lblStudent = new QLabel(resultwindow);
        lblStudent->setObjectName("lblStudent");
        lblStudent->setGeometry(QRect(70, 90, 81, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setPointSize(11);
        lblStudent->setFont(font1);
        lblStudent->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        comboStudent = new QComboBox(resultwindow);
        comboStudent->setObjectName("comboStudent");
        comboStudent->setGeometry(QRect(200, 90, 171, 28));
        comboStudent->setFont(font1);
        comboStudent->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        lblSubject = new QLabel(resultwindow);
        lblSubject->setObjectName("lblSubject");
        lblSubject->setGeometry(QRect(70, 150, 81, 20));
        lblSubject->setFont(font1);
        lblSubject->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtMarks = new QLineEdit(resultwindow);
        txtMarks->setObjectName("txtMarks");
        txtMarks->setGeometry(QRect(200, 200, 171, 28));
        txtMarks->setFont(font1);
        txtMarks->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtGrade = new QLineEdit(resultwindow);
        txtGrade->setObjectName("txtGrade");
        txtGrade->setGeometry(QRect(200, 250, 171, 28));
        txtGrade->setFont(font1);
        txtGrade->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtGrade->setReadOnly(true);
        lblMarks = new QLabel(resultwindow);
        lblMarks->setObjectName("lblMarks");
        lblMarks->setGeometry(QRect(70, 200, 63, 20));
        lblMarks->setFont(font1);
        lblMarks->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        lblGrade = new QLabel(resultwindow);
        lblGrade->setObjectName("lblGrade");
        lblGrade->setGeometry(QRect(70, 250, 71, 20));
        lblGrade->setFont(font1);
        lblGrade->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        btnRefresh = new QPushButton(resultwindow);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(200, 300, 121, 29));
        btnRefresh->setFont(font1);
        btnRefresh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnSaveResult = new QPushButton(resultwindow);
        btnSaveResult->setObjectName("btnSaveResult");
        btnSaveResult->setGeometry(QRect(50, 300, 141, 29));
        btnSaveResult->setFont(font1);
        btnSaveResult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        tableResults = new QTableView(resultwindow);
        tableResults->setObjectName("tableResults");
        tableResults->setGeometry(QRect(30, 360, 441, 171));
        tableResults->setFont(font1);
        tableResults->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        btnBack = new QPushButton(resultwindow);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(340, 300, 101, 29));
        btnBack->setFont(font1);
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        comboSubject = new QComboBox(resultwindow);
        comboSubject->addItem(QString());
        comboSubject->addItem(QString());
        comboSubject->addItem(QString());
        comboSubject->addItem(QString());
        comboSubject->setObjectName("comboSubject");
        comboSubject->setGeometry(QRect(200, 150, 171, 28));
        comboSubject->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));

        retranslateUi(resultwindow);

        QMetaObject::connectSlotsByName(resultwindow);
    } // setupUi

    void retranslateUi(QWidget *resultwindow)
    {
        resultwindow->setWindowTitle(QCoreApplication::translate("resultwindow", "Form", nullptr));
        lblTitle->setText(QCoreApplication::translate("resultwindow", "Result Manager", nullptr));
        lblStudent->setText(QCoreApplication::translate("resultwindow", "Student", nullptr));
        lblSubject->setText(QCoreApplication::translate("resultwindow", "Subject", nullptr));
        lblMarks->setText(QCoreApplication::translate("resultwindow", "Marks", nullptr));
        lblGrade->setText(QCoreApplication::translate("resultwindow", "Grade", nullptr));
        btnRefresh->setText(QCoreApplication::translate("resultwindow", "Refresh", nullptr));
        btnSaveResult->setText(QCoreApplication::translate("resultwindow", "Save Result", nullptr));
        btnBack->setText(QCoreApplication::translate("resultwindow", "Back", nullptr));
        comboSubject->setItemText(0, QCoreApplication::translate("resultwindow", "OOPS", nullptr));
        comboSubject->setItemText(1, QCoreApplication::translate("resultwindow", "DAA", nullptr));
        comboSubject->setItemText(2, QCoreApplication::translate("resultwindow", "System", nullptr));
        comboSubject->setItemText(3, QCoreApplication::translate("resultwindow", "Software", nullptr));

    } // retranslateUi

};

namespace Ui {
    class resultwindow: public Ui_resultwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTWINDOW_H
