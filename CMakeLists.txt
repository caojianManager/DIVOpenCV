cmake_minimum_required(VERSION 3.21)
project(DIVOpenCV)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/caojian/Qt5.13.2/5.13.2/clang_64")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(DIVOpenCV main.cpp Application/Application.cpp Application/Application.h)
target_link_libraries(DIVOpenCV
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

