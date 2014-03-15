/********************************************************************************
** Form generated from reading UI file 'widgetstart.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETSTART_H
#define UI_WIDGETSTART_H

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

class Ui_WidgetStart
{
public:
    QPushButton *btnStart;
    QRadioButton *rbEasy;
    QRadioButton *rbMedium;
    QRadioButton *rbHard;
    QPushButton *btnLoad;
    QLabel *label;
    QPushButton *btnHelp;

    void setupUi(QWidget *WidgetStart)
    {
        if (WidgetStart->objectName().isEmpty())
            WidgetStart->setObjectName(QStringLiteral("WidgetStart"));
        WidgetStart->resize(1024, 768);
        WidgetStart->setAutoFillBackground(false);
        WidgetStart->setStyleSheet(QLatin1String("background-color: #FFFFFF;\n"
"color: rgb(255, 141, 11);"));
        btnStart = new QPushButton(WidgetStart);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(30, 620, 961, 111));
        btnStart->setAutoFillBackground(false);
        btnStart->setStyleSheet(QLatin1String("font: 50pt \"Sans Serif\";\n"
"color: rgb(0, 0, 0);"));
        btnStart->setAutoDefault(false);
        btnStart->setDefault(false);
        rbEasy = new QRadioButton(WidgetStart);
        rbEasy->setObjectName(QStringLiteral("rbEasy"));
        rbEasy->setGeometry(QRect(400, 240, 231, 101));
        rbEasy->setStyleSheet(QLatin1String("font: 60pt;\n"
"color: rgb(251, 255, 3)"));
        rbEasy->setChecked(true);
        rbMedium = new QRadioButton(WidgetStart);
        rbMedium->setObjectName(QStringLiteral("rbMedium"));
        rbMedium->setGeometry(QRect(400, 350, 331, 71));
        rbMedium->setStyleSheet(QStringLiteral("font: 60pt;"));
        rbHard = new QRadioButton(WidgetStart);
        rbHard->setObjectName(QStringLiteral("rbHard"));
        rbHard->setGeometry(QRect(400, 450, 221, 61));
        rbHard->setStyleSheet(QLatin1String("color: rgb(240, 8, 0);\n"
"font: 60pt;"));
        btnLoad = new QPushButton(WidgetStart);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));
        btnLoad->setGeometry(QRect(730, 520, 261, 61));
        btnLoad->setStyleSheet(QLatin1String("font: 20pt \"Sans Serif\";\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(WidgetStart);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 20, 861, 181));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logooption1.png")));
        label->setScaledContents(true);
        btnHelp = new QPushButton(WidgetStart);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setGeometry(QRect(30, 530, 261, 61));
        btnHelp->setStyleSheet(QLatin1String("font: 20pt \"Sans Serif\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(WidgetStart);

        QMetaObject::connectSlotsByName(WidgetStart);
    } // setupUi

    void retranslateUi(QWidget *WidgetStart)
    {
        WidgetStart->setWindowTitle(QApplication::translate("WidgetStart", "Dodge-It!", 0));
        btnStart->setText(QApplication::translate("WidgetStart", "Start New Game", 0));
        rbEasy->setText(QApplication::translate("WidgetStart", "Easy", 0));
        rbMedium->setText(QApplication::translate("WidgetStart", "Medium", 0));
        rbHard->setText(QApplication::translate("WidgetStart", "Hard", 0));
        btnLoad->setText(QApplication::translate("WidgetStart", "Load Game", 0));
        label->setText(QString());
        btnHelp->setText(QApplication::translate("WidgetStart", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetStart: public Ui_WidgetStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSTART_H
