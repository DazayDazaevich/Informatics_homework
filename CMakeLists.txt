cmake_minimum_required(VERSION 3.10)

# set(CMAKE_C_COMPILER gcc)
# set(CMAKE_CXX_COMPILER g++)

project(TrigonometricProject)

message(STATUS "Project source directory: ${CMAKE_SOURCE_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

include_directories(include/)

add_executable(Trigonometric 
    main.cpp 
    src/ans_handler.cpp 
    src/my_math.cpp

)
