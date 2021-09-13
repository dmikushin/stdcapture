cmake_minimum_required(VERSION 3.1)

project(stdcapture)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(${PROJECT_NAME} INTERFACE include/stdcapture/stdcapture.h)
target_include_directories(${PROJECT_NAME} INTERFACE include)

add_executable(test_${PROJECT_NAME} src/test/test_stdcapture.cpp)
target_link_libraries(test_${PROJECT_NAME} ${PROJECT_NAME})

