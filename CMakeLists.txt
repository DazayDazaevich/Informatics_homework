cmake_minimum_required(VERSION 3.20)
project(ascii-tetris LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)


find_package(Curses REQUIRED)

set(SOURCES
    main.c
    tetris.c
)

add_executable(tetris ${SOURCES})

target_include_directories(tetris PRIVATE .)
target_compile_definitions(tetris PRIVATE _GNU_SOURCE)
target_link_libraries(tetris PRIVATE ${CURSES_LIBRARIES})
