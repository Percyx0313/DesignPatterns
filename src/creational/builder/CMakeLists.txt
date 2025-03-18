cmake_minimum_required(VERSION 3.20)

add_library(builder
    builder.cpp
)

target_include_directories(builder
    PUBLIC  
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(example)