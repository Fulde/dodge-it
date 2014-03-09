#-------------------------------------------------
#
# Project created by QtCreator 2014-03-06T10:34:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dodge-it
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    game.cpp \
    object.cpp \
    widgetgame.cpp \
    widgetpause.cpp \
    widgetscore.cpp

HEADERS  += widget.h \
    game.h \
    object.h \
    widgetscore.h \
    widgetpause.h \
    widgetgame.h

FORMS    += widget.ui \
    widgetscore.ui \
    widgetgame.ui \
    widgetpause.ui

RESOURCES += \
    images/resources.qrc
