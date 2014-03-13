/********************************************************************************
** Form generated from reading UI file 'widgetscore.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETSCORE_H
#define UI_WIDGETSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetScore
{
public:
    QLabel *lblTitle;
    QLabel *lblHighScores;

    void setupUi(QWidget *WidgetScore)
    {
        if (WidgetScore->objectName().isEmpty())
            WidgetScore->setObjectName(QStringLiteral("WidgetScore"));
        WidgetScore->resize(512, 384);
        WidgetScore->setStyleSheet(QStringLiteral(""));
        lblTitle = new QLabel(WidgetScore);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(10, 20, 491, 41));
        lblTitle->setStyleSheet(QStringLiteral("font: 75 22pt \"Ubuntu\";"));
        lblTitle->setAlignment(Qt::AlignCenter);
        lblHighScores = new QLabel(WidgetScore);
        lblHighScores->setObjectName(QStringLiteral("lblHighScores"));
        lblHighScores->setGeometry(QRect(70, 80, 371, 271));
        lblHighScores->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(WidgetScore);

        QMetaObject::connectSlotsByName(WidgetScore);
    } // setupUi

    void retranslateUi(QWidget *WidgetScore)
    {
        WidgetScore->setWindowTitle(QApplication::translate("WidgetScore", "Widget", 0));
        lblTitle->setText(QApplication::translate("WidgetScore", "HIGHSCORES", 0));
        lblHighScores->setText(QApplication::translate("WidgetScore", "High Scores go Here\n"
"\n"
"You can use the normal new line", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetScore: public Ui_WidgetScore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSCORE_H
