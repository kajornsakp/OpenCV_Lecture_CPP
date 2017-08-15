//
//  main.cpp
//  testCV
//
//  Created by Kajornsak Peerapathananont on 8/13/2560 BE.
//  Copyright © 2560 Kajornsak Peerapathananont. All rights reserved.
//

#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;
int main( int argc, const char** argv )
{
    std::cout << CV_VERSION << endl;
    Mat image;
    image = imread("a.png",CV_LOAD_IMAGE_COLOR);
    cv::resize(image, image, cv::Size(0,0),0.2,0.2);
    if(!image.data){
        cout << "no image" << endl;
        return -1;
    }
    namedWindow("Window",WINDOW_AUTOSIZE);
    std::cout << image.size << endl;
//    imshow("Window", image);
    //Vec3b b,g,r
    for (int i = 0; i < image.rows; ++i) {
        for (int j = 0; j < image.cols; ++j) {
            if(i < image.rows/2 && j > image.cols/2){
                image.at<cv::Vec3b>(i,j) = Vec3b(image.at<cv::Vec3b>(i,j)[1],0,0);
            }
            else if(i > image.rows/2 && j < image.cols/2){
                image.at<cv::Vec3b>(i,j) = Vec3b(0,image.at<cv::Vec3b>(i,j)[1],0);
            }
            else if(i > image.rows/2 && j > image.cols/2){
                image.at<cv::Vec3b>(i,j) = Vec3b(0,0,image.at<cv::Vec3b>(i,j)[1]);
            }
        }
    }
    imshow("Window", image);
    waitKey(0);
    return 0;
}
