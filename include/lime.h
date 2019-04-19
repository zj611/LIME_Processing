//
// Created by zj on 19-4-18.
//

#ifndef FEATURE_EXACTION_LIME_H
#define FEATURE_EXACTION_LIME_H
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
namespace feature
{
class lime
 {
public:
     int channel;
     cv::Mat out_lime;


public:
    lime(cv::Mat src);
    cv::Mat lime_enhance(cv::Mat& src);

    static inline float compare(float& a,float& b,float& c)
    {
        return fmax(a,fmax(b,c));
    }
    void Illumination(cv::Mat& src,cv::Mat& out);

    void Illumination_filter(cv::Mat& img_in,cv::Mat& img_out);

};

}

#endif //FEATURE_EXACTION_LIME_H
