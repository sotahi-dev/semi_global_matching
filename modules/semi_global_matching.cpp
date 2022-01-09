// #include "semi_global_matching.hpp"
#include "semi_global_matching.hpp"

SGM::SGM(int p_1, int p_2)
{
    p1 = p_1;
    p2 = p_2;

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
}

cv::Mat SGM::getDisp()
{
    return disp;
}

void SGM::setImages(cv::Mat &left, cv::Mat &right)
{
    img_L = left;
    img_R = right;
}

cv::Mat SGM::transCensus(cv::Mat &img)
{
    return img;
}

cv::Mat SGM::calcDisparity(cv::Mat &img_l, cv::Mat &img_r)
{
    cv::Mat img_l_census = transCensus(img_l);
    cv::Mat img_r_census = transCensus(img_r); 

    return img_l;
}

SGM::~SGM()
{
}