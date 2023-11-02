//
// Created by bertan on 2.11.2023.
//

#ifndef PRODUCERCONSUMERPATTERNBLOGPOST_TASK_H
#define PRODUCERCONSUMERPATTERNBLOGPOST_TASK_H

#include <memory>
#include "Frame.h"

class Task
{
    virtual void execute() = 0;
};

#endif //PRODUCERCONSUMERPATTERNBLOGPOST_TASK_H
