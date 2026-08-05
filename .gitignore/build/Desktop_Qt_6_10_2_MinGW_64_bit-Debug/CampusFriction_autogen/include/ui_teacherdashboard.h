/********************************************************************************
** Form generated from reading UI file 'teacherdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERDASHBOARD_H
#define UI_TEACHERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherdashboard
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblTitle;
    QPushButton *btnStudents;
    QPushButton *btnAttendance;
    QPushButton *btnResult;
    QPushButton *btnLogout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *teacherdashboard)
    {
        if (teacherdashboard->objectName().isEmpty())
            teacherdashboard->setObjectName("teacherdashboard");
        teacherdashboard->resize(879, 600);
        teacherdashboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        centralwidget = new QWidget(teacherdashboard);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 60, 801, 451));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblTitle = new QLabel(layoutWidget);
        lblTitle->setObjectName("lblTitle");
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setBold(true);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("font-size: 32px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        lblTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lblTitle);

        btnStudents = new QPushButton(layoutWidget);
        btnStudents->setObjectName("btnStudents");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setPointSize(12);
        btnStudents->setFont(font1);
        btnStudents->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        verticalLayout->addWidget(btnStudents);

        btnAttendance = new QPushButton(layoutWidget);
        btnAttendance->setObjectName("btnAttendance");
        btnAttendance->setFont(font1);
        btnAttendance->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        verticalLayout->addWidget(btnAttendance);

        btnResult = new QPushButton(layoutWidget);
        btnResult->setObjectName("btnResult");
        btnResult->setFont(font1);
        btnResult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        verticalLayout->addWidget(btnResult);

        btnLogout = new QPushButton(layoutWidget);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setFont(font1);
        btnLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        verticalLayout->addWidget(btnLogout);

        teacherdashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(teacherdashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 879, 25));
        teacherdashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(teacherdashboard);
        statusbar->setObjectName("statusbar");
        teacherdashboard->setStatusBar(statusbar);

        retranslateUi(teacherdashboard);

        QMetaObject::connectSlotsByName(teacherdashboard);
    } // setupUi

    void retranslateUi(QMainWindow *teacherdashboard)
    {
        teacherdashboard->setWindowTitle(QCoreApplication::translate("teacherdashboard", "MainWindow", nullptr));
        lblTitle->setText(QCoreApplication::translate("teacherdashboard", "Teacher Dashboard", nullptr));
        btnStudents->setText(QCoreApplication::translate("teacherdashboard", "Add / View Students", nullptr));
        btnAttendance->setText(QCoreApplication::translate("teacherdashboard", "Mark Attendance", nullptr));
        btnResult->setText(QCoreApplication::translate("teacherdashboard", "Upload / Update Result", nullptr));
        btnLogout->setText(QCoreApplication::translate("teacherdashboard", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherdashboard: public Ui_teacherdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERDASHBOARD_H
