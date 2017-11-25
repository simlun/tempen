#include "Blinky.h"

Blinky::Blinky(Stopwatch *sw, Led *l) {
    stopwatch = sw;
    led = l;
    lastStateChange = sw->getMillisecondsSinceStart();
}

void Blinky::body() {
    int now = stopwatch->getMillisecondsSinceStart();
    if (now - lastStateChange >= 1000) {
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
