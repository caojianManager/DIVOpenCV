cmake_minimum_required(VERSION 3.21)
project(DIVOpenCV)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/caojian/Qt5.13.2/5.13.2/clang_64")

set(RESOURCES
        Resources/resources.qrc)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(DIVOpenCV
        main.cpp
        MainWindow/MainWindow.cpp
        MainWindow/MainWindow.h
        MainWindow/MainWindow.ui
        QtLearning/QtLearnColorUi/QtLearnColorUi.cpp
        QtLearning/QtLearnColorUi/QtLearnColorUi.h
        QtLearning/QtLearnColorUi/QtLearnColorUi.ui
        Login/LoginWindow.cpp Login/LoginWindow.h
        Login/LoginWindow.ui
        ${RESOURCES})
target_link_libraries(DIVOpenCV
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

