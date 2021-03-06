#ifndef TEMPEN_MICROCONTROLLER_H
#define TEMPEN_MICROCONTROLLER_H

#include <ControlLoop.h>


class MicroController {
public:
    explicit MicroController(ControlLoop *l);
    void tick();
private:
    ControlLoop *loop;
};


#endif //TEMPEN_MICROCONTROLLER_H
