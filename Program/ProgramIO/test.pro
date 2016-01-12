QT += core widgets sql
QT -= gui

CONFIG += c++11

TARGET = test
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    administrator.cpp \
    aplikacja.cpp \
    formularzdodajklienta.cpp \
    formularzdodajprodukt.cpp \
    formularzdodajuzytkownika.cpp \
    pracownik.cpp \
    formularzusunklienta.cpp \
    dane.cpp \
    formularzedytujuzytkownika.cpp \
    guia.cpp \
    klient.cpp \
    produkt.cpp \
    uzytkownik.cpp \
    zamowienie.cpp \
    formularzedytujprodukt.cpp

FORMS += \
    aplikacja.ui \
    formularzdodajklienta.ui \
    formularzdodajprodukt.ui \
    formularzdodajuzytkownika.ui \
    formularzedytujuzytkownika.ui \
    guia.ui \
    formularzedytujprodukt.ui

HEADERS += \
    administrator.h \
    aplikacja.h \
    formularzdodajklienta.h \
    formularzdodajprodukt.h \
    formularzdodajuzytkownika.h \
    pracownik.h \
    formularzusunklienta.h \
    dane.h \
    formularzedytujuzytkownika.h \
    guia.h \
    klient.h \
    produkt.h \
    uzytkownik.h \
    zamowienie.h \
    formularzedytujprodukt.h

RESOURCES += \
    resource.qrc

SUBDIRS += \
    program.pro \
    ProgramIO.pro

DISTFILES += \
    program.pro.user \
    program.pro.user.8e82d30 \
    ProgramIO.pro.user \
    ProgramIO.pro.user.8e82d30 \
    ProgramIO.pro.user.4523aa4 \
    ProgramIO.pro.user.d8b13a0 \
    test.pro.user
