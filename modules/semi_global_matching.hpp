#pragma once
#include<iostream>
#include<opencv2/opencv.hpp>

class SGM
{
    private:
        cv::Mat img_L;
        cv::Mat img_R;
        cv::Mat disp;
    
    public:
        cv::Mat get_disp();
        void set_images(cv::Mat left, cv::Mat right);
    
};