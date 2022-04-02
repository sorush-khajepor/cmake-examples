target_sources( geo
    PRIVATE square.cpp info.h
    PUBLIC FILE_SET HEADERS 
    BASE_DIRS ${PROJECT_SOURCE_DIR}
    FILES square.h)
