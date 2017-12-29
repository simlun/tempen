#ifndef TEMPEN_CLERK_H
#define TEMPEN_CLERK_H

#include "Task.h"
#include "ControlLoop.h"


class Clerk : public ControlLoop {
public:
    void work();
    void giveTask(Task *);

    // ControlLoop:
    void body();
private:
    Task * currentTask = nullptr;
};


#endif //TEMPEN_CLERK_H
