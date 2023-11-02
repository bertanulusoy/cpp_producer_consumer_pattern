//
// Created by bertan on 2.11.2023.
//

#ifndef PRODUCERCONSUMERPATTERNBLOGPOST_FRAME_H
#define PRODUCERCONSUMERPATTERNBLOGPOST_FRAME_H

#include <opencv2/opencv.hpp>
#include <utility>

class Frame
{
public:
    // Default constructor
    Frame();

    // Constructor that initializes the frame with data
    explicit Frame(cv::Mat  img) : data(std::move(img)) {}

    // Getter for the image data
    [[nodiscard]] const cv::Mat& getData() const { return data; }

    // Setter for the image data
    void setData(const cv::Mat& data);
public:
    cv::Mat data;
};


#endif //PRODUCERCONSUMERPATTERNBLOGPOST_FRAME_H
