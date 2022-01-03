// #include "semi_global_matching.hpp"
#include "semi_global_matching.hpp"

SGM::SGM(int p_1, int p_2)
{
    p1 = p_1;
    p2 = p_2;

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
}

cv::Mat SGM::get_disp()
{
    return disp;
}

void SGM::set_images(cv::Mat& left, cv::Mat& right)
{
    img_L = left;
    img_R = right;
}

SGM::~SGM()
{
}