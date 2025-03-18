add_executable(builder_example
    main.cpp
)

target_link_libraries(builder_example
    PRIVATE
    builder
)