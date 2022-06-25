cmake_minimum_required(VERSION 3.22.1)

project(LibraryExampleWCMake CXX)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(libs)

target_include_directories(${PROJECT_NAME} PUBLIC libs/LibraryOne libs/LibraryTwo)

target_link_libraries(${PROJECT_NAME} ExClassLib ExFuncsLib)