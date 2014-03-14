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
        WidgetStart->setStyleSheet(QStringLiteral(""));
        btnStart = new QPushButton(WidgetStart);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(30, 660, 961, 71));
        btnStart->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        btnStart->setAutoDefault(false);
        btnStart->setDefault(false);
        rbEasy = new QRadioButton(WidgetStart);
        rbEasy->setObjectName(QStringLiteral("rbEasy"));
        rbEasy->setGeometry(QRect(400, 270, 171, 61));
        rbEasy->setStyleSheet(QStringLiteral("font: 40pt"));
        rbEasy->setChecked(true);
        rbMedium = new QRadioButton(WidgetStart);
        rbMedium->setObjectName(QStringLiteral("rbMedium"));
        rbMedium->setGeometry(QRect(400, 360, 271, 61));
        rbMedium->setStyleSheet(QStringLiteral("font: 40pt;"));
        rbHard = new QRadioButton(WidgetStart);
        rbHard->setObjectName(QStringLiteral("rbHard"));
        rbHard->setGeometry(QRect(400, 450, 181, 61));
        rbHard->setStyleSheet(QStringLiteral("font: 40pt;"));
        btnLoad = new QPushButton(WidgetStart);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));
        btnLoad->setGeometry(QRect(730, 580, 261, 61));
        btnLoad->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        label = new QLabel(WidgetStart);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 721, 161));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));
        btnHelp = new QPushButton(WidgetStart);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setGeometry(QRect(30, 580, 261, 61));
        btnHelp->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));

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
