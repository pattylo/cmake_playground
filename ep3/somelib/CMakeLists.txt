# practice 1 -> to /home/local
# cmake_minimum_required(VERSION 3.16.3)

# project(gan)
# add_library(gan gan.cpp)

# practice 2 -> to /usr/local/
cmake_minimum_required(VERSION 3.16.3)

project(gan)
add_library(gan gan.cpp)
set_target_properties(gan PROPERTIES PUBLIC_HEADER gan.h)
install(TARGETS gan LIBRARY DESTINATION lib 
        PUBLIC_HEADER DESTINATION include)


