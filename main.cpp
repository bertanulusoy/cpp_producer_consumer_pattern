#include <iostream>

#include <opencv2/opencv.hpp>

int main() {

    cv::Mat image = cv::imread("test.jpg", cv::IMREAD_COLOR);

    return 0;
}
