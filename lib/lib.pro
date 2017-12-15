QT = core
TEMPLATE=lib
CONFIG+=sharedlib
TARGET=settings

SOURCES = \
	settings.cxx \
	tinyxml2.cpp

HEADERS = \
	settings.hh \
    tinyxml2.h
