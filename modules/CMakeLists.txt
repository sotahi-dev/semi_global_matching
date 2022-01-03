# cmake version 
cmake_minimum_required(VERSION 2.8)


find_package(OpenCV REQUIRED)
# set opencv include path 
include_directories(${OpenCV_INCLUDE_DIRS})

# create static library
add_library(sgm STATIC
            semi_global_matching.cpp)
