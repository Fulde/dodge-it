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
    QLabel *lblText;
    QLabel *lblPic;
    QLabel *lblPow1;
    QLabel *lblPow1Text;
    QLabel *lblPow3;
    QLabel *lblPow3Text;
    QLabel *lblPow2;
    QLabel *lblPow2Text;
    QLabel *lblPow4Text;
    QLabel *lblPow4;
    QLabel *lblTitle;
    QLabel *lblScreen;
    QLabel *lblEasy;
    QLabel *lblMed;
    QLabel *lblScreen2;
    QLabel *lblHard;
    QLabel *lblScreen3;
    QLabel *lblSubTitle2;
    QLabel *lblSubTitle;

    void setupUi(QWidget *WidgetHelp)
    {
        if (WidgetHelp->objectName().isEmpty())
            WidgetHelp->setObjectName(QStringLiteral("WidgetHelp"));
        WidgetHelp->resize(742, 660);
        WidgetHelp->setStyleSheet(QStringLiteral("background-color: rgb(0,0,0);"));
        lblText = new QLabel(WidgetHelp);
        lblText->setObjectName(QStringLiteral("lblText"));
        lblText->setGeometry(QRect(10, 160, 501, 211));
        lblText->setStyleSheet(QLatin1String("font: 14pt;\n"
"color: rgb(255, 255, 255);"));
        lblText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblPic = new QLabel(WidgetHelp);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        lblPic->setGeometry(QRect(410, 10, 91, 91));
        lblPic->setPixmap(QPixmap(QString::fromUtf8(":/help.png")));
        lblPic->setScaledContents(true);
        lblPow1 = new QLabel(WidgetHelp);
        lblPow1->setObjectName(QStringLiteral("lblPow1"));
        lblPow1->setGeometry(QRect(40, 400, 41, 31));
        lblPow1->setPixmap(QPixmap(QString::fromUtf8(":/heart.png")));
        lblPow1->setScaledContents(true);
        lblPow1Text = new QLabel(WidgetHelp);
        lblPow1Text->setObjectName(QStringLiteral("lblPow1Text"));
        lblPow1Text->setGeometry(QRect(90, 410, 151, 17));
        lblPow1Text->setStyleSheet(QLatin1String("color: rgb(232, 25, 6);\n"
"font: 14pt;"));
        lblPow3 = new QLabel(WidgetHelp);
        lblPow3->setObjectName(QStringLiteral("lblPow3"));
        lblPow3->setGeometry(QRect(50, 510, 31, 51));
        lblPow3->setPixmap(QPixmap(QString::fromUtf8(":/hourglass.png")));
        lblPow3->setScaledContents(true);
        lblPow3Text = new QLabel(WidgetHelp);
        lblPow3Text->setObjectName(QStringLiteral("lblPow3Text"));
        lblPow3Text->setGeometry(QRect(90, 510, 401, 41));
        lblPow3Text->setStyleSheet(QLatin1String("color: rgb(23, 217, 255);\n"
"font: 14pt;"));
        lblPow2 = new QLabel(WidgetHelp);
        lblPow2->setObjectName(QStringLiteral("lblPow2"));
        lblPow2->setGeometry(QRect(40, 450, 41, 41));
        lblPow2->setPixmap(QPixmap(QString::fromUtf8(":/shield.png")));
        lblPow2->setScaledContents(true);
        lblPow2Text = new QLabel(WidgetHelp);
        lblPow2Text->setObjectName(QStringLiteral("lblPow2Text"));
        lblPow2Text->setGeometry(QRect(90, 460, 401, 17));
        lblPow2Text->setStyleSheet(QLatin1String("color: rgb(235, 201, 7);\n"
"font: 14pt;"));
        lblPow4Text = new QLabel(WidgetHelp);
        lblPow4Text->setObjectName(QStringLiteral("lblPow4Text"));
        lblPow4Text->setGeometry(QRect(90, 580, 401, 41));
        lblPow4Text->setStyleSheet(QLatin1String("color: rgb(84, 236, 29);\n"
"font: 14pt;"));
        lblPow4 = new QLabel(WidgetHelp);
        lblPow4->setObjectName(QStringLiteral("lblPow4"));
        lblPow4->setGeometry(QRect(40, 580, 41, 41));
        lblPow4->setPixmap(QPixmap(QString::fromUtf8(":/multiplier.png")));
        lblPow4->setScaledContents(true);
        lblTitle = new QLabel(WidgetHelp);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(10, 10, 391, 61));
        lblTitle->setPixmap(QPixmap(QString::fromUtf8(":/helpscreen2.png")));
        lblTitle->setScaledContents(true);
        lblScreen = new QLabel(WidgetHelp);
        lblScreen->setObjectName(QStringLiteral("lblScreen"));
        lblScreen->setGeometry(QRect(520, 50, 201, 161));
        lblScreen->setPixmap(QPixmap(QString::fromUtf8(":/screenshot1.png")));
        lblScreen->setScaledContents(true);
        lblEasy = new QLabel(WidgetHelp);
        lblEasy->setObjectName(QStringLiteral("lblEasy"));
        lblEasy->setGeometry(QRect(520, 20, 101, 21));
        lblEasy->setStyleSheet(QStringLiteral("color: rgb(21, 208, 33)"));
        lblMed = new QLabel(WidgetHelp);
        lblMed->setObjectName(QStringLiteral("lblMed"));
        lblMed->setGeometry(QRect(520, 230, 111, 21));
        lblMed->setStyleSheet(QStringLiteral("color: rgb(255, 170, 0);"));
        lblScreen2 = new QLabel(WidgetHelp);
        lblScreen2->setObjectName(QStringLiteral("lblScreen2"));
        lblScreen2->setGeometry(QRect(510, 260, 211, 171));
        lblScreen2->setPixmap(QPixmap(QString::fromUtf8(":/screenshot2.png")));
        lblScreen2->setScaledContents(true);
        lblHard = new QLabel(WidgetHelp);
        lblHard->setObjectName(QStringLiteral("lblHard"));
        lblHard->setGeometry(QRect(500, 450, 111, 21));
        lblHard->setStyleSheet(QStringLiteral("color: rgb(236, 40, 5);"));
        lblScreen3 = new QLabel(WidgetHelp);
        lblScreen3->setObjectName(QStringLiteral("lblScreen3"));
        lblScreen3->setGeometry(QRect(500, 480, 221, 161));
        lblScreen3->setPixmap(QPixmap(QString::fromUtf8(":/screenshot3.png")));
        lblScreen3->setScaledContents(true);
        lblSubTitle2 = new QLabel(WidgetHelp);
        lblSubTitle2->setObjectName(QStringLiteral("lblSubTitle2"));
        lblSubTitle2->setGeometry(QRect(10, 370, 281, 17));
        lblSubTitle2->setStyleSheet(QLatin1String("font: 18pt;\n"
"color: rgb(255, 255, 255);"));
        lblSubTitle = new QLabel(WidgetHelp);
        lblSubTitle->setObjectName(QStringLiteral("lblSubTitle"));
        lblSubTitle->setGeometry(QRect(10, 120, 281, 17));
        lblSubTitle->setStyleSheet(QLatin1String("font: 18pt;\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(WidgetHelp);

        QMetaObject::connectSlotsByName(WidgetHelp);
    } // setupUi

    void retranslateUi(QWidget *WidgetHelp)
    {
        WidgetHelp->setWindowTitle(QApplication::translate("WidgetHelp", "Help!", 0));
        lblText->setText(QApplication::translate("WidgetHelp", "-- pick a difficulty level to begin with. The \n"
" harder the difficulty level, the faster the objects will fall \n"
" and the more points you will earn \n"
" -- use your arrow keys to move the satyr left, right, up, \n"
" or down \n"
" -- you can press pause in the middle of the game to save, \n"
" enter cheat mode, or return to the start menu \n"
" -- cheat mode: allows the user to play without losing lives \n"
" (aka dying).", 0));
        lblPic->setText(QString());
        lblPow1->setText(QString());
        lblPow1Text->setText(QApplication::translate("WidgetHelp", "Increases life by 1", 0));
        lblPow3->setText(QString());
        lblPow3Text->setText(QApplication::translate("WidgetHelp", "Makes the falling objects slower over a short \n"
" period of time", 0));
        lblPow2->setText(QString());
        lblPow2Text->setText(QApplication::translate("WidgetHelp", "Player is invincible over a short period of time", 0));
        lblPow4Text->setText(QApplication::translate("WidgetHelp", "Multiplies the score by 2 over a short \n"
" period of time", 0));
        lblPow4->setText(QString());
        lblTitle->setText(QString());
        lblScreen->setText(QString());
        lblEasy->setText(QApplication::translate("WidgetHelp", "EASY LEVEL", 0));
        lblMed->setText(QApplication::translate("WidgetHelp", "MEDIUM LEVEL", 0));
        lblScreen2->setText(QString());
        lblHard->setText(QApplication::translate("WidgetHelp", "HARD LEVEL", 0));
        lblScreen3->setText(QString());
        lblSubTitle2->setText(QApplication::translate("WidgetHelp", "POWERUPS AVAILABLE", 0));
        lblSubTitle->setText(QApplication::translate("WidgetHelp", "GAME INSTRUCTIONS", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetHelp: public Ui_WidgetHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETHELP_H
