cmake_minimum_required(VERSION 3.10)

# Project name
project(MyCPPProject VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(MyCPPExecutable
    main.cpp
    # add other .cpp files here
)
