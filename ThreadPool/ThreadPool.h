//
// Created by bertan on 2.11.2023.
//

#ifndef PRODUCERCONSUMERPATTERNBLOGPOST_THREADPOOL_H
#define PRODUCERCONSUMERPATTERNBLOGPOST_THREADPOOL_H

#include "WorkerThread.h"
#include "../Queues/TaskQueue.h"

class ThreadPool
{
public:
    explicit ThreadPool(size_t numThreads);
    void addTask(std::shared_ptr<Task> task);
private:
    std::vector<std::unique_ptr<WorkerThread>> workers;
    TaskQueue taskQueue;
};

#endif //PRODUCERCONSUMERPATTERNBLOGPOST_THREADPOOL_H
