/********************************************************************************
** Form generated from reading UI file 'widgetuser.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETUSER_H
#define UI_WIDGETUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUser
{
public:
    QWidget *widget;
    QLabel *label;
    QLineEdit *lnEditUN;
    QLabel *lblText;
    QPushButton *btnEnter;

    void setupUi(QWidget *WidgetUser)
    {
        if (WidgetUser->objectName().isEmpty())
            WidgetUser->setObjectName(QStringLiteral("WidgetUser"));
        WidgetUser->resize(1024, 768);
        widget = new QWidget(WidgetUser);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(260, 200, 512, 384));
        widget->setStyleSheet(QStringLiteral("background-color:#000000;"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 241, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/username.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        lnEditUN = new QLineEdit(widget);
        lnEditUN->setObjectName(QStringLiteral("lnEditUN"));
        lnEditUN->setGeometry(QRect(170, 100, 171, 27));
        lblText = new QLabel(widget);
        lblText->setObjectName(QStringLiteral("lblText"));
        lblText->setGeometry(QRect(40, 240, 431, 121));
        lblText->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnEnter = new QPushButton(widget);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        btnEnter->setGeometry(QRect(210, 150, 98, 27));
        btnEnter->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\" black;"));

        retranslateUi(WidgetUser);

        QMetaObject::connectSlotsByName(WidgetUser);
    } // setupUi

    void retranslateUi(QWidget *WidgetUser)
    {
        WidgetUser->setWindowTitle(QApplication::translate("WidgetUser", "Form", 0));
        label->setText(QString());
        lnEditUN->setInputMask(QString());
        lblText->setText(QApplication::translate("WidgetUser", "blah... blah.. blah.. \n"
"\n"
" Put the user names here...", 0));
        btnEnter->setText(QApplication::translate("WidgetUser", "Enter", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetUser: public Ui_WidgetUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSER_H
