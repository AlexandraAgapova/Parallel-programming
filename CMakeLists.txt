cmake_minimum_required(VERSION 3.10)
project(SinArray)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O2 -Wall")

option(USE_DOUBLE "Use double instead of float" OFF)

if(USE_DOUBLE)
	add_definitions(-DARRAY_TYPE=double)
	set(EXECUTABLE_NAME "sin_array_double")
else()
	add_definitions(-DARRAY_TYPE=float)
	set(EXECUTABLE_NAME "sin_array_float")
endif()

add_executable(${EXECUTABLE_NAME} main.cpp)
