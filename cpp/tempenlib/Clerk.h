#ifndef TEMPEN_CLERK_H
#define TEMPEN_CLERK_H

#import "Task.h"


class Clerk {
public:
    void work();
    void giveTask(Task *);
private:
    Task * currentTask = nullptr;
};


#endif //TEMPEN_CLERK_H
