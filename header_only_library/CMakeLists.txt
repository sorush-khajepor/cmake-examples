cmake_minimum_required(VERSION 3.23)
project(geometry LANGUAGES CXX)

add_library(geo INTERFACE)
target_sources(geo INTERFACE 
    FILE_SET HEADERS 
    BASE_DIRS ${PROJECT_SOURCE_DIR}
    FILES "geometry.h")
add_subdirectory("shape")
add_subdirectory("square")

add_executable(example1)
target_sources(example1 PRIVATE "examples/example1.cpp")
target_link_libraries(example1 PRIVATE geo)

install(TARGETS geo FILE_SET HEADERS)
