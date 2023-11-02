cmake_minimum_required(VERSION 3.26)
project(ProducerConsumerPatternBlogPost)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProducerConsumerPatternBlogPost main.cpp
        FrameQueue.cpp
        FrameQueue.h)
