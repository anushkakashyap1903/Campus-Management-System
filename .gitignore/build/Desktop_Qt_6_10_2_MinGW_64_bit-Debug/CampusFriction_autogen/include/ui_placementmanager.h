/********************************************************************************
** Form generated from reading UI file 'placementmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEMENTMANAGER_H
#define UI_PLACEMENTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_placementmanager
{
public:
    QPushButton *btnAddPlacement;
    QPushButton *btnDeletePlacement;
    QPushButton *btnRefresh;
    QLineEdit *txtCompany;
    QLineEdit *txtRole;
    QLineEdit *txtDate;
    QLabel *label;
    QTableView *tblPlacements;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QWidget *placementmanager)
    {
        if (placementmanager->objectName().isEmpty())
            placementmanager->setObjectName("placementmanager");
        placementmanager->resize(527, 556);
        placementmanager->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(\n"
"    x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #141e30,\n"
"    stop:1 #243b55\n"
");\n"
"color: white;"));
        btnAddPlacement = new QPushButton(placementmanager);
        btnAddPlacement->setObjectName("btnAddPlacement");
        btnAddPlacement->setGeometry(QRect(10, 470, 161, 29));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font.setPointSize(12);
        btnAddPlacement->setFont(font);
        btnAddPlacement->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnDeletePlacement = new QPushButton(placementmanager);
        btnDeletePlacement->setObjectName("btnDeletePlacement");
        btnDeletePlacement->setGeometry(QRect(180, 470, 191, 29));
        btnDeletePlacement->setFont(font);
        btnDeletePlacement->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        btnRefresh = new QPushButton(placementmanager);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(370, 470, 151, 29));
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
        txtCompany = new QLineEdit(placementmanager);
        txtCompany->setObjectName("txtCompany");
        txtCompany->setGeometry(QRect(280, 320, 113, 28));
        txtCompany->setFont(font);
        txtCompany->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        txtRole = new QLineEdit(placementmanager);
        txtRole->setObjectName("txtRole");
        txtRole->setGeometry(QRect(280, 360, 113, 28));
        txtRole->setFont(font);
        txtRole->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        txtDate = new QLineEdit(placementmanager);
        txtDate->setObjectName("txtDate");
        txtDate->setGeometry(QRect(280, 410, 113, 28));
        txtDate->setFont(font);
        txtDate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        label = new QLabel(placementmanager);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 361, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Swis721 LtEx BT")});
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font-size: 32px;\n"
"font-weight: bold;\n"
"color: #00cec9;"));
        tblPlacements = new QTableView(placementmanager);
        tblPlacements->setObjectName("tblPlacements");
        tblPlacements->setGeometry(QRect(40, 100, 441, 192));
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
        label_2 = new QLabel(placementmanager);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 320, 181, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        label_3 = new QLabel(placementmanager);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 360, 111, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        label_4 = new QLabel(placementmanager);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 410, 111, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));
        pushButton = new QPushButton(placementmanager);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(420, 510, 90, 29));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 184, 148, 0.7);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 184, 148, 1);\n"
"}"));

        retranslateUi(placementmanager);

        QMetaObject::connectSlotsByName(placementmanager);
    } // setupUi

    void retranslateUi(QWidget *placementmanager)
    {
        placementmanager->setWindowTitle(QCoreApplication::translate("placementmanager", "Form", nullptr));
        btnAddPlacement->setText(QCoreApplication::translate("placementmanager", "Add Placement", nullptr));
        btnDeletePlacement->setText(QCoreApplication::translate("placementmanager", "Delete Placement", nullptr));
        btnRefresh->setText(QCoreApplication::translate("placementmanager", "Refresh Table", nullptr));
        txtCompany->setText(QString());
        txtRole->setText(QString());
        txtDate->setText(QString());
        label->setText(QCoreApplication::translate("placementmanager", "Placement Manager", nullptr));
        label_2->setText(QCoreApplication::translate("placementmanager", "Company Name", nullptr));
        label_3->setText(QCoreApplication::translate("placementmanager", " Role", nullptr));
        label_4->setText(QCoreApplication::translate("placementmanager", "Deadline", nullptr));
        pushButton->setText(QCoreApplication::translate("placementmanager", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class placementmanager: public Ui_placementmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEMENTMANAGER_H
