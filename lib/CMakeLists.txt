cmake_minimum_required(VERSION 3.0.0)
project(libsettings)

set(SRC
	settings.cxx
	tinyxml2.cpp
)

add_library(settings SHARED ${SRC})

target_link_libraries(settings
	Qt5::Core
	Qt5::Widgets
)