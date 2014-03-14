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
    QLabel *lblSatyr;
    QWidget *widget;
    QLabel *lblScoreT;
    QLabel *lblScore;
    QLabel *lblLivesT;
    QLabel *lblLives;
    QPushButton *btnPause;

    void setupUi(QWidget *WidgetGame)
    {
        if (WidgetGame->objectName().isEmpty())
            WidgetGame->setObjectName(QStringLiteral("WidgetGame"));
        WidgetGame->resize(1024, 768);
        WidgetGame->setStyleSheet(QStringLiteral("font: 75 12pt \"Ubuntu\";"));
        lblSatyr = new QLabel(WidgetGame);
        lblSatyr->setObjectName(QStringLiteral("lblSatyr"));
        lblSatyr->setGeometry(QRect(450, 670, 101, 101));
        lblSatyr->setPixmap(QPixmap(QString::fromUtf8(":/satyr.png")));
        widget = new QWidget(WidgetGame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 161, 781));
        widget->setStyleSheet(QStringLiteral("background:#686868"));
        lblScoreT = new QLabel(widget);
        lblScoreT->setObjectName(QStringLiteral("lblScoreT"));
        lblScoreT->setGeometry(QRect(10, 20, 51, 31));
        lblScore = new QLabel(widget);
        lblScore->setObjectName(QStringLiteral("lblScore"));
        lblScore->setGeometry(QRect(70, 20, 141, 31));
        lblLivesT = new QLabel(widget);
        lblLivesT->setObjectName(QStringLiteral("lblLivesT"));
        lblLivesT->setGeometry(QRect(10, 50, 41, 31));
        lblLives = new QLabel(widget);
        lblLives->setObjectName(QStringLiteral("lblLives"));
        lblLives->setGeometry(QRect(70, 50, 16, 31));
        btnPause = new QPushButton(widget);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setGeometry(QRect(50, 120, 51, 51));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon);
        btnPause->setIconSize(QSize(45, 45));
        btnPause->setAutoDefault(false);

        retranslateUi(WidgetGame);

        QMetaObject::connectSlotsByName(WidgetGame);
    } // setupUi

    void retranslateUi(QWidget *WidgetGame)
    {
        WidgetGame->setWindowTitle(QApplication::translate("WidgetGame", "Widget", 0));
        lblSatyr->setText(QString());
        lblScoreT->setText(QApplication::translate("WidgetGame", "Score :", 0));
        lblScore->setText(QApplication::translate("WidgetGame", "0", 0));
        lblLivesT->setText(QApplication::translate("WidgetGame", "Lives :", 0));
        lblLives->setText(QApplication::translate("WidgetGame", "3", 0));
        btnPause->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WidgetGame: public Ui_WidgetGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETGAME_H
