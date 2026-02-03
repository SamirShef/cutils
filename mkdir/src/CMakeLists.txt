cmake_minimum_required(VERSION 3.10)
project(mkdir LANGUAGES C)

file(GLOB_RECURSE SOURCES "./*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME}
                           PRIVATE "../include/")
