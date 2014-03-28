/********************************************************************************
** Form generated from reading UI file 'widgetuser.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETUSER_H
#define UI_WIDGETUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUser
{
public:
    QWidget *widget;
    QLabel *label;
    QLineEdit *lnEditUN;
    QLabel *lblText;

    void setupUi(QWidget *WidgetUser)
    {
        if (WidgetUser->objectName().isEmpty())
            WidgetUser->setObjectName(QStringLiteral("WidgetUser"));
        WidgetUser->resize(1024, 768);
        widget = new QWidget(WidgetUser);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(260, 200, 512, 384));
        widget->setStyleSheet(QLatin1String("background-color:#000000;\n"
"color:#FFFFFF;"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 241, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/username.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        lnEditUN = new QLineEdit(widget);
        lnEditUN->setObjectName(QStringLiteral("lnEditUN"));
        lnEditUN->setGeometry(QRect(170, 100, 171, 27));
        lblText = new QLabel(widget);
        lblText->setObjectName(QStringLiteral("lblText"));
        lblText->setGeometry(QRect(40, 130, 431, 231));
        lblText->setContextMenuPolicy(Qt::DefaultContextMenu);

        retranslateUi(WidgetUser);

        QMetaObject::connectSlotsByName(WidgetUser);
    } // setupUi

    void retranslateUi(QWidget *WidgetUser)
    {
        WidgetUser->setWindowTitle(QApplication::translate("WidgetUser", "Form", 0));
        label->setText(QString());
        lnEditUN->setInputMask(QString());
        lblText->setText(QApplication::translate("WidgetUser", "blah... blah.. blah.. \n"
"\n"
" Put the user names here...", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetUser: public Ui_WidgetUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSER_H
