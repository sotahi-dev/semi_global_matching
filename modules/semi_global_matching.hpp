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
        
        cv::Mat getDisp();
        
        void setImages(cv::Mat &left, cv::Mat &right);
        cv::Mat transCensus(cv::Mat &img); 
        cv::Mat calcDisparity(cv::Mat &img_l, cv::Mat &img_r);
};