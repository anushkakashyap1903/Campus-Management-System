/********************************************************************************
** Form generated from reading UI file 'noticemanager.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICEMANAGER_H
#define UI_NOTICEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_noticemanager
{
public:
    QTableView *tblNotices;
    QLabel *labelTitle;
    QLineEdit *txtNoticeTitle;
    QTextEdit *txtNoticeContent;
    QPushButton *btnAddNotice;
    QPushButton *btnDeleteNotice;
    QPushButton *btnRefresh;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnBack;

    void setupUi(QWidget *noticemanager)
    {
        if (noticemanager->objectName().isEmpty())
            noticemanager->setObjectName("noticemanager");
        noticemanager->resize(551, 572);
        noticemanager->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        tblNotices = new QTableView(noticemanager);
        tblNotices->setObjectName("tblNotices");
        tblNotices->setGeometry(QRect(50, 90, 441, 192));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setPointSize(12);
        tblNotices->setFont(font);
        tblNotices->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        labelTitle = new QLabel(noticemanager);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setGeometry(QRect(150, 20, 321, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setBold(true);
        labelTitle->setFont(font1);
        labelTitle->setStyleSheet(QString::fromUtf8("font-size: 35px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        txtNoticeTitle = new QLineEdit(noticemanager);
        txtNoticeTitle->setObjectName("txtNoticeTitle");
        txtNoticeTitle->setGeometry(QRect(240, 310, 191, 28));
        txtNoticeTitle->setFont(font);
        txtNoticeTitle->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        txtNoticeContent = new QTextEdit(noticemanager);
        txtNoticeContent->setObjectName("txtNoticeContent");
        txtNoticeContent->setGeometry(QRect(240, 370, 201, 51));
        txtNoticeContent->setFont(font);
        txtNoticeContent->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        btnAddNotice = new QPushButton(noticemanager);
        btnAddNotice->setObjectName("btnAddNotice");
        btnAddNotice->setGeometry(QRect(20, 460, 141, 29));
        btnAddNotice->setFont(font);
        btnAddNotice->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnDeleteNotice = new QPushButton(noticemanager);
        btnDeleteNotice->setObjectName("btnDeleteNotice");
        btnDeleteNotice->setGeometry(QRect(190, 460, 151, 29));
        btnDeleteNotice->setFont(font);
        btnDeleteNotice->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnRefresh = new QPushButton(noticemanager);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(360, 460, 151, 29));
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
        label = new QLabel(noticemanager);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 310, 63, 20));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        label_2 = new QLabel(noticemanager);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 380, 91, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLineEdit, QComboBox {\n"
"    background-color: rgba(255,255,255,0.1);\n"
"    border: 1px solid rgba(255,255,255,0.3);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"}"));
        btnBack = new QPushButton(noticemanager);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(440, 530, 90, 29));
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

        retranslateUi(noticemanager);

        QMetaObject::connectSlotsByName(noticemanager);
    } // setupUi

    void retranslateUi(QWidget *noticemanager)
    {
        noticemanager->setWindowTitle(QCoreApplication::translate("noticemanager", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("noticemanager", "Notice Manager", nullptr));
        txtNoticeTitle->setText(QString());
        btnAddNotice->setText(QCoreApplication::translate("noticemanager", "Add Notice", nullptr));
        btnDeleteNotice->setText(QCoreApplication::translate("noticemanager", "Delete Notice", nullptr));
        btnRefresh->setText(QCoreApplication::translate("noticemanager", "Refresh Table", nullptr));
        label->setText(QCoreApplication::translate("noticemanager", "Title", nullptr));
        label_2->setText(QCoreApplication::translate("noticemanager", "Content", nullptr));
        btnBack->setText(QCoreApplication::translate("noticemanager", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class noticemanager: public Ui_noticemanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICEMANAGER_H
