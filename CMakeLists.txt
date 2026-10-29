cmake_minimum_required(VERSION 3.16)

project(Kutegram VERSION 1.2.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Qt packages
find_package(Qt5 REQUIRED COMPONENTS
    Core
    Widgets
    Qml
    Quick
    Network
    Xml
    Sql
)

# Version define
add_compile_definitions(VERSION="${PROJECT_VERSION}")

# Optimization defines
add_compile_definitions(
    QT_USE_FAST_CONCATENATION
    QT_USE_FAST_OPERATOR_PLUS
)

# Release-mode: suppress debug output
if(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_definitions(
        QT_NO_DEBUG_OUTPUT
        KG_NO_DEBUG
        KG_NO_INFO
    )
endif()

# libkg (zlib + mbedtls + qt-json + kg sources)
add_subdirectory(libkg)

# qmlapplicationviewer
add_library(qmlapplicationviewer STATIC
    qmlapplicationviewer/qmlapplicationviewer.cpp
    qmlapplicationviewer/qmlapplicationviewer.h
)
target_include_directories(qmlapplicationviewer PUBLIC
    qmlapplicationviewer
)
target_link_libraries(qmlapplicationviewer PUBLIC
    Qt5::Core
    Qt5::Quick
)

# Main application
set(APP_SOURCES
    src/main.cpp
    src/dialogsmodel.cpp
    src/messagesmodel.cpp
    src/avatardownloader.cpp
    src/foldersmodel.cpp
    src/currentuserinfo.cpp
    src/messageutil.cpp
    src/platformutils.cpp
)

set(APP_HEADERS
    src/dialogsmodel.h
    src/messagesmodel.h
    src/avatardownloader.h
    src/foldersmodel.h
    src/currentuserinfo.h
    src/messageutil.h
    src/platformutils.h
)

set(APP_RESOURCES
    resources.qrc
)

# Windows resource file
if(WIN32)
    list(APPEND APP_SOURCES kutegramquick.rc)
endif()

add_executable(Kutegram
    ${APP_SOURCES}
    ${APP_HEADERS}
    ${APP_RESOURCES}
)

# macOS icon
if(APPLE)
    set_target_properties(Kutegram PROPERTIES
        MACOSX_BUNDLE TRUE
        MACOSX_BUNDLE_ICON_FILE kutegramquick.icns
    )
    set_source_files_properties(kutegramquick.icns PROPERTIES
        MACOSX_PACKAGE_LOCATION Resources
    )
    target_sources(Kutegram PRIVATE kutegramquick.icns)
endif()

target_include_directories(Kutegram PRIVATE src)

target_link_libraries(Kutegram PRIVATE
    Qt5::Core
    Qt5::Widgets
    Qt5::Qml
    Qt5::Quick
    Qt5::Network
    Qt5::Xml
    libkg
    qmlapplicationviewer
)

if(WIN32 AND NOT WINRT)
    find_package(Qt5WinExtras QUIET)
    if(Qt5WinExtras_FOUND)
        target_link_libraries(Kutegram PRIVATE Qt5::WinExtras)
    endif()
endif()
