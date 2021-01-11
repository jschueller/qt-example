cmake_minimum_required (VERSION 3.2)
set (CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the build type")
project (qtex CXX)

# Qt library
find_package (Qt5Widgets)
set (CMAKE_AUTOMOC ON)
set (CMAKE_CXX_STANDARD 11)

# executable
add_executable (qtex main.cxx)
qt5_use_modules (qtex Widgets)
target_link_libraries (qtex ${QT_LIBRARIES})

enable_testing()
add_test (NAME qtex COMMAND xvfb-run ${CMAKE_CROSSCOMPILING_EMULATOR} $<TARGET_FILE:qtex> ${MAIN_ARGS})
