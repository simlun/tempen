#include "Task.h"


Task * Task::work() {
    doWork();
    return nextTask;
}


Task * Task::setNext(Task * task) {
    nextTask = task;
    return nextTask;
}
