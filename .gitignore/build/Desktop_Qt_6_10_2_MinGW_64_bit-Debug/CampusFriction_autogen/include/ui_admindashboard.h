/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admindashboard
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *labelTitle;
    QLabel *label;
    QLabel *lblStudents;
    QLabel *label_2;
    QLabel *lblTeachers;
    QLabel *label_3;
    QLabel *lblComplaints;
    QLabel *lblPlacements;
    QLabel *label_4;
    QPushButton *btnTeachers;
    QPushButton *btnStudents;
    QPushButton *btnComplaints;
    QPushButton *btnNotice;
    QPushButton *btnMess;
    QPushButton *btnPlacement;
    QPushButton *btnRefresh;
    QPushButton *btnLogout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admindashboard)
    {
        if (admindashboard->objectName().isEmpty())
            admindashboard->setObjectName("admindashboard");
        admindashboard->resize(1032, 737);
        admindashboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        centralwidget = new QWidget(admindashboard);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, -40, 1000, 700));
        widget->setMinimumSize(QSize(1000, 700));
        QFont font;
        font.setPointSize(11);
        widget->setFont(font);
        labelTitle = new QLabel(widget);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setGeometry(QRect(270, 30, 481, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setBold(true);
        labelTitle->setFont(font1);
        labelTitle->setStyleSheet(QString::fromUtf8("font-size: 35px;\n"
"font-weight: bold;\n"
"color: #00cec9;\n"
"letter-spacing: 1px;"));
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 160, 151, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-size: px;\n"
"}"));
        lblStudents = new QLabel(widget);
        lblStudents->setObjectName("lblStudents");
        lblStudents->setGeometry(QRect(560, 160, 71, 31));
        lblStudents->setFont(font);
        lblStudents->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-size: px;\n"
"}"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 220, 151, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-size: px;\n"
"}"));
        lblTeachers = new QLabel(widget);
        lblTeachers->setObjectName("lblTeachers");
        lblTeachers->setGeometry(QRect(560, 220, 71, 31));
        lblTeachers->setFont(font);
        lblTeachers->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-size: px;\n"
"}"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 290, 151, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-size: px;\n"
"}"));
        lblComplaints = new QLabel(widget);
        lblComplaints->setObjectName("lblComplaints");
        lblComplaints->setGeometry(QRect(560, 290, 71, 31));
        lblComplaints->setFont(font);
        lblComplaints->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-size: px;\n"
"}"));
        lblPlacements = new QLabel(widget);
        lblPlacements->setObjectName("lblPlacements");
        lblPlacements->setGeometry(QRect(560, 350, 71, 31));
        lblPlacements->setFont(font);
        lblPlacements->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-size: px;\n"
"}"));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 350, 151, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-size: px;\n"
"}"));
        btnTeachers = new QPushButton(widget);
        btnTeachers->setObjectName("btnTeachers");
        btnTeachers->setGeometry(QRect(70, 430, 198, 36));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font2.setPointSize(12);
        btnTeachers->setFont(font2);
        btnTeachers->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnStudents = new QPushButton(widget);
        btnStudents->setObjectName("btnStudents");
        btnStudents->setGeometry(QRect(360, 430, 195, 36));
        btnStudents->setFont(font2);
        btnStudents->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnComplaints = new QPushButton(widget);
        btnComplaints->setObjectName("btnComplaints");
        btnComplaints->setGeometry(QRect(70, 520, 201, 36));
        btnComplaints->setFont(font2);
        btnComplaints->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnNotice = new QPushButton(widget);
        btnNotice->setObjectName("btnNotice");
        btnNotice->setGeometry(QRect(670, 520, 211, 36));
        btnNotice->setFont(font2);
        btnNotice->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnMess = new QPushButton(widget);
        btnMess->setObjectName("btnMess");
        btnMess->setGeometry(QRect(360, 520, 204, 36));
        btnMess->setFont(font2);
        btnMess->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnPlacement = new QPushButton(widget);
        btnPlacement->setObjectName("btnPlacement");
        btnPlacement->setGeometry(QRect(660, 440, 216, 36));
        btnPlacement->setFont(font2);
        btnPlacement->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnRefresh = new QPushButton(widget);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(270, 580, 111, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font3.setPointSize(11);
        btnRefresh->setFont(font3);
        btnRefresh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnLogout = new QPushButton(widget);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(840, 580, 84, 36));
        btnLogout->setFont(font2);
        btnLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        admindashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admindashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1032, 25));
        admindashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(admindashboard);
        statusbar->setObjectName("statusbar");
        admindashboard->setStatusBar(statusbar);

        retranslateUi(admindashboard);

        QMetaObject::connectSlotsByName(admindashboard);
    } // setupUi

    void retranslateUi(QMainWindow *admindashboard)
    {
        admindashboard->setWindowTitle(QCoreApplication::translate("admindashboard", "MainWindow", nullptr));
        labelTitle->setText(QCoreApplication::translate("admindashboard", "Admin Dashboard", nullptr));
        label->setText(QCoreApplication::translate("admindashboard", "Students Count", nullptr));
        lblStudents->setText(QString());
        label_2->setText(QCoreApplication::translate("admindashboard", "Teachers Count", nullptr));
        lblTeachers->setText(QString());
        label_3->setText(QCoreApplication::translate("admindashboard", "Complaints Count", nullptr));
        lblComplaints->setText(QString());
        lblPlacements->setText(QString());
        label_4->setText(QCoreApplication::translate("admindashboard", "Placement Count", nullptr));
        btnTeachers->setText(QCoreApplication::translate("admindashboard", "Manage Teachers", nullptr));
        btnStudents->setText(QCoreApplication::translate("admindashboard", "Manage Students", nullptr));
        btnComplaints->setText(QCoreApplication::translate("admindashboard", "View Complaints", nullptr));
        btnNotice->setText(QCoreApplication::translate("admindashboard", "Post Notice", nullptr));
        btnMess->setText(QCoreApplication::translate("admindashboard", "Hostel Mess Menu", nullptr));
        btnPlacement->setText(QCoreApplication::translate("admindashboard", "Placement Updates", nullptr));
        btnRefresh->setText(QCoreApplication::translate("admindashboard", "Refresh", nullptr));
        btnLogout->setText(QCoreApplication::translate("admindashboard", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admindashboard: public Ui_admindashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
