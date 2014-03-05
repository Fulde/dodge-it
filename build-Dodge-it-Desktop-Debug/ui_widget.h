/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetStart
{
public:
    QPushButton *btnStart;
    QRadioButton *rbEasy;
    QRadioButton *rbMedium;
    QRadioButton *rbHard;
    QPushButton *btnLoad;
    QLabel *label;

    void setupUi(QWidget *widgetStart)
    {
        if (widgetStart->objectName().isEmpty())
            widgetStart->setObjectName(QStringLiteral("widgetStart"));
        widgetStart->resize(1024, 768);
        widgetStart->setStyleSheet(QStringLiteral(""));
        btnStart = new QPushButton(widgetStart);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(30, 660, 961, 71));
        btnStart->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        rbEasy = new QRadioButton(widgetStart);
        rbEasy->setObjectName(QStringLiteral("rbEasy"));
        rbEasy->setGeometry(QRect(400, 270, 171, 61));
        rbEasy->setStyleSheet(QStringLiteral("font: 40pt"));
        rbEasy->setChecked(true);
        rbMedium = new QRadioButton(widgetStart);
        rbMedium->setObjectName(QStringLiteral("rbMedium"));
        rbMedium->setGeometry(QRect(400, 360, 271, 61));
        rbMedium->setStyleSheet(QStringLiteral("font: 40pt;"));
        rbHard = new QRadioButton(widgetStart);
        rbHard->setObjectName(QStringLiteral("rbHard"));
        rbHard->setGeometry(QRect(400, 450, 181, 61));
        rbHard->setStyleSheet(QStringLiteral("font: 40pt;"));
        btnLoad = new QPushButton(widgetStart);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));
        btnLoad->setGeometry(QRect(730, 580, 261, 61));
        btnLoad->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        label = new QLabel(widgetStart);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 721, 161));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));

        retranslateUi(widgetStart);

        QMetaObject::connectSlotsByName(widgetStart);
    } // setupUi

    void retranslateUi(QWidget *widgetStart)
    {
        widgetStart->setWindowTitle(QApplication::translate("widgetStart", "Widget", 0));
        btnStart->setText(QApplication::translate("widgetStart", "Start Game", 0));
        rbEasy->setText(QApplication::translate("widgetStart", "Easy", 0));
        rbMedium->setText(QApplication::translate("widgetStart", "Medium", 0));
        rbHard->setText(QApplication::translate("widgetStart", "Hard", 0));
        btnLoad->setText(QApplication::translate("widgetStart", "Load Game", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class widgetStart: public Ui_widgetStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
