cmake_minimum_required(VERSION 3.1)

project(stdcapture)

add_library(${PROJECT_NAME} SHARED src/stdcapture.h)
target_include_directories(${PROJECT_NAME} include/stdcapture/stdcapture.h)

add_executable(test_${PROJECT_NAME} src/test/test_stdcapture.cpp)
target_link_libraries(${PROJECT_NAME} test_${PROJECT_NAME})

