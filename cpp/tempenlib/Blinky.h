#ifndef TEMPEN_BLINKY_H
#define TEMPEN_BLINKY_H


#include "ControlLoop.h"
#include "Stopwatch.h"
#include "Led.h"

class Blinky : public ControlLoop {
public:
    Blinky(Stopwatch *sw, Led *l);
    void body() override;
private:
    Stopwatch *stopwatch;
    Led *led;
    int lastStateChange;
    void flipLedState();
};


#endif //TEMPEN_BLINKY_H
