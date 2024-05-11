QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bankcard.cpp \
    driverinfo.cpp \
    location.cpp \
    main.cpp \
    matestnashbusride.cpp \
    matestnasheliteride.cpp \
    matestnashzride.cpp \
    payment.cpp \
    reserve.cpp \
    resturants.cpp \
    signup.cpp \
    wallet.cpp

HEADERS += \
    bankcard.h \
    driverinfo.h \
    location.h \
    matestnashbusride.h \
    matestnasheliteride.h \
    matestnashzride.h \
    payment.h \
    reserve.h \
    resturants.h \
    signup.h \
    wallet.h

FORMS += \
    bankcard.ui \
    driverinfo.ui \
    location.ui \
    matestnashbusride.ui \
    matestnasheliteride.ui \
    matestnashzride.ui \
    payment.ui \
    reserve.ui \
    resturants.ui \
    signup.ui \
    wallet.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
