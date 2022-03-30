cmake_minimum_required(VERSION 3.23)
project(geometry LANGUAGES CXX)

#Necessary for shared library on Windows
if (MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(geo SHARED)
target_include_directories(geo PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("shape")
add_subdirectory("square")

add_executable(app)
target_sources(app PRIVATE "example/app.cpp")
target_link_libraries(app PRIVATE geo)

install(TARGETS geo FILE_SET HEADERS)
