cmake_minimum_required(VERSION 3.0.0)
project(libsettings)

set(SRC
	settings.cxx
	tinyxml2.cpp
)

add_library(settings SHARED ${SRC})

target_link_libraries(settings
	Qt5::Core
)

if (UNIX)
	install(TARGETS settings DESTINATION /usr/local/lib)
	install(FILES settings.hh DESTINATION /usr/local/include/cpplib)
	install(FILES tinyxml2.h DESTINATION /usr/local/include/cpplib)
	install(CODE "execute_process(COMMAND ldconfig)")
endif()
