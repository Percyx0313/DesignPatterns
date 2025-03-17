add_executable(factory_method_example
    main.cpp
)

target_link_libraries(factory_method_example
    PRIVATE
    factory_method
)