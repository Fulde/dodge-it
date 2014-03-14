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
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;

    void setupUi(QWidget *WidgetHelp)
    {
        if (WidgetHelp->objectName().isEmpty())
            WidgetHelp->setObjectName(QStringLiteral("WidgetHelp"));
        WidgetHelp->resize(512, 487);
        WidgetHelp->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240)"));
        lblHelp = new QLabel(WidgetHelp);
        lblHelp->setObjectName(QStringLiteral("lblHelp"));
        lblHelp->setGeometry(QRect(10, 70, 491, 181));
        lblHelp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblPic = new QLabel(WidgetHelp);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        lblPic->setGeometry(QRect(450, 10, 50, 50));
        label = new QLabel(WidgetHelp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 10, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/help.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(WidgetHelp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 331, 51));
        label_2->setStyleSheet(QLatin1String("font: 75 36pt \"KacstOne\";\n"
"color: rgb(0, 85, 255);"));
        label_3 = new QLabel(WidgetHelp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 250, 51, 41));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/heart.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(WidgetHelp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 260, 341, 17));
        label_5 = new QLabel(WidgetHelp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 350, 51, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/hourglass.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(WidgetHelp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 370, 371, 17));
        label_7 = new QLabel(WidgetHelp);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 300, 41, 41));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/shield.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(WidgetHelp);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 310, 371, 17));
        label_10 = new QLabel(WidgetHelp);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 420, 371, 17));
        label_9 = new QLabel(WidgetHelp);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 400, 51, 51));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/hourglass.png")));
        label_9->setScaledContents(true);

        retranslateUi(WidgetHelp);

        QMetaObject::connectSlotsByName(WidgetHelp);
    } // setupUi

    void retranslateUi(QWidget *WidgetHelp)
    {
        WidgetHelp->setWindowTitle(QApplication::translate("WidgetHelp", "Widget", 0));
        lblHelp->setText(QApplication::translate("WidgetHelp", "Game Instructions: \n"
" -- pick a difficulty level to begin with. The \n"
" harder the difficulty level, the faster the objects will fall and \n"
" the more points you will earn \n"
" -- you can press pause in the middle of the game to save, \n"
" enter cheat mode, or return to the start menu \n"
" -- cheat mode: allows the user to play without losing lives \n"
"(aka dying). \n"
" \n"
" Powerups available:", 0));
        lblPic->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("WidgetHelp", "HELP SCREEN", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("WidgetHelp", "Increases life by 1", 0));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("WidgetHelp", "Multiplies the score by 2 over a short period of time", 0));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("WidgetHelp", "Player is invincible over a short period of time", 0));
        label_10->setText(QApplication::translate("WidgetHelp", "Multiplies the score by 2 over a short period of time", 0));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WidgetHelp: public Ui_WidgetHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETHELP_H
