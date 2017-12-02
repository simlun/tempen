#include "RemoteLedController.h"

#include "RemoteLedProtocol.h"


RemoteLedController::RemoteLedController(Receiver * receiver, Led * led) : receiver(receiver), led(led) {}


void RemoteLedController::body() {
    receiver->receive();
}


void RemoteLedController::handle(char c) {
    if (c == RemoteLedProtocol::ENABLE)
        led->enable();
    else if (c == RemoteLedProtocol::DISABLE)
        led->disable();
}
