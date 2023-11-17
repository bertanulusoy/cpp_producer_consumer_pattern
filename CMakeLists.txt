cmake_minimum_required(VERSION 3.26)
project(ProducerConsumerPatternBlogPost)

set(CMAKE_CXX_STANDARD 17)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Include directories
include_directories(${OpenCV_INCLUDE_DIRS})

# Add executable
add_executable(${PROJECT_NAME} main.cpp
        Queues/FrameQueue.cpp
        Queues/FrameQueue.h
        DataTypes/Frame.cpp
        DataTypes/Frame.h
        Queues/TaskQueue.cpp
        Queues/TaskQueue.h
        DataTypes/Task.cpp
        DataTypes/Task.h
        Tasks/FrameTask.cpp
        Tasks/FrameTask.h
        ThreadPool/ThreadPool.cpp
        ThreadPool/ThreadPool.h
        ThreadPool/WorkerThread.cpp
        ThreadPool/WorkerThread.h)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
