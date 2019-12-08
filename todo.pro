TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cli.cpp \
        main.cpp \
        rep.cpp \
        service.cpp \
        task.cpp

HEADERS += \
    cli.h \
    rep.h \
    service.h \
    task.h
