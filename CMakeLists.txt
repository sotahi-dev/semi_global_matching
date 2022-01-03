# cmake version 
cmake_minimum_required(VERSION 2.8)

# specify project name and language
project(test_sgm CXX)

# set subdirectory
add_subdirectory(modules)

find_package(OpenCV REQUIRED)


# setting opencv
if(OpenCV_FOUND)
    # set opencv include path 
    include_directories(${OpenCV_INCLUDE_DIRS})
    # include_directories(src)

    # create executed file 
    add_executable(test_sgm main.cpp)
    # add_executable(sgm main.cpp)

    # target_include_directories(test_sgm PRIVATE
    #   modules
    # )    
    # set target link library 
    target_link_libraries(test_sgm ${OpenCV_LIBS} sgm)

endif(OpenCV_FOUND)
