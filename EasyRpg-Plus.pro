#-------------------------------------------------
#
# Project created by QtCreator 2012-12-30T08:20:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EasyRpg-Plus
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    listdb.cpp \
    characterpropertiesdb.cpp \
    curvepropertiesdb.cpp \
    charasetpropertiesdb.cpp \
    skillpropertiesdb.cpp \
    actionpropertiesdb.cpp \
    itempropertiesdb.cpp \
    attributepropertiesdb.cpp \
    conditionpropertiesdb.cpp \
    facesetpropertiesdb.cpp \
    animationsetpropertiesdb.cpp \
    eventpage.cpp \
    command.cpp \
    dialogcommand.cpp

HEADERS  += mainwindow.h \
    listdb.h \
    characterpropertiesdb.h \
    curvepropertiesdb.h \
    charasetpropertiesdb.h \
    skillpropertiesdb.h \
    actionpropertiesdb.h \
    itempropertiesdb.h \
    attributepropertiesdb.h \
    conditionpropertiesdb.h \
    facesetpropertiesdb.h \
    animationsetpropertiesdb.h \
    eventpage.h \
    command.h \
    dialogcommand.h

FORMS    += mainwindow.ui \
    listdb.ui \
    characterpropertiesdb.ui \
    curvepropertiesdb.ui \
    charasetpropertiesdb.ui \
    skillpropertiesdb.ui \
    actionpropertiesdb.ui \
    itempropertiesdb.ui \
    attributepropertiesdb.ui \
    conditionpropertiesdb.ui \
    facesetpropertiesdb.ui \
    animationsetpropertiesdb.ui \
    dialogcommand.ui

RESOURCES += \
    Resources.qrc
