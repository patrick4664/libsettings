cmake_minimum_required(VERSION 3.0.0)
project(libsettings)

set(SRC
	main.cxx
	rsc.qrc
)

add_executable(testSettings ${SRC})

target_link_libraries(testSettings
	Qt5::Core
	settings
)
