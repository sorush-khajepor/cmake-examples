cmake_minimum_required(VERSION 3.23)
project(geometry LANGUAGES CXX VERSION 5.4.3)

if (MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(geo SHARED)
target_include_directories(geo PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("shape")
add_subdirectory("square")

install(TARGETS geo 
    EXPORT geoTargets
    FILE_SET HEADERS
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include)

set(INCLUDE_INSTALL_DIR include/)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "geoConfigVersion.cmake"
    VERSION ${geo_VERSION}
    COMPATIBILITY AnyNewerVersion)

install(EXPORT geoTargets
    FILE geoTargets.cmake
    NAMESPACE geo::
    DESTINATION lib/cmake/geo)

install(FILES "geoConfig.cmake" "${CMAKE_CURRENT_BINARY_DIR}/geoConfigVersion.cmake"
    DESTINATION lib/cmake/geo)