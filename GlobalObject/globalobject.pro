
#a bug about qt.5.12.0
#use vs 2017 64 bits
#under windows 10 64 bits

TARGET = $$qtLibraryTarget(sstd_qml_control)
TEMPLATE = lib
CONFIG += plugin

QT += gui
QT += qml
QT += core
QT += quick
QT += widgets
QT += concurrent
QT += quickwidgets
QT += quickcontrols2

win32-msvc*{
    QMAKE_CXXFLAGS += /std:c++latest
}else{
    CONFIG += c++17
    LIBS += -lstdc++fs
}

win32-msvc*{
    CONFIG+=suppress_vcproj_warnings
}else{
    QMAKE_CFLAGS += -std=c11
}

HEADERS += \
    $$PWD/GlobalObject.hpp

SOURCES += \
    $$PWD/GlobalObject.cpp

HEADERS += \
    $$PWD/sstd_qml_control.hpp

SOURCES += \
    $$PWD/sstd_qml_control.cpp


DESTDIR = $$PWD/../bin/sstd/qml/control






















