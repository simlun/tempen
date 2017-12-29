#include "Clerk.h"


void Clerk::work() {
    if (currentTask != nullptr) {
        Task * nextTask = currentTask->work();
        giveTask(nextTask);
    }
}

void Clerk::giveTask(Task *task) {
    currentTask = task;
}

void Clerk::body() {
    work();
}