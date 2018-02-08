#-------------------------------------------------
#
# Project created by QtCreator 2013-02-23T07:57:09
#
#-------------------------------------------------

QT += core network

TARGET = Server
CONFIG += console
TEMPLATE = app

DEPENDPATH += "../../QtWebsocket"
SOURCES += \
    main.cpp \
    Server.cpp \
    ../../LSR/lsr.cpp \
    ../../QtWebsocket/QWsServer.cpp \
    ../../QtWebsocket/QWsSocket.cpp

INCLUDEPATH += "../../QtWebsocket"
INCLUDEPATH += "../../LSR"
INCLUDEPATH += "../../eigen/Eigen"
HEADERS += \
    Server.h \
    ../../LSR/lsr.h \
    ../../QtWebsocket/QWsServer.h \
    ../../QtWebsocket/QWsSocket.h


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../QtWebsocket/release/ -lQtWebsocket
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../QtWebsocket/debug/ -lQtWebsocket

INCLUDEPATH += $$PWD/../../QtWebsocket/debug
DEPENDPATH += $$PWD/../../QtWebsocket/debug

FORMS += \
    ../../../../report3/report3/LeastSquareRegression/leastsquareregression.ui
