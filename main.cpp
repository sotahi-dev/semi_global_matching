#include<iostream>
#include<opencv2/opencv.hpp>

int main(int argc, char* argv[])
{
    std::string img_L_path = "../resources/cones/left.png";
    std::string img_R_path = "../resources/cones/right.png";

    cv::Mat img_L = cv::imread(img_L_path, cv::IMREAD_UNCHANGED);
    cv::Mat img_R = cv::imread(img_R_path, cv::IMREAD_UNCHANGED);

    cv::imwrite("left.png", img_L);
    cv::imwrite("right.png", img_R);

    return 0;
}
