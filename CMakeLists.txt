# cmake version 
cmake_minimum_required(VERSION 2.8)

# specify project name and language
project(test_sgm CXX)

find_package(OpenCV REQUIRED)
# setting opencv
if(OpenCV_FOUND)
    # set opencv include path 
    include_directories(${OpenCV_INCLUDE_DIRS})
    # include_directories(src)

    # create executed file 
    # add_executable(sgm main.cpp src/semi_global_matching.hpp)
    add_executable(sgm main.cpp)


    
    # set target link library 
    target_link_libraries(sgm ${OpenCV_LIBS})

endif(OpenCV_FOUND)
