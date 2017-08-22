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


void imgNegative(const cv::Mat& inImg, cv::Mat& outImg) {
    outImg = cv::Mat( inImg.rows, inImg.cols, CV_8UC1 );
    for(int i = 0; i < outImg.rows; ++i)
        for(int j = 0; j < outImg.cols; ++j)
            outImg.at<uchar>(i,j) = 255 - inImg.at<uchar>(i,j);
}



int main( int argc, const char** argv )
{
//    std::cout << CV_VERSION << endl;
//    Mat image;
//    image = imread("a.png",CV_LOAD_IMAGE_COLOR);
//    cv::resize(image, image, cv::Size(0,0),0.2,0.2);
//    if(!image.data){
//        cout << "no image" << endl;
//        return -1;
//    }
//    namedWindow("Window",WINDOW_AUTOSIZE);
//    std::cout << image.size << endl;
////    imshow("Window", image);
//    //Vec3b b,g,r
//    for (int i = 0; i < image.rows; ++i) {
//        for (int j = 0; j < image.cols; ++j) {
//            if(i < image.rows/2 && j > image.cols/2){
//                image.at<cv::Vec3b>(i,j) = Vec3b(image.at<cv::Vec3b>(i,j)[1],0,0);
//            }
//            else if(i > image.rows/2 && j < image.cols/2){
//                image.at<cv::Vec3b>(i,j) = Vec3b(0,image.at<cv::Vec3b>(i,j)[1],0);
//            }
//            else if(i > image.rows/2 && j > image.cols/2){
//                image.at<cv::Vec3b>(i,j) = Vec3b(0,0,image.at<cv::Vec3b>(i,j)[1]);
//            }
//        }
//    }
//    imshow("Window", image);
//    waitKey(0);
    
//to grayscale
    
//        Mat image;
//        image = imread("a.png",CV_LOAD_IMAGE_COLOR);
//        cv::resize(image, image, cv::Size(0,0),0.2,0.2);
//        if(!image.data){
//            cout << "no image" << endl;
//            return -1;
//        }
//        namedWindow("Window",WINDOW_AUTOSIZE);
//        std::cout << image.size << endl;
//        //Vec3b b,g,r
//        Mat image2;
//        image2 = cv::Mat(cv::Size(image.cols,image.rows),CV_8U);
//        std::cout << image2.size << endl;
//        for (int i = 0; i < image.rows; ++i) {
//            for (int j = 0; j < image.cols; ++j) {
//                image2.at<uchar>(i,j) = ((int)(image.at<cv::Vec3b>(i,j)[0]*0.114)+(int)(image.at<cv::Vec3b>(i,j)[1]*0.587)+(int)(image.at<cv::Vec3b>(i,j)[2]*0.299))%255;
//            }
//        }
//    
//        imshow("Window", image2);
//        waitKey(0);
//    std::cout << CV_VERSION << endl;
    
// to negative
    
//    cv::Mat inImg = cv::imread("a.png", CV_LOAD_IMAGE_GRAYSCALE);
//    cv::resize(inImg, inImg, cv::Size(0,0),0.2,0.2);
//    cv::Mat negImg;
//    imgNegative( inImg, negImg );
//    cv::imshow("Input image", inImg);
//    cv::imshow("Processed image", negImg);
//    cv::waitKey();
//
//    
//    
//    
//    return 0;
}
