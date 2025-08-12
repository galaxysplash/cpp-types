cmake_minimum_required(VERSION 3.28)
project(cpp-types)

set(CMAKE_INCLUDE_PATH include)

include_directories(${CMAKE_INCLUDE_PATH})

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES lib/*.cpp src/*.cpp)
add_library(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_INCLUDE_PATH})
