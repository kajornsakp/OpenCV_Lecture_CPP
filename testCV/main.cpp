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
    image = imread("<#image path#>",CV_LOAD_IMAGE_COLOR);
    if(!image.data){
        cout << "no image" << endl;
        return -1;
    }
    namedWindow("Window",WINDOW_AUTOSIZE);
    imshow("Window", image);
    waitKey(0);
    return 0;
}
