MOC_DIR     = build/moc
OBJECTS_DIR = build/obj
UI_DIR      = build/ui
RCC_DIR     = build/

QT       += core gui charts widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    DataMatrix.cpp \
    Charts.cpp \
    model.cpp \

HEADERS += \
    mainwindow.h \
    DataMatrix.h \
    Charts.h \
    model.h \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
