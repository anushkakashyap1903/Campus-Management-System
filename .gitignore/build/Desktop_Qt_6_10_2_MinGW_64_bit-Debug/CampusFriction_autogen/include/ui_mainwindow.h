/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QFormLayout *formLayout;
    QLabel *labelUser;
    QLineEdit *usernameEdit;
    QLabel *labelPass;
    QLineEdit *passwordEdit;
    QLabel *labelRole;
    QComboBox *roleCombo;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QPushButton *btnExit;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.08);\n"
"border-radius: 15px;\n"
"border: 1px solid rgba(255, 255, 255, 0.2);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        labelTitle = new QLabel(widget);
        labelTitle->setObjectName("labelTitle");
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setBold(true);
        font.setStrikeOut(false);
        labelTitle->setFont(font);
        labelTitle->setStyleSheet(QString::fromUtf8("font-size: 35px;\n"
"font-weight: bold;\n"
"color: #00cec9;\n"
"letter-spacing: 1px;"));
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayout->setHorizontalSpacing(15);
        formLayout->setVerticalSpacing(15);
        labelUser = new QLabel(widget);
        labelUser->setObjectName("labelUser");
        labelUser->setMaximumSize(QSize(300, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setPointSize(10);
        labelUser->setFont(font1);
        labelUser->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    color: white;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelUser);

        usernameEdit = new QLineEdit(widget);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setMaximumSize(QSize(16777215, 16777215));
        usernameEdit->setFont(font1);
        usernameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    color: white;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, usernameEdit);

        labelPass = new QLabel(widget);
        labelPass->setObjectName("labelPass");
        labelPass->setFont(font1);
        labelPass->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    color: white;\n"
"}"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, labelPass);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setFont(font1);
        passwordEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    color: white;\n"
"}"));
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit);

        labelRole = new QLabel(widget);
        labelRole->setObjectName("labelRole");
        labelRole->setFont(font1);
        labelRole->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    color: white;\n"
"}"));

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, labelRole);

        roleCombo = new QComboBox(widget);
        roleCombo->addItem(QString());
        roleCombo->addItem(QString());
        roleCombo->addItem(QString());
        roleCombo->setObjectName("roleCombo");
        roleCombo->setFont(font1);
        roleCombo->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, roleCombo);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        loginButton = new QPushButton(widget);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(120, 35));
        loginButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font2.setPointSize(12);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        horizontalLayout->addWidget(loginButton);

        btnExit = new QPushButton(widget);
        btnExit->setObjectName("btnExit");
        btnExit->setMinimumSize(QSize(120, 35));
        btnExit->setMaximumSize(QSize(16777215, 16777215));
        btnExit->setFont(font2);
        btnExit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(214, 48, 49, 0.7);\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(214, 48, 49, 1);\n"
"}"));

        horizontalLayout->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelTitle->setText(QCoreApplication::translate("MainWindow", "Campus Friction Project", nullptr));
        labelUser->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        labelPass->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        labelRole->setText(QCoreApplication::translate("MainWindow", "Role", nullptr));
        roleCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Admin", nullptr));
        roleCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Teacher", nullptr));
        roleCombo->setItemText(2, QCoreApplication::translate("MainWindow", "Student", nullptr));

        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
