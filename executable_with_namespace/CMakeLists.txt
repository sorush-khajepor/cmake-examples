cmake_minimum_required(VERSION 3.20)
project(test01 LANGUAGES CXX)

# Necessary for shared library on Windows
#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(app)
target_sources(app PRIVATE "app.cpp")
target_compile_features(app PUBLIC cxx_std_20)
target_include_directories(app PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("shape")
add_subdirectory("square")
add_subdirectory("rectangle")

