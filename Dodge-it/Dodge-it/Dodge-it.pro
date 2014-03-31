#-------------------------------------------------
#
# Project created by QtCreator 2014-03-06T10:34:06
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dodge-it
TEMPLATE = app


SOURCES += main.cpp\
    game.cpp \
    object.cpp \
    widgetgame.cpp \
    widgetpause.cpp \
    widgethelp.cpp \
    widgetstart.cpp \
    widget.cpp \
    widgetscore.cpp \
    widgetuser.cpp

HEADERS  += \
    game.h \
    object.h \
    widgetscore.h \
    widgetpause.h \
    widgetgame.h \
    widgethelp.h \
    widgetstart.h \
    widget.h \
    widgetuser.h

FORMS    += \
    widgetscore.ui \
    widgetgame.ui \
    widgetpause.ui \
    widgethelp.ui \
    widget.ui \
    widgetstart.ui \
    widgetuser.ui

RESOURCES += \
    images/resources.qrc

CONFIG += c++11
