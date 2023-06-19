cmake_minimum_required(VERSION 3.15)
project(mwe_cmake_standard C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

add_executable(mwe_cmake_standard main.c)
target_compile_options(mwe_cmake_standard PRIVATE -Wall -Wextra -Wpedantic)
