QT       += core gui network widgets sql

# greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    api.cpp \
    main.cpp \
    mainwindow.cpp \
    src/Database/database.cpp \
    src/Home/home.cpp \
    src/Login/login.cpp \
    src/Recommender/recommender.cpp \
    src/Register/register.cpp \
    src/Watchlist/watchlist.cpp

HEADERS += \
    api.h \
    mainwindow.h \
    src/Database/database.h \
    src/Home/home.h \
    src/Login/login.h \
    src/Recommender/recommender.h \
    src/Register/register.h \
    src/Watchlist/watchlist.h

FORMS += \
    home.ui \
    login.ui \
    mainwindow.ui \
    register.ui \
    watchlist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
