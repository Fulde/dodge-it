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
    QLabel *lblTitle;
    QLineEdit *lnEditUN;
    QPushButton *btnEnter;

    void setupUi(QWidget *WidgetUser)
    {
        if (WidgetUser->objectName().isEmpty())
            WidgetUser->setObjectName(QStringLiteral("WidgetUser"));
        WidgetUser->resize(1024, 768);
        widget = new QWidget(WidgetUser);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1024, 768));
        widget->setStyleSheet(QStringLiteral("background-color:#000000;"));
        lblTitle = new QLabel(widget);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(130, 70, 761, 171));
        lblTitle->setPixmap(QPixmap(QString::fromUtf8(":/username.png")));
        lblTitle->setScaledContents(true);
        lblTitle->setAlignment(Qt::AlignCenter);
        lnEditUN = new QLineEdit(widget);
        lnEditUN->setObjectName(QStringLiteral("lnEditUN"));
        lnEditUN->setGeometry(QRect(420, 350, 181, 27));
        btnEnter = new QPushButton(widget);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        btnEnter->setGeometry(QRect(460, 440, 98, 27));
        btnEnter->setStyleSheet(QStringLiteral("font: 11pt \"Ubuntu\" black;"));

        retranslateUi(WidgetUser);

        QMetaObject::connectSlotsByName(WidgetUser);
    } // setupUi

    void retranslateUi(QWidget *WidgetUser)
    {
        WidgetUser->setWindowTitle(QApplication::translate("WidgetUser", "Form", 0));
        lblTitle->setText(QString());
        lnEditUN->setInputMask(QString());
        btnEnter->setText(QApplication::translate("WidgetUser", "Enter", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetUser: public Ui_WidgetUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSER_H
