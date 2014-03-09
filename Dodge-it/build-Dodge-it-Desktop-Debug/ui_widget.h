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

class Ui_Widget
{
public:
    QPushButton *btnStart;
    QRadioButton *rbEasy;
    QRadioButton *rbMedium;
    QRadioButton *rbHard;
    QPushButton *btnLoad;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1024, 768);
        Widget->setStyleSheet(QStringLiteral(""));
        btnStart = new QPushButton(Widget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(30, 660, 961, 71));
        btnStart->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        rbEasy = new QRadioButton(Widget);
        rbEasy->setObjectName(QStringLiteral("rbEasy"));
        rbEasy->setGeometry(QRect(400, 270, 171, 61));
        rbEasy->setStyleSheet(QStringLiteral("font: 40pt"));
        rbEasy->setChecked(true);
        rbMedium = new QRadioButton(Widget);
        rbMedium->setObjectName(QStringLiteral("rbMedium"));
        rbMedium->setGeometry(QRect(400, 360, 271, 61));
        rbMedium->setStyleSheet(QStringLiteral("font: 40pt;"));
        rbHard = new QRadioButton(Widget);
        rbHard->setObjectName(QStringLiteral("rbHard"));
        rbHard->setGeometry(QRect(400, 450, 181, 61));
        rbHard->setStyleSheet(QStringLiteral("font: 40pt;"));
        btnLoad = new QPushButton(Widget);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));
        btnLoad->setGeometry(QRect(730, 580, 261, 61));
        btnLoad->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 721, 161));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        btnStart->setText(QApplication::translate("Widget", "Start New Game", 0));
        rbEasy->setText(QApplication::translate("Widget", "Easy", 0));
        rbMedium->setText(QApplication::translate("Widget", "Medium", 0));
        rbHard->setText(QApplication::translate("Widget", "Hard", 0));
        btnLoad->setText(QApplication::translate("Widget", "Load Game", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
