/********************************************************************************
** Form generated from reading UI file 'widgetgame.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETGAME_H
#define UI_WIDGETGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetGame
{
public:
    QWidget *widget;
    QLabel *lblScoreT;
    QLabel *lblScore;
    QLabel *lblLivesT;
    QLabel *lblLives;
    QPushButton *btnPause;
    QLabel *lblCheatMode;
    QLabel *label;
    QLabel *slowPixmap;
    QLabel *shieldPixmap;
    QLabel *multiPixmap;
    QLabel *background;
    QLabel *lblSatyr;

    void setupUi(QWidget *WidgetGame)
    {
        if (WidgetGame->objectName().isEmpty())
            WidgetGame->setObjectName(QStringLiteral("WidgetGame"));
        WidgetGame->resize(1024, 768);
        WidgetGame->setStyleSheet(QLatin1String("font: 75 12pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);"));
        widget = new QWidget(WidgetGame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 161, 781));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        lblScoreT = new QLabel(widget);
        lblScoreT->setObjectName(QStringLiteral("lblScoreT"));
        lblScoreT->setGeometry(QRect(10, 50, 61, 31));
        lblScoreT->setStyleSheet(QLatin1String("color: rgb(255, 47, 11);\n"
"font: 14pt;"));
        lblScore = new QLabel(widget);
        lblScore->setObjectName(QStringLiteral("lblScore"));
        lblScore->setGeometry(QRect(80, 50, 81, 31));
        lblScore->setStyleSheet(QStringLiteral("font: 14pt;"));
        lblLivesT = new QLabel(widget);
        lblLivesT->setObjectName(QStringLiteral("lblLivesT"));
        lblLivesT->setGeometry(QRect(10, 90, 51, 31));
        lblLivesT->setStyleSheet(QLatin1String("font: 14pt;\n"
"color: rgb(255, 47, 11)"));
        lblLives = new QLabel(widget);
        lblLives->setObjectName(QStringLiteral("lblLives"));
        lblLives->setGeometry(QRect(80, 90, 16, 31));
        lblLives->setStyleSheet(QStringLiteral("font: 14pt;"));
        btnPause = new QPushButton(widget);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setGeometry(QRect(50, 200, 51, 51));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon);
        btnPause->setIconSize(QSize(45, 45));
        btnPause->setAutoDefault(false);
        lblCheatMode = new QLabel(widget);
        lblCheatMode->setObjectName(QStringLiteral("lblCheatMode"));
        lblCheatMode->setGeometry(QRect(10, 140, 131, 21));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 161, 41));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logooption1.png")));
        label->setScaledContents(true);
        slowPixmap = new QLabel(widget);
        slowPixmap->setObjectName(QStringLiteral("slowPixmap"));
        slowPixmap->setGeometry(QRect(20, 290, 41, 71));
        slowPixmap->setPixmap(QPixmap(QString::fromUtf8(":/hourglass.png")));
        slowPixmap->setScaledContents(false);
        shieldPixmap = new QLabel(widget);
        shieldPixmap->setObjectName(QStringLiteral("shieldPixmap"));
        shieldPixmap->setGeometry(QRect(20, 380, 41, 51));
        shieldPixmap->setPixmap(QPixmap(QString::fromUtf8(":/shield.png")));
        shieldPixmap->setScaledContents(false);
        multiPixmap = new QLabel(widget);
        multiPixmap->setObjectName(QStringLiteral("multiPixmap"));
        multiPixmap->setGeometry(QRect(20, 450, 41, 41));
        multiPixmap->setPixmap(QPixmap(QString::fromUtf8(":/multiplier.png")));
        multiPixmap->setScaledContents(false);
        background = new QLabel(WidgetGame);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 1031, 771));
        lblSatyr = new QLabel(WidgetGame);
        lblSatyr->setObjectName(QStringLiteral("lblSatyr"));
        lblSatyr->setGeometry(QRect(590, 670, 28, 94));
        lblSatyr->setBaseSize(QSize(28, 94));
        lblSatyr->setPixmap(QPixmap(QString::fromUtf8(":/satyr.png")));
        lblSatyr->setScaledContents(false);
        lblSatyr->setAlignment(Qt::AlignCenter);
        background->raise();
        widget->raise();
        lblSatyr->raise();

        retranslateUi(WidgetGame);

        QMetaObject::connectSlotsByName(WidgetGame);
    } // setupUi

    void retranslateUi(QWidget *WidgetGame)
    {
        WidgetGame->setWindowTitle(QApplication::translate("WidgetGame", "Dodge-It!", 0));
        lblScoreT->setText(QApplication::translate("WidgetGame", "Score :", 0));
        lblScore->setText(QApplication::translate("WidgetGame", "0", 0));
        lblLivesT->setText(QApplication::translate("WidgetGame", "Lives :", 0));
        lblLives->setText(QApplication::translate("WidgetGame", "3", 0));
        btnPause->setText(QString());
        lblCheatMode->setText(QString());
        label->setText(QString());
        slowPixmap->setText(QString());
        shieldPixmap->setText(QString());
        multiPixmap->setText(QString());
        background->setText(QString());
        lblSatyr->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WidgetGame: public Ui_WidgetGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETGAME_H
