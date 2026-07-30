cmake_minimum_required(VERSION 3.10)

project(Practice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Practice
    src/main.cpp
    src/functions.cpp
)

target_include_directories(Practice PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)