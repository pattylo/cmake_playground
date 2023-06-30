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

target_link_libraries(just 
    gan)
