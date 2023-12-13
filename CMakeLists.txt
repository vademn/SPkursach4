cmake_minimum_required(VERSION 3.10)
project(SPkursach4)
set(SOURCES
   calculator.cpp
   compare.cpp
)

# Add compilation flags (warning messages)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")

add_library(Calculator ${SOURCES})

# Find and use Ninja
find_program(NINJA_EXECUTABLE ninja)
if(NOT NINJA_EXECUTABLE)
    message(STATUS "Ninja(in pyjamas) build tool not found. Using default generator.")
else()
    set(CMAKE_MAKE_PROGRAM ${NINJA_EXECUTABLE})
    message(STATUS "Using Ninja(in pyjamas) build tool.")
endif()

# Use CXX environment variable if set
if(DEFINED ENV{CXX})
    set(CMAKE_CXX_COMPILER $ENV{CXX})
else()
    set(CMAKE_CXX_COMPILER /usr/bin/g++)
  
endif()

