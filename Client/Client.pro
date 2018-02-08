#-------------------------------------------------
#
# Project created by QtCreator 2013-02-23T08:54:24
#
#-------------------------------------------------

QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app

INCLUDEPATH += ../../QtWebsocket
DEPENDPATH += ../../QtWebsocket

SOURCES += \
    main.cpp \
    Client.cpp \
    viewer.cpp

HEADERS += \
    QWsSocket.h \
    Client.h \
    viewer.h

FORMS += Client.ui \
    viewer.ui

win32:CONFIG(release, debug|release): LIBS += -L../../QtWebsocket/release/ -lQtWebsocket
else:win32:CONFIG(debug, debug|release): LIBS += -L../../QtWebsocket/debug/ -lQtWebsocket
else:unix:!symbian: LIBS += -L../../QtWebsocket/ -lQtWebsocket

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += ../../QtWebsocket/release/libQtWebsocket.a
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += ../../QtWebsocket/debug/libQtWebsocket.a
else:unix:!symbian: PRE_TARGETDEPS += ../../QtWebsocket/libQtWebsocket.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../qwt-6.1.3/lib/ -lqwt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../qwt-6.1.3/lib/ -lqwtd

INCLUDEPATH += $$PWD/../../qwt-6.1.3/src
DEPENDPATH += $$PWD/../../qwt-6.1.3/src
