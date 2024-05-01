cmake_minimum_required(VERSION 3.10)

project(meuprojeto)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(calc SHARED src/calc.cpp)

set_target_properties(calc PROPERTIES OUTPUT_NAME "calc")

add_executable(main src/teste.cpp)

target_link_libraries(main calc)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
