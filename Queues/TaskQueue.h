//
// Created by bertan on 2.11.2023.
//

#ifndef PRODUCERCONSUMERPATTERNBLOGPOST_TASKQUEUE_H
#define PRODUCERCONSUMERPATTERNBLOGPOST_TASKQUEUE_H

#include <memory>
#include <mutex>
#include <condition_variable>
#include <queue>
#include "../DataTypes/Task.h"

class TaskQueue
{
public:
    void enqueue(std::shared_ptr<Task> task);
    std::shared_ptr<Task> dequeue();

private:
    std::mutex mtx;
    std::condition_variable task_queued_cv;
    std::queue<std::shared_ptr<Task>> tasks_queue;
};

#endif //PRODUCERCONSUMERPATTERNBLOGPOST_TASKQUEUE_H
