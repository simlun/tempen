#include "RemoteLed.h"
#include "RemoteLedProtocol.h"

void RemoteLed::enable() {
    Led::enable();
    sender->send(RemoteLedProtocol::ENABLE);
};

void RemoteLed::disable() {
    Led::disable();
    sender->send(RemoteLedProtocol::DISABLE);
};
