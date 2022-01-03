#!/bin/sh

# download cones of Middleberry
if [ ! -e ../resources ]; then
    echo "nothig dir. create resource dir"
    mkdir ../resources
fi

cd ../resources

if [ ! -e cones-png-2.zip ]; then 
    echo "download cones"
    wget https://vision.middlebury.edu/stereo/data/scenes2003/newdata/cones/cones-png-2.zip
fi

if [ ! -e cones/ ]; then
    echo "unzip images"
    unzip cones-png-2.zip
fi

# rename images 
if [ -e cones/im2.png ] && [ -e cones/im6.png ]; then
    mv cones/im2.png cones/left.png
    mv cones/im6.png cones/right.png
fi