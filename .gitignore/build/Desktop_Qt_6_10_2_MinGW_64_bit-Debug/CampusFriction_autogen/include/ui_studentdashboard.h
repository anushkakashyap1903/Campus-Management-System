/********************************************************************************
** Form generated from reading UI file 'studentdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDASHBOARD_H
#define UI_STUDENTDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentdashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QTabWidget *tabWidgetStudent;
    QWidget *tabAttendance;
    QTableView *tableViewAttendance;
    QLabel *labelAttendance;
    QWidget *tabResults;
    QTableView *tableViewResults;
    QLabel *labelResults;
    QLabel *lblCGPATitle;
    QLabel *lblCGPA;
    QWidget *tabComplaints;
    QTextEdit *textEditComplaint;
    QPushButton *pushButtonSubmitComplaint;
    QLabel *labelComplaint;
    QTableView *tableViewComplaints;
    QWidget *tabMessMenu;
    QLabel *labelMessMenu;
    QTableView *tableViewMessMenu;
    QWidget *tabPlacement;
    QTableView *tblPlacements;
    QLabel *labelInternship;
    QPushButton *pushButtonLogout;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *studentdashboard)
    {
        if (studentdashboard->objectName().isEmpty())
            studentdashboard->setObjectName("studentdashboard");
        studentdashboard->resize(800, 600);
        QFont font;
        font.setPointSize(11);
        studentdashboard->setFont(font);
        studentdashboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        centralwidget = new QWidget(studentdashboard);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: 1px solid rgba(255,255,255,0.2);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: rgba(255,255,255,0.1);\n"
"    color: white;\n"
"    padding: 8px;\n"
"    border-radius: 8px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: rgba(0,184,148,0.8);\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        labelTitle = new QLabel(widget);
        labelTitle->setObjectName("labelTitle");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setBold(true);
        labelTitle->setFont(font1);
        labelTitle->setStyleSheet(QString::fromUtf8("font-size: 26px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        tabWidgetStudent = new QTabWidget(widget);
        tabWidgetStudent->setObjectName("tabWidgetStudent");
        tabWidgetStudent->setMinimumSize(QSize(300, 400));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font2.setPointSize(8);
        tabWidgetStudent->setFont(font2);
        tabAttendance = new QWidget();
        tabAttendance->setObjectName("tabAttendance");
        tabAttendance->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        tableViewAttendance = new QTableView(tabAttendance);
        tableViewAttendance->setObjectName("tableViewAttendance");
        tableViewAttendance->setGeometry(QRect(20, 60, 421, 231));
        tableViewAttendance->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        labelAttendance = new QLabel(tabAttendance);
        labelAttendance->setObjectName("labelAttendance");
        labelAttendance->setGeometry(QRect(130, 20, 211, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font3.setPointSize(14);
        labelAttendance->setFont(font3);
        labelAttendance->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        labelAttendance->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidgetStudent->addTab(tabAttendance, QString());
        tabResults = new QWidget();
        tabResults->setObjectName("tabResults");
        tabResults->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        tableViewResults = new QTableView(tabResults);
        tableViewResults->setObjectName("tableViewResults");
        tableViewResults->setGeometry(QRect(10, 80, 281, 221));
        tableViewResults->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        labelResults = new QLabel(tabResults);
        labelResults->setObjectName("labelResults");
        labelResults->setGeometry(QRect(160, 20, 181, 20));
        labelResults->setFont(font3);
        labelResults->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblCGPATitle = new QLabel(tabResults);
        lblCGPATitle->setObjectName("lblCGPATitle");
        lblCGPATitle->setGeometry(QRect(160, 270, 63, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font4.setPointSize(10);
        lblCGPATitle->setFont(font4);
        lblCGPATitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblCGPA = new QLabel(tabResults);
        lblCGPA->setObjectName("lblCGPA");
        lblCGPA->setGeometry(QRect(220, 270, 63, 20));
        lblCGPA->setFont(font4);
        lblCGPA->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidgetStudent->addTab(tabResults, QString());
        tabComplaints = new QWidget();
        tabComplaints->setObjectName("tabComplaints");
        tabComplaints->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        textEditComplaint = new QTextEdit(tabComplaints);
        textEditComplaint->setObjectName("textEditComplaint");
        textEditComplaint->setGeometry(QRect(20, 80, 431, 71));
        pushButtonSubmitComplaint = new QPushButton(tabComplaints);
        pushButtonSubmitComplaint->setObjectName("pushButtonSubmitComplaint");
        pushButtonSubmitComplaint->setGeometry(QRect(60, 330, 181, 29));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font5.setPointSize(9);
        pushButtonSubmitComplaint->setFont(font5);
        pushButtonSubmitComplaint->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        labelComplaint = new QLabel(tabComplaints);
        labelComplaint->setObjectName("labelComplaint");
        labelComplaint->setGeometry(QRect(140, 30, 201, 20));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font6.setPointSize(12);
        labelComplaint->setFont(font6);
        labelComplaint->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableViewComplaints = new QTableView(tabComplaints);
        tableViewComplaints->setObjectName("tableViewComplaints");
        tableViewComplaints->setGeometry(QRect(20, 160, 251, 141));
        tableViewComplaints->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        tabWidgetStudent->addTab(tabComplaints, QString());
        tabMessMenu = new QWidget();
        tabMessMenu->setObjectName("tabMessMenu");
        tabMessMenu->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        labelMessMenu = new QLabel(tabMessMenu);
        labelMessMenu->setObjectName("labelMessMenu");
        labelMessMenu->setGeometry(QRect(120, 20, 241, 20));
        labelMessMenu->setFont(font3);
        labelMessMenu->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableViewMessMenu = new QTableView(tabMessMenu);
        tableViewMessMenu->setObjectName("tableViewMessMenu");
        tableViewMessMenu->setGeometry(QRect(20, 70, 451, 211));
        tableViewMessMenu->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        tabWidgetStudent->addTab(tabMessMenu, QString());
        tabPlacement = new QWidget();
        tabPlacement->setObjectName("tabPlacement");
        tabPlacement->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: rgba(255,255,255,0.05);\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    padding: 6px;\n"
"}"));
        tblPlacements = new QTableView(tabPlacement);
        tblPlacements->setObjectName("tblPlacements");
        tblPlacements->setGeometry(QRect(40, 80, 411, 211));
        tblPlacements->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        labelInternship = new QLabel(tabPlacement);
        labelInternship->setObjectName("labelInternship");
        labelInternship->setGeometry(QRect(110, 30, 261, 20));
        labelInternship->setFont(font6);
        labelInternship->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidgetStudent->addTab(tabPlacement, QString());

        verticalLayout->addWidget(tabWidgetStudent);

        pushButtonLogout = new QPushButton(widget);
        pushButtonLogout->setObjectName("pushButtonLogout");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font7.setPointSize(11);
        pushButtonLogout->setFont(font7);
        pushButtonLogout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        verticalLayout->addWidget(pushButtonLogout);


        horizontalLayout->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        studentdashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(studentdashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        studentdashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(studentdashboard);
        statusbar->setObjectName("statusbar");
        studentdashboard->setStatusBar(statusbar);

        retranslateUi(studentdashboard);

        tabWidgetStudent->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(studentdashboard);
    } // setupUi

    void retranslateUi(QMainWindow *studentdashboard)
    {
        studentdashboard->setWindowTitle(QCoreApplication::translate("studentdashboard", "MainWindow", nullptr));
        labelTitle->setText(QCoreApplication::translate("studentdashboard", "Student Dashboard", nullptr));
        labelAttendance->setText(QCoreApplication::translate("studentdashboard", "Your Attendance", nullptr));
        tabWidgetStudent->setTabText(tabWidgetStudent->indexOf(tabAttendance), QCoreApplication::translate("studentdashboard", "Attendance", nullptr));
        labelResults->setText(QCoreApplication::translate("studentdashboard", "Exam Results", nullptr));
        lblCGPATitle->setText(QCoreApplication::translate("studentdashboard", "CGPA", nullptr));
        lblCGPA->setText(QCoreApplication::translate("studentdashboard", "0.0", nullptr));
        tabWidgetStudent->setTabText(tabWidgetStudent->indexOf(tabResults), QCoreApplication::translate("studentdashboard", "Result", nullptr));
        textEditComplaint->setPlaceholderText(QCoreApplication::translate("studentdashboard", "Write your complaint here...", nullptr));
        pushButtonSubmitComplaint->setText(QCoreApplication::translate("studentdashboard", "Submit Complaint", nullptr));
        labelComplaint->setText(QCoreApplication::translate("studentdashboard", "Submit Complaint", nullptr));
        tabWidgetStudent->setTabText(tabWidgetStudent->indexOf(tabComplaints), QCoreApplication::translate("studentdashboard", "Complaints", nullptr));
        labelMessMenu->setText(QCoreApplication::translate("studentdashboard", "Weekly Mess Menu", nullptr));
        tabWidgetStudent->setTabText(tabWidgetStudent->indexOf(tabMessMenu), QCoreApplication::translate("studentdashboard", "Mess Menu", nullptr));
        labelInternship->setText(QCoreApplication::translate("studentdashboard", "Placement Opportunities", nullptr));
        tabWidgetStudent->setTabText(tabWidgetStudent->indexOf(tabPlacement), QCoreApplication::translate("studentdashboard", "Placement", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("studentdashboard", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentdashboard: public Ui_studentdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDASHBOARD_H
