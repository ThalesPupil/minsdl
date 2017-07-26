cmake_minimum_required(VERSION 3.7)
project(minsdl)

find_package(SDL2 REQUIRED)

include_directories(minsdl ${SDL2_INCLUDE_DIRS})

add_executable(minsdl main.c)

target_link_libraries(minsdl ${SDL2_LIBRARIES})
