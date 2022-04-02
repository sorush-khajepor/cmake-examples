cmake_minimum_required(VERSION 3.20)
project(geometries LANGUAGES CXX)

add_executable(app)
target_sources(app PRIVATE "app.cpp")
target_include_directories(app PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("shape")
add_subdirectory("square")
install(TARGETS app)


