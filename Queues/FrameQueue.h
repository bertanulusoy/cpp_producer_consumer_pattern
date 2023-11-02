//
// Created by bertan on 2.11.2023.
//

#ifndef PRODUCERCONSUMERPATTERNBLOGPOST_FRAMEQUEUE_H
#define PRODUCERCONSUMERPATTERNBLOGPOST_FRAMEQUEUE_H

#include <mutex>
#include <condition_variable>
#include <queue>
#include "../DataTypes/Frame.h"

class FrameQueue
{
public:
    void enqueue(std::shared_ptr<Frame> frame);
    std::shared_ptr<Frame> dequeue();
private:
    std::mutex mtx;
    std::condition_variable cv;
    std::queue<std::shared_ptr<Frame>> queue;
};

#endif //PRODUCERCONSUMERPATTERNBLOGPOST_FRAMEQUEUE_H
