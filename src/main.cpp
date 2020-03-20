#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include "../include/hello.h"

using namespace cv;

int main()
{
    print();

    printf("Hello lena.\n");
    Mat img = imread("../img/lena.jpg");
    imshow("image", img);
    waitKey();

    return 0;
}