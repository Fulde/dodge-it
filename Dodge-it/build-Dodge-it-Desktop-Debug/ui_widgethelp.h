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
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;

    void setupUi(QWidget *WidgetHelp)
    {
        if (WidgetHelp->objectName().isEmpty())
            WidgetHelp->setObjectName(QStringLiteral("WidgetHelp"));
        WidgetHelp->resize(820, 818);
        WidgetHelp->setStyleSheet(QStringLiteral("background-color: rgb(0,0,0);"));
        lblHelp = new QLabel(WidgetHelp);
        lblHelp->setObjectName(QStringLiteral("lblHelp"));
        lblHelp->setGeometry(QRect(10, 160, 491, 211));
        lblHelp->setStyleSheet(QLatin1String("font: 14pt;\n"
"color: rgb(255, 255, 255);"));
        lblHelp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblPic = new QLabel(WidgetHelp);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        lblPic->setGeometry(QRect(450, 10, 50, 50));
        label = new QLabel(WidgetHelp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 10, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/help.png")));
        label->setScaledContents(true);
        label_3 = new QLabel(WidgetHelp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 480, 61, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/heart.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(WidgetHelp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 490, 341, 17));
        label_4->setStyleSheet(QLatin1String("color: rgb(232, 25, 6);\n"
"font: 14pt;"));
        label_5 = new QLabel(WidgetHelp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 640, 61, 61));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/hourglass.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(WidgetHelp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 650, 411, 41));
        label_6->setStyleSheet(QLatin1String("color: rgb(23, 217, 255);\n"
"font: 14pt;"));
        label_7 = new QLabel(WidgetHelp);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 560, 51, 51));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/shield.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(WidgetHelp);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 570, 371, 17));
        label_8->setStyleSheet(QLatin1String("color: rgb(235, 201, 7);\n"
"font: 14pt;"));
        label_10 = new QLabel(WidgetHelp);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 740, 371, 17));
        label_10->setStyleSheet(QLatin1String("color: rgb(84, 236, 29);\n"
"font: 14pt;"));
        label_9 = new QLabel(WidgetHelp);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 730, 51, 51));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/multiplier.png")));
        label_9->setScaledContents(true);
        label_2 = new QLabel(WidgetHelp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 391, 61));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/helpscreen2.png")));
        label_2->setScaledContents(true);
        label_11 = new QLabel(WidgetHelp);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(520, 50, 261, 211));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/screenshot1.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(WidgetHelp);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(520, 20, 101, 21));
        label_12->setStyleSheet(QStringLiteral("color: rgb(255, 255, 127);"));
        label_13 = new QLabel(WidgetHelp);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(520, 270, 111, 21));
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 170, 0);"));
        label_14 = new QLabel(WidgetHelp);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(510, 300, 271, 221));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/screenshot2.png")));
        label_14->setScaledContents(true);
        label_15 = new QLabel(WidgetHelp);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(510, 530, 111, 21));
        label_15->setStyleSheet(QStringLiteral("color: rgb(236, 40, 5);"));
        label_16 = new QLabel(WidgetHelp);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(510, 560, 271, 221));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/screenshot3.png")));
        label_16->setScaledContents(true);
        label_17 = new QLabel(WidgetHelp);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 430, 281, 17));
        label_17->setStyleSheet(QLatin1String("font: 18pt;\n"
"color: rgb(255, 255, 255);"));
        label_18 = new QLabel(WidgetHelp);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 120, 281, 17));
        label_18->setStyleSheet(QLatin1String("font: 18pt;\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(WidgetHelp);

        QMetaObject::connectSlotsByName(WidgetHelp);
    } // setupUi

    void retranslateUi(QWidget *WidgetHelp)
    {
        WidgetHelp->setWindowTitle(QApplication::translate("WidgetHelp", "Help!", 0));
        lblHelp->setText(QApplication::translate("WidgetHelp", "-- pick a difficulty level to begin with. The \n"
" harder the difficulty level, the faster the objects will fall \n"
" and the more points you will earn \n"
" -- use your arrow keys to move the satyr left, right, up, \n"
" or down \n"
" -- you can press pause in the middle of the game to save, \n"
" enter cheat mode, or return to the start menu \n"
" -- cheat mode: allows the user to play without losing lives \n"
" (aka dying).", 0));
        lblPic->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("WidgetHelp", "Increases life by 1", 0));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("WidgetHelp", "Makes the falling objects slower over a short \n"
" period of time", 0));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("WidgetHelp", "Player is invincible over a short period of time", 0));
        label_10->setText(QApplication::translate("WidgetHelp", "Multiplies the score by 2 over a short period of time", 0));
        label_9->setText(QString());
        label_2->setText(QString());
        label_11->setText(QString());
        label_12->setText(QApplication::translate("WidgetHelp", "EASY LEVEL", 0));
        label_13->setText(QApplication::translate("WidgetHelp", "MEDIUM LEVEL", 0));
        label_14->setText(QString());
        label_15->setText(QApplication::translate("WidgetHelp", "HARD LEVEL", 0));
        label_16->setText(QString());
        label_17->setText(QApplication::translate("WidgetHelp", "POWERUPS AVAILABLE", 0));
        label_18->setText(QApplication::translate("WidgetHelp", "GAME INSTRUCTIONS", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetHelp: public Ui_WidgetHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETHELP_H
