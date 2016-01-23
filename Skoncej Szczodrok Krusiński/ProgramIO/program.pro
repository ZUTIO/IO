QT += core widgets sql
QT -= gui

CONFIG += c++11

TARGET = program
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    administrator.cpp \
    aplikacja.cpp \
    formularzdodajklienta.cpp \
    formularzdodajprodukt.cpp \
    formularzdodajuzytkownika.cpp \
    pracownik.cpp

RESOURCES += \
    resource.qrc

DISTFILES += \
    program.pro.user

HEADERS += \
    administrator.h \
    aplikacja.h \
    formularzdodajklienta.h \
    formularzdodajprodukt.h \
    formularzdodajuzytkownika.h \
    pracownik.h

FORMS += \
    administrator.ui \
    aplikacja.ui \
    formularzdodajklienta.ui \
    formularzdodajprodukt.ui \
    formularzdodajuzytkownika.ui
