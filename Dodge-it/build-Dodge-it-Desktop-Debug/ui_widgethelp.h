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
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *WidgetHelp)
    {
        if (WidgetHelp->objectName().isEmpty())
            WidgetHelp->setObjectName(QStringLiteral("WidgetHelp"));
        WidgetHelp->resize(512, 384);
        WidgetHelp->setStyleSheet(QStringLiteral("font: 75 12pt \"Ubuntu\";"));
        lblHelp = new QLabel(WidgetHelp);
        lblHelp->setObjectName(QStringLiteral("lblHelp"));
        lblHelp->setGeometry(QRect(0, 70, 491, 291));
        lblHelp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblPic = new QLabel(WidgetHelp);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        lblPic->setGeometry(QRect(450, 10, 50, 50));
        label = new QLabel(WidgetHelp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 10, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/help.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(WidgetHelp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 311, 51));
        label_2->setStyleSheet(QLatin1String("font: 75 28pt \"Nimbus Sans L\";\n"
"color: rgb(0, 85, 255);"));

        retranslateUi(WidgetHelp);

        QMetaObject::connectSlotsByName(WidgetHelp);
    } // setupUi

    void retranslateUi(QWidget *WidgetHelp)
    {
        WidgetHelp->setWindowTitle(QApplication::translate("WidgetHelp", "Help!", 0));
        lblHelp->setText(QApplication::translate("WidgetHelp", "Game Instructions: \n"
" -- pick a difficulty level to begin with. The \n"
" harder the difficulty level, the faster the objects will fall and \n"
" the more points you will earn \n"
" -- you can press pause in the middle of the game to save, \n"
" enter cheat mode, or return to the start menu \n"
" -- cheat mode: allows the user to play without losing lives \n"
"(aka dying). \n"
" \n"
" Powerups available: \n"
"     - Slow mode -> slows the speed of the falling objects \n"
"     - Invincibility -> falling objects do not harm the player in \n"
"a short period of time \n"
"     - Heart -> gives you an extra life \n"
"     - Multiplier -> doubles your score for a short period of time", 0));
        lblPic->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("WidgetHelp", "HELP SCREEN", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetHelp: public Ui_WidgetHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETHELP_H
