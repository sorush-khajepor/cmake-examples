cmake_minimum_required(VERSION 3.20)
project(geometry LANGUAGES CXX)

add_executable(app)
target_sources(app PRIVATE app.cpp shape.cpp shape.h)
install(TARGETS app)

