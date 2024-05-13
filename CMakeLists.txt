cmake_minimum_required(VERSION 3.21.1)

option(LINK_INSIGHT "Link Qt Insight Tracker library" ON)
option(BUILD_QDS_COMPONENTS "Build design studio components" ON)

project(GuideMeApp LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 6.2 REQUIRED COMPONENTS Core Gui Qml Quick)

if (Qt6_VERSION VERSION_GREATER_EQUAL 6.3)
    qt_standard_project_setup()
endif()

set(CMAKE_AUTORCC ON)

qt_add_executable(GuideMeApp src/main.cpp
    account.h
    all_paths.h
    map_helpers.h
    map.h
    graph_state.h
    graph.h
    data_manager.h
    map_helpers.cpp
    map.cpp
    graph_state.cpp
    data_manager.cpp
    all_paths.cpp
    account.cpp

)

qt_add_resources(GuideMeApp "configuration"
    PREFIX "/"
    FILES
        qtquickcontrols2.conf
)

target_link_libraries(GuideMeApp PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
)

set(QT_QML_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/qml)
set(QML_IMPORT_PATH ${QT_QML_OUTPUT_DIRECTORY}
    CACHE STRING "Import paths for Qt Creator's code model"
    FORCE
)

if (BUILD_QDS_COMPONENTS)
    include(${CMAKE_CURRENT_SOURCE_DIR}/qmlcomponents)
endif()

include(${CMAKE_CURRENT_SOURCE_DIR}/qmlmodules)

if (LINK_INSIGHT)
    include(${CMAKE_CURRENT_SOURCE_DIR}/insight)
endif ()

include(GNUInstallDirs)
install(TARGETS GuideMeApp
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# make IDEs aware of the QML import path
set(QML_IMPORT_PATH ${PROJECT_BINARY_DIR}/qml CACHE PATH
    "Path to the custom QML components defined by the project")
