#-------------------------------------------------
#
# Project created by QtCreator 2012-12-09T16:39:56
#
#-------------------------------------------------

QT       += core network sql

QT       -= gui

TARGET = worldserver
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

unix:!macx {
    LIBS += -L"/usr/lib/libcryptopp" -lcryptopp
    LIBS += -L"/usr/lib/libprotobuf" -lprotobuf
}

macx: {
    LIBS += -L"/usr/local/lib/" -lcryptopp
    LIBS += -L"/usr/local/lib/" -lprotobuf
    LIBS += "/usr/local/lib/libquazip.dylib"
}

win32 {
    LIBS += -L"C:/CryptoPP/lib" -lcryptopp563
    LIBS += -L"C:/Protobuf/lib" -lprotobuf
    LIBS += -L"C:/Quazip/lib" -lquazip
    INCLUDEPATH += C:/Quazip/include
    INCLUDEPATH += C:/CryptoPP/include
}

INCLUDEPATH += . ../dep ../shared ../worldserver ../worldserver/Game
DEPENDPATH  += . ../dep ../shared ../worldserver ../worldserver/Game

SOURCES += main.cpp \
    WorldServer.cpp

HEADERS += WorldServer.h

include(../dep/Dep.pri)
include(../shared/Shared.pri)
include(Game/Game.pri)
include(Scripts/Scripts.pri)

QMAKE_CXXFLAGS_WARN_ON += -Wno-unused-parameter
