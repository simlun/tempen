#ifndef TEMPEN_TASK_H
#define TEMPEN_TASK_H


class Task {
public:
    Task * work();
    Task * setNext(Task *);

protected:
    virtual void doWork() = 0;

private:
    Task * nextTask = nullptr;
};


#endif //TEMPEN_TASK_H
