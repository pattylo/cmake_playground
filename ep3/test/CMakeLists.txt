# practice 1 -> to /home/local
# cmake_minimum_required(VERSION 3.16.3)
# project(testhaha)


# add_executable(just 
#     main.cpp)
# target_link_directories(just PRIVATE ${CMAKE_SOURCE_DIR}/../somelib/build/)

# target_link_libraries(just 
#     gan)

# practice 2 -> to /usr/local/
cmake_minimum_required(VERSION 3.16.3)
project(testhaha)

add_executable(just 
    main.cpp)

## DOWNLOAD SUBMODULES 
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# Update submodules as needed
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if(GIT_SUBMODULE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    endif()
endif()

## CHECK SUBMODULES
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/extern/repo/CMakeLists.txt")
    message(FATAL_ERROR "The submodules were not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()

add_subdirectory(
    third_party/glfw
)

target_include_directories(just
    PUBLIC third_party/glfw
)

target_link_directories(just
    PRIVATE third_party/glfw
)

target_link_libraries(just 
    gan
    glfw
)
