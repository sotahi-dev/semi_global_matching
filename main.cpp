#include<iostream>
#include<opencv2/opencv.hpp>
#include "modules/semi_global_matching.hpp"

int main(int argc, char* argv[])
{
    std::string img_L_path = "../resources/cones/left.png";
    std::string img_R_path = "../resources/cones/right.png";

    cv::Mat img_L = cv::imread(img_L_path, cv::IMREAD_UNCHANGED);
    cv::Mat img_R = cv::imread(img_R_path, cv::IMREAD_UNCHANGED);

    int p1 = 0;
    int p2 = 0;
    SGM sgm(p1, p2);

    sgm.set_images(img_L, img_R);

    cv::imwrite("left.png", img_L);
    cv::imwrite("right.png", img_R);

    return 0;
}
