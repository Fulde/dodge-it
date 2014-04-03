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
        QPalette palette;
        QBrush brush(QColor(250, 250, 250, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(217, 217, 217, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(222, 1, 5, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush4(QColor(159, 158, 158, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        btnEnter->setPalette(palette);
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
