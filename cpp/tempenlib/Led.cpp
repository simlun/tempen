#include "Led.h"

bool Led::isGlowing() {
    return state;
}

void Led::enable() {
    state = true;
}

void Led::disable() {
    state = false;
}