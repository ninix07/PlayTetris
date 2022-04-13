QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gameover.cpp \
    howtoplay.cpp \
    main.cpp \
    mainwindowtetris.cpp \
    startwindow.cpp \
    tetriswindow.cpp \
    tetrixboard.cpp \
    tetrixpiece.cpp

HEADERS += \
    gameover.h \
    howtoplay.h \
    mainWindowTetris.h \
    precompiledheader.h \
    startwindow.h \
    tetriswindow.h \
    tetrixboard.h \
    tetrixpiece.h

FORMS += \
    gameover.ui \
    howtoplay.ui \
    mainwindowtetris.ui \
    startwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc \
    Resources.qrc

DISTFILES +=
