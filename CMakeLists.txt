cmake_minimum_required(VERSION 3.1)

project(stdcapture)

add_library(${PROJECT_NAME} SHARED src/stdcapture.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)

add_executable(test_${PROJECT_NAME} src/test/test_stdcapture.cpp)
target_link_libraries(test_${PROJECT_NAME} ${PROJECT_NAME})

