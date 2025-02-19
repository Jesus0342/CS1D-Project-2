#-------------------------------------------------
#
# Project created by QtCreator 2017-10-18T19:57:22
#
#-------------------------------------------------

QT       += core gui sql
CONFIG   += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NFL_Football
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
        database.cpp \
        team.cpp \
        unsortedmap.cpp \
        souvenir.cpp \
        buysouvenir.cpp \
        adminwindow.cpp \
        login.cpp \
        startatfordfield.cpp \
        traversegraph.cpp \
        graph.cpp \
    startlosangeles.cpp \
    customtour.cpp

HEADERS  += mainwindow.h \
    database.h \
    team.h \
    unsortedmap.h \
    souvenir.h \
    buysouvenir.h \
    adminwindow.h \
    login.h \
    startatfordfield.h \
    traversegraph.h \
    graph.h \
    startlosangeles.h \
    customtour.h

FORMS    += mainwindow.ui \
    buysouvenir.ui \
    adminwindow.ui \
    login.ui \
    startatfordfield.ui \
    traversegraph.ui \
    startlosangeles.ui \
    customtour.ui
