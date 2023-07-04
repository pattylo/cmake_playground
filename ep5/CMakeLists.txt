cmake_minimum_required(VERSION 3.16.3)
project(HAHA VERSION 1.0)

option(USER_ADDER "THE GAN LIB" ON)
if(USER_ADDER)
    add_subdirectory(gan)

    list(APPEND EXTRA_LIBS gan)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/gan")
    list(APPEND EXTRA_links gan)

    message(${EXTRA_INCLUDES})
    message(${EXTRA_LIBS}) 
    message(${EXTRA_links}) 
endif()

configure_file(haha.h.in haha.h)

add_executable(just 
    main.cpp)

target_include_directories(
    just PUBLIC
    ${EXTRA_INCLUDES}
    ${PROJECT_BINARY_DIR}
)

target_link_directories(
    just PUBLIC
    ${EXTRA_LIBS}
)


target_link_libraries(
    just
    ${EXTRA_links}
)
