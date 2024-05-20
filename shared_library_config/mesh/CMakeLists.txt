cmake_minimum_required(VERSION 3.23)
project(mesh LANGUAGES CXX)

set(geo_DIR "../geo-install/lib/cmake/geo")
find_package(geo)
add_executable(app)
target_sources(app PRIVATE "app.cpp")
target_link_libraries(app PRIVATE geo::geo)
if(MSVC)
    get_target_property(geo_dll geo::geo IMPORTED_LOCATION_RELEASE)
    add_custom_command(TARGET app POST_BUILD 
        COMMAND "${CMAKE_COMMAND}" -E copy 
        ${geo_dll}
        ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG> )
endif()
