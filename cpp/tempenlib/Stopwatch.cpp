#include "Stopwatch.h"


Stopwatch::Stopwatch() {
    millisecondsSinceStart = 0;
}

void Stopwatch::setMillisecondsSinceStart(int ms) {
    millisecondsSinceStart = ms;
}

int Stopwatch::getMillisecondsSinceStart() {
    return millisecondsSinceStart;
}