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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUser
{
public:
    QWidget *widget;

    void setupUi(QWidget *WidgetUser)
    {
        if (WidgetUser->objectName().isEmpty())
            WidgetUser->setObjectName(QStringLiteral("WidgetUser"));
        WidgetUser->resize(1024, 768);
        widget = new QWidget(WidgetUser);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(430, 280, 120, 80));

        retranslateUi(WidgetUser);

        QMetaObject::connectSlotsByName(WidgetUser);
    } // setupUi

    void retranslateUi(QWidget *WidgetUser)
    {
        WidgetUser->setWindowTitle(QApplication::translate("WidgetUser", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetUser: public Ui_WidgetUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSER_H
