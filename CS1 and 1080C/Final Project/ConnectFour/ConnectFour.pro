TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    GameLogic.cpp \
    Board.cpp \
    Player.cpp

HEADERS += \
    gamelogic.h \
    GameLogic.h \
    Board.h \
    Player.h
