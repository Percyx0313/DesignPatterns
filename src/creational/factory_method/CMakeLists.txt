cmake_minimum_required(VERSION 3.20)

add_library(factory_method
    factory_method.cpp
)

target_include_directories(factory_method
    PUBLIC  
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(example)
