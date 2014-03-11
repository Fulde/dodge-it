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
    QLabel *lblScore;
    QLabel *lblLives;
    QLabel *lblSatyr;
    QPushButton *btnPause;

    void setupUi(QWidget *WidgetGame)
    {
        if (WidgetGame->objectName().isEmpty())
            WidgetGame->setObjectName(QStringLiteral("WidgetGame"));
        WidgetGame->resize(1024, 768);
        WidgetGame->setStyleSheet(QStringLiteral("font: 75 12pt \"Ubuntu\";"));
        lblScore = new QLabel(WidgetGame);
        lblScore->setObjectName(QStringLiteral("lblScore"));
        lblScore->setGeometry(QRect(20, 10, 171, 31));
        lblLives = new QLabel(WidgetGame);
        lblLives->setObjectName(QStringLiteral("lblLives"));
        lblLives->setGeometry(QRect(20, 50, 171, 31));
        lblSatyr = new QLabel(WidgetGame);
        lblSatyr->setObjectName(QStringLiteral("lblSatyr"));
        lblSatyr->setGeometry(QRect(450, 670, 101, 101));
        lblSatyr->setPixmap(QPixmap(QString::fromUtf8(":/satyr.png")));
        btnPause = new QPushButton(WidgetGame);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setGeometry(QRect(960, 10, 51, 51));
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
        lblScore->setText(QApplication::translate("WidgetGame", "Score :", 0));
        lblLives->setText(QApplication::translate("WidgetGame", "Lives :", 0));
        lblSatyr->setText(QString());
        btnPause->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WidgetGame: public Ui_WidgetGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETGAME_H
