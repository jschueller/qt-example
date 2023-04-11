cmake_minimum_required (VERSION 3.13)
set (CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the build type")
option(BUILD_SHARED_LIBS "shared/static" ON)
project (qtex CXX)

# Qt library
set (QTEX_QT_MAJOR_VERSION 5 CACHE STRING "Qt version")
find_package (Qt${QTEX_QT_MAJOR_VERSION} COMPONENTS Widgets Test CONFIG REQUIRED)
set (CMAKE_AUTOMOC ON)
set (CMAKE_CXX_STANDARD 11)


add_library(qtex MainWindow.hxx MainWindow.cxx)
target_link_libraries (qtex Qt${QTEX_QT_MAJOR_VERSION}::Widgets)
target_include_directories(qtex PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
install(TARGETS qtex DESTINATION lib)

# executable
add_executable (main main.cxx)
target_link_libraries (main qtex)
install(TARGETS main DESTINATION bin)

# test
add_executable (t_qtex t_qtex.cxx)
target_link_libraries (qtex Qt${QTEX_QT_MAJOR_VERSION}::Test)
target_link_libraries (t_qtex qtex)
install(TARGETS t_qtex DESTINATION bin)

enable_testing()
add_test (NAME qtex COMMAND t_qtex)
add_test (NAME qtex_xvfb COMMAND xvfb-run ${CMAKE_CROSSCOMPILING_EMULATOR} $<TARGET_FILE:t_qtex>)
