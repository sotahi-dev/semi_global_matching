#pragma once
#include<iostream>
#include<opencv2/opencv.hpp>

class SGM
{
    private:
        cv::Mat img_L;
        cv::Mat img_R;
        cv::Mat disp;

        int p1;
        int p2;
    
    public:
        SGM(int p_1, int p_2);
        ~SGM();
        
        cv::Mat get_disp();
        
        void set_images(cv::Mat &left, cv::Mat &right);
        void census_transform(cv::Mat &img, cv::Mat &census_img); 
};