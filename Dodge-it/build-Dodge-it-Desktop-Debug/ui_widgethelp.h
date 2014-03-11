/********************************************************************************
** Form generated from reading UI file 'widgethelp.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETHELP_H
#define UI_WIDGETHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetHelp
{
public:
    QLabel *label;

    void setupUi(QWidget *WidgetHelp)
    {
        if (WidgetHelp->objectName().isEmpty())
            WidgetHelp->setObjectName(QStringLiteral("WidgetHelp"));
        WidgetHelp->resize(1024, 768);
        WidgetHelp->setStyleSheet(QStringLiteral("font: 75 12pt \"Ubuntu\";"));
        label = new QLabel(WidgetHelp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 180, 981, 561));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(WidgetHelp);

        QMetaObject::connectSlotsByName(WidgetHelp);
    } // setupUi

    void retranslateUi(QWidget *WidgetHelp)
    {
        WidgetHelp->setWindowTitle(QApplication::translate("WidgetHelp", "Widget", 0));
        label->setText(QApplication::translate("WidgetHelp", "Help text goes here\n"
" \n"
" (You can use \"\\n\" for a newline)", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetHelp: public Ui_WidgetHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETHELP_H
