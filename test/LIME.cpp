#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <lime.h>

int main()
{
    cv::Mat img_in = cv::imread("../test/data/3.png"),img_out;

    //cv::cvtColor(img_in, img_in, cv::COLOR_BGR2GRAY);
    //std::cout<<"img_in channels = "<<img_in.channels()<<std::endl;
    //std::cout<<"img_in channels = "<<img_in.at<cv::Vec<uchar,1>>(3,1)<<std::endl;

    if(img_in.empty())
    {
        std::cout<<"Error Input!"<<std::endl;
        return -1;
    }

    feature::lime* l;
    l = new feature::lime(img_in);
    img_out = l->lime_enhance(img_in);

    cvNamedWindow("raw_picture",CV_WINDOW_NORMAL);
    cvNamedWindow("img_lime",CV_WINDOW_NORMAL);
    imshow("raw_picture",img_in);
    imshow("img_lime",img_out);

    cv::waitKey(0);

    cv::imwrite("../test/data/3_lime.png",img_out);

    return 0;
}


