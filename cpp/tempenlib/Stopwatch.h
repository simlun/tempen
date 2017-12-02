#ifndef TEMPEN_STOPWATCH_H
#define TEMPEN_STOPWATCH_H


class Stopwatch {
public:
    virtual unsigned long getMillisecondsSinceStart() = 0;
};


#endif //TEMPEN_STOPWATCH_H
