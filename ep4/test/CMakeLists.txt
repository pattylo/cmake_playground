cmake_minimum_required(VERSION 3.16.3)
project(FUCK VERSION 1.0)

configure_file(fuck.h.in fuck.h)

add_executable(just 
    main.cpp)

target_include_directories(
    just PUBLIC ${PROJECT_BINARY_DIR}
)

target_link_libraries(just 
    gan)
