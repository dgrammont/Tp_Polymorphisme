TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        element.cpp \
        main.cpp \
        segement.cpp \
        trajectoire.cpp

HEADERS += \
    element.h \
    segement.h \
    trajectoire.h

DISTFILES += \
    ../Question
