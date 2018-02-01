cmake_minimum_required(VERSION 3.0.0)
project(libsettings)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS
	Core
)

add_compile_options(-std=c++11)
include_directories(lib)

add_subdirectory(lib)
add_subdirectory(test)
