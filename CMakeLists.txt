cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_COMPILER g++)

project(main LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(MAIN_SOURCES main.cpp)
set(LIB_SOURCES lib.cpp)

add_library(my_lib STATIC ${LIB_SOURCES})
add_executable(main ${MAIN_SOURCES})

target_link_libraries(main PRIVATE my_lib)
target_include_directories(my_lib PUBLIC include)