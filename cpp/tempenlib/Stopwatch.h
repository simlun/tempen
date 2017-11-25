#ifndef TEMPEN_STOPWATCH_H
#define TEMPEN_STOPWATCH_H


class Stopwatch {
public:
    Stopwatch();
    void setMillisecondsSinceStart(int);
    int getMillisecondsSinceStart();
private:
    int millisecondsSinceStart;
};


#endif //TEMPEN_STOPWATCH_H
