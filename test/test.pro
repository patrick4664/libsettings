QT += core widgets gui
TEMPLATE=app
CONFIG+=-std=c+11
TARGET=testSettings
LIBS+=-L../lib -lsettings
INCLUDEPATH+=../lib

SOURCES = main.cxx

RESOURCES += \
    rsc.qrc
