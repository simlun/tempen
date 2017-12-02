#include "Blinky.h"


Blinky::Blinky(Stopwatch *sw, Led *l) {
    stopwatch = sw;
    led = l;
    lastStateChange = sw->getMillisecondsSinceStart();
}


void Blinky::body() {
    unsigned long now = stopwatch->getMillisecondsSinceStart();
    unsigned long diff = now - lastStateChange;
    if (diff >= 1000) {
        flipLedState();
        lastStateChange = now;
    }
}


void Blinky::flipLedState() {
    if (led->isGlowing())
        led->disable();
    else
        led->enable();
}
