/********************************************************************************
** Form generated from reading UI file 'teachermanager.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMANAGER_H
#define UI_TEACHERMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teachermanager
{
public:
    QLabel *labelTitle;
    QTableView *tblTeachers;
    QLineEdit *txtTeacherName;
    QLabel *labelTeacher;
    QLabel *labelSubject;
    QLineEdit *txtSubject;
    QPushButton *btnAddTeacher;
    QPushButton *btnDeleteTeacher;
    QLabel *labelTeacherid;
    QLineEdit *txtId;
    QPushButton *pushButton;

    void setupUi(QWidget *teachermanager)
    {
        if (teachermanager->objectName().isEmpty())
            teachermanager->setObjectName("teachermanager");
        teachermanager->resize(537, 551);
        teachermanager->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        labelTitle = new QLabel(teachermanager);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setGeometry(QRect(90, 0, 341, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setBold(true);
        labelTitle->setFont(font);
        labelTitle->setStyleSheet(QString::fromUtf8("font-size: 35px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        tblTeachers = new QTableView(teachermanager);
        tblTeachers->setObjectName("tblTeachers");
        tblTeachers->setGeometry(QRect(40, 60, 441, 231));
        tblTeachers->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        txtTeacherName = new QLineEdit(teachermanager);
        txtTeacherName->setObjectName("txtTeacherName");
        txtTeacherName->setGeometry(QRect(270, 370, 171, 28));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setPointSize(12);
        txtTeacherName->setFont(font1);
        txtTeacherName->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        labelTeacher = new QLabel(teachermanager);
        labelTeacher->setObjectName("labelTeacher");
        labelTeacher->setGeometry(QRect(50, 380, 161, 20));
        labelTeacher->setFont(font1);
        labelTeacher->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        labelSubject = new QLabel(teachermanager);
        labelSubject->setObjectName("labelSubject");
        labelSubject->setGeometry(QRect(80, 430, 91, 31));
        labelSubject->setFont(font1);
        labelSubject->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtSubject = new QLineEdit(teachermanager);
        txtSubject->setObjectName("txtSubject");
        txtSubject->setGeometry(QRect(270, 430, 171, 28));
        txtSubject->setFont(font1);
        txtSubject->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        btnAddTeacher = new QPushButton(teachermanager);
        btnAddTeacher->setObjectName("btnAddTeacher");
        btnAddTeacher->setGeometry(QRect(30, 490, 151, 29));
        btnAddTeacher->setFont(font1);
        btnAddTeacher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnDeleteTeacher = new QPushButton(teachermanager);
        btnDeleteTeacher->setObjectName("btnDeleteTeacher");
        btnDeleteTeacher->setGeometry(QRect(200, 490, 181, 29));
        btnDeleteTeacher->setFont(font1);
        btnDeleteTeacher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        labelTeacherid = new QLabel(teachermanager);
        labelTeacherid->setObjectName("labelTeacherid");
        labelTeacherid->setGeometry(QRect(70, 330, 121, 20));
        labelTeacherid->setFont(font1);
        labelTeacherid->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtId = new QLineEdit(teachermanager);
        txtId->setObjectName("txtId");
        txtId->setGeometry(QRect(270, 320, 161, 28));
        txtId->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        pushButton = new QPushButton(teachermanager);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 490, 111, 29));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        retranslateUi(teachermanager);

        QMetaObject::connectSlotsByName(teachermanager);
    } // setupUi

    void retranslateUi(QWidget *teachermanager)
    {
        teachermanager->setWindowTitle(QCoreApplication::translate("teachermanager", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("teachermanager", "Teacher Manager", nullptr));
        labelTeacher->setText(QCoreApplication::translate("teachermanager", "Teacher Name", nullptr));
        labelSubject->setText(QCoreApplication::translate("teachermanager", "Subject", nullptr));
        btnAddTeacher->setText(QCoreApplication::translate("teachermanager", "Add Teacher", nullptr));
        btnDeleteTeacher->setText(QCoreApplication::translate("teachermanager", "Delete Teacher", nullptr));
        labelTeacherid->setText(QCoreApplication::translate("teachermanager", "Teacher ID", nullptr));
        pushButton->setText(QCoreApplication::translate("teachermanager", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teachermanager: public Ui_teachermanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMANAGER_H
