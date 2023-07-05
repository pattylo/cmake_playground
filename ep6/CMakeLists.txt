cmake_minimum_required(VERSION 3.16.3)
project(HAHA VERSION 1.0)

option(USER_ADDER "THE wtf LIB" ON)
if(USER_ADDER)
    add_subdirectory(wtf)

    list(APPEND EXTRA_LIBS wtf)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/wtf")
    list(APPEND EXTRA_links wtf)

    message(${EXTRA_INCLUDES})
    message(${EXTRA_LIBS}) 
    message(${EXTRA_links}) 
endif()

configure_file(haha.h.in haha.h)

add_executable(haha 
    main.cpp)

target_include_directories(
    haha PUBLIC
    ${EXTRA_INCLUDES}
    ${PROJECT_BINARY_DIR}
)

target_link_directories(
    haha PUBLIC
    ${EXTRA_LIBS}
)


target_link_libraries(
    haha
    ${EXTRA_links}
)

install(TARGETS haha DESTINATION bin)
install(FILES ${PROJECT_BINARY_DIR}/haha.h DESTINATION include)