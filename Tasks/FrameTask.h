//
// Created by bertan on 2.11.2023.
//

#ifndef PRODUCERCONSUMERPATTERNBLOGPOST_FRAMETASK_H
#define PRODUCERCONSUMERPATTERNBLOGPOST_FRAMETASK_H

#include "../DataTypes/Task.h"
#include "../DataTypes/Frame.h"

class FrameTask : public Task
{
public:
    FrameTask(std::shared_ptr<Frame> frame_) : frame(frame_) {}
    void execute() override; // Implement frame processing logic

private:
    std::shared_ptr<Frame> frame;
};

#endif //PRODUCERCONSUMERPATTERNBLOGPOST_FRAMETASK_H
