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
    QLabel *lblHelp;
    QLabel *lblPic;

    void setupUi(QWidget *WidgetHelp)
    {
        if (WidgetHelp->objectName().isEmpty())
            WidgetHelp->setObjectName(QStringLiteral("WidgetHelp"));
        WidgetHelp->resize(512, 384);
        WidgetHelp->setStyleSheet(QStringLiteral("font: 75 12pt \"Ubuntu\";"));
        lblHelp = new QLabel(WidgetHelp);
        lblHelp->setObjectName(QStringLiteral("lblHelp"));
        lblHelp->setGeometry(QRect(10, 10, 491, 361));
        lblHelp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblPic = new QLabel(WidgetHelp);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        lblPic->setGeometry(QRect(450, 10, 50, 50));

        retranslateUi(WidgetHelp);

        QMetaObject::connectSlotsByName(WidgetHelp);
    } // setupUi

    void retranslateUi(QWidget *WidgetHelp)
    {
        WidgetHelp->setWindowTitle(QApplication::translate("WidgetHelp", "Widget", 0));
        lblHelp->setText(QApplication::translate("WidgetHelp", "Help text goes here\n"
" \n"
" (You can use \"\\n\" for a newline)", 0));
        lblPic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WidgetHelp: public Ui_WidgetHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETHELP_H
