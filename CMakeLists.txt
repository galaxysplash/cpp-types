cmake_minimum_required(VERSION 3.28)
project(defs)

set(CMAKE_INCLUDE_PATH include)

include_directories(${CMAKE_INCLUDE_PATH})

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES src/*.cpp)
add_library(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_INCLUDE_PATH})