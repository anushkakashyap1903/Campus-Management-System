/********************************************************************************
** Form generated from reading UI file 'studentmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGER_H
#define UI_STUDENTMANAGER_H

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

class Ui_studentmanager
{
public:
    QLabel *lblTitle;
    QLabel *lblName;
    QLabel *lblRoll;
    QLabel *lblCourse;
    QPushButton *btnAddStudent;
    QPushButton *btnRefresh;
    QTableView *tableStudents;
    QPushButton *btnDeleteStudent;
    QPushButton *btnBack;
    QLineEdit *txtRoll;
    QLineEdit *txtName;
    QLineEdit *txtCourse;
    QLabel *lblBranch;
    QComboBox *comboBranch;

    void setupUi(QWidget *studentmanager)
    {
        if (studentmanager->objectName().isEmpty())
            studentmanager->setObjectName("studentmanager");
        studentmanager->resize(500, 541);
        studentmanager->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        lblTitle = new QLabel(studentmanager);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(90, 20, 331, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setBold(true);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("font-size: 35px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        lblName = new QLabel(studentmanager);
        lblName->setObjectName("lblName");
        lblName->setGeometry(QRect(80, 90, 81, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setPointSize(11);
        lblName->setFont(font1);
        lblRoll = new QLabel(studentmanager);
        lblRoll->setObjectName("lblRoll");
        lblRoll->setGeometry(QRect(60, 140, 121, 20));
        lblRoll->setFont(font1);
        lblRoll->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        lblCourse = new QLabel(studentmanager);
        lblCourse->setObjectName("lblCourse");
        lblCourse->setGeometry(QRect(70, 180, 71, 20));
        lblCourse->setFont(font1);
        btnAddStudent = new QPushButton(studentmanager);
        btnAddStudent->setObjectName("btnAddStudent");
        btnAddStudent->setGeometry(QRect(0, 300, 141, 29));
        btnAddStudent->setFont(font1);
        btnAddStudent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnRefresh = new QPushButton(studentmanager);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(330, 300, 151, 29));
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
        tableStudents = new QTableView(studentmanager);
        tableStudents->setObjectName("tableStudents");
        tableStudents->setGeometry(QRect(50, 350, 401, 141));
        tableStudents->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        btnDeleteStudent = new QPushButton(studentmanager);
        btnDeleteStudent->setObjectName("btnDeleteStudent");
        btnDeleteStudent->setGeometry(QRect(149, 300, 171, 29));
        btnDeleteStudent->setFont(font1);
        btnDeleteStudent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnBack = new QPushButton(studentmanager);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(400, 500, 90, 29));
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
        txtRoll = new QLineEdit(studentmanager);
        txtRoll->setObjectName("txtRoll");
        txtRoll->setGeometry(QRect(200, 140, 113, 28));
        txtRoll->setFont(font1);
        txtRoll->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtName = new QLineEdit(studentmanager);
        txtName->setObjectName("txtName");
        txtName->setGeometry(QRect(200, 90, 113, 28));
        txtName->setFont(font1);
        txtName->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtCourse = new QLineEdit(studentmanager);
        txtCourse->setObjectName("txtCourse");
        txtCourse->setGeometry(QRect(200, 180, 113, 28));
        txtCourse->setFont(font1);
        txtCourse->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        lblBranch = new QLabel(studentmanager);
        lblBranch->setObjectName("lblBranch");
        lblBranch->setGeometry(QRect(70, 230, 91, 31));
        lblBranch->setFont(font1);
        comboBranch = new QComboBox(studentmanager);
        comboBranch->addItem(QString());
        comboBranch->addItem(QString());
        comboBranch->addItem(QString());
        comboBranch->addItem(QString());
        comboBranch->setObjectName("comboBranch");
        comboBranch->setGeometry(QRect(200, 230, 111, 28));
        comboBranch->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));

        retranslateUi(studentmanager);

        QMetaObject::connectSlotsByName(studentmanager);
    } // setupUi

    void retranslateUi(QWidget *studentmanager)
    {
        studentmanager->setWindowTitle(QCoreApplication::translate("studentmanager", "Form", nullptr));
        lblTitle->setText(QCoreApplication::translate("studentmanager", "Student Manager", nullptr));
        lblName->setText(QCoreApplication::translate("studentmanager", "Name", nullptr));
        lblRoll->setText(QCoreApplication::translate("studentmanager", "Roll Number", nullptr));
        lblCourse->setText(QCoreApplication::translate("studentmanager", "Course", nullptr));
        btnAddStudent->setText(QCoreApplication::translate("studentmanager", "Add Student", nullptr));
        btnRefresh->setText(QCoreApplication::translate("studentmanager", "Refresh List", nullptr));
        btnDeleteStudent->setText(QCoreApplication::translate("studentmanager", "Delete Student", nullptr));
        btnBack->setText(QCoreApplication::translate("studentmanager", "Back", nullptr));
        lblBranch->setText(QCoreApplication::translate("studentmanager", "Branch", nullptr));
        comboBranch->setItemText(0, QCoreApplication::translate("studentmanager", "CSE", nullptr));
        comboBranch->setItemText(1, QCoreApplication::translate("studentmanager", "IT", nullptr));
        comboBranch->setItemText(2, QCoreApplication::translate("studentmanager", "ECE", nullptr));
        comboBranch->setItemText(3, QCoreApplication::translate("studentmanager", "AI", nullptr));

    } // retranslateUi

};

namespace Ui {
    class studentmanager: public Ui_studentmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGER_H
