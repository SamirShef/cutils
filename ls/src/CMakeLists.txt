cmake_minimum_required(VERSION 3.10)
project(ls LANGUAGES C)

file(GLOB_RECURSE SOURCES "./*.c")

message(${SOURCES})

add_executable(${PROJECT_NAME} ${SOURCES})
