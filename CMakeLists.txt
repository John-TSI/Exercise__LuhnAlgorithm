cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Luhn VERSION 1.0.0)

set(SRC_FILES src/main.cpp src/luhn.cpp)
add_executable(Luhn src/main.cpp ${SRC_FILES})

target_include_directories(Luhn PUBLIC inc)

