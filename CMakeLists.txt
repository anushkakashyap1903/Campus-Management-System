cmake_minimum_required(VERSION 3.16)

project(CampusFriction VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(CampusFriction
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        studentdashboard.h studentdashboard.cpp studentdashboard.ui
        teacherdashboard.h teacherdashboard.cpp teacherdashboard.ui
        admindashboard.h admindashboard.cpp admindashboard.ui
        studentmanager.h studentmanager.cpp studentmanager.ui
        attendancewindow.h attendancewindow.cpp attendancewindow.ui
        resultwindow.h resultwindow.cpp resultwindow.ui
        teachermanager.h teachermanager.cpp teachermanager.ui
        complaintmanager.h complaintmanager.cpp complaintmanager.ui
        noticemanager.h noticemanager.cpp noticemanager.ui
        placementmanager.h placementmanager.cpp placementmanager.ui
        messmanager.h messmanager.cpp messmanager.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET CampusFriction APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(CampusFriction SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(CampusFriction
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(CampusFriction PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.CampusFriction)
endif()
set_target_properties(CampusFriction PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS CampusFriction
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(CampusFriction)
endif()
