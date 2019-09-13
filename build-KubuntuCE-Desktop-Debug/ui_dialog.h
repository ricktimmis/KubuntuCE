/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QWebView *webView;
    QGroupBox *groupBox;
    QPushButton *userGuide_btn;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QCheckBox *checkBox;
    QPushButton *pushButton_7;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(681, 416);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 81, 18));
        webView = new QWebView(Dialog);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(10, 40, 461, 311));
        webView->setUrl(QUrl(QStringLiteral("https://kubuntu.org/")));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(490, 10, 171, 341));
        userGuide_btn = new QPushButton(groupBox);
        userGuide_btn->setObjectName(QStringLiteral("userGuide_btn"));
        userGuide_btn->setGeometry(QRect(20, 30, 131, 41));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 80, 131, 41));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 130, 131, 41));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 180, 131, 41));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 230, 131, 41));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 280, 131, 41));
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 370, 161, 22));
        checkBox->setChecked(true);
        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(510, 360, 131, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Kubuntu Community Explorer", nullptr));
        label->setText(QApplication::translate("Dialog", "Our Website", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "Resources", nullptr));
        userGuide_btn->setText(QApplication::translate("Dialog", "User Guide", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "Telegram Support", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "IRC Support", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", "Mailing List", nullptr));
        pushButton_5->setText(QApplication::translate("Dialog", "Add Software", nullptr));
        pushButton_6->setText(QApplication::translate("Dialog", "Connect Phone", nullptr));
        checkBox->setText(QApplication::translate("Dialog", "Display at startup", nullptr));
        pushButton_7->setText(QApplication::translate("Dialog", "Dismiss", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
