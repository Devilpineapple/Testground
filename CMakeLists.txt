cmake_minimum_required(VERSION 3.31)
project(Testground VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 23)

find_package(raylib CONFIG REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
