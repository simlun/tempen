#include "MicroController.h"


MicroController::MicroController(ControlLoop *l) {
    loop = l;
}


void MicroController::tick() {
    loop->body();
}
