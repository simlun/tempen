#ifndef TEMPEN_REMOTELEDCONTROLLER_H
#define TEMPEN_REMOTELEDCONTROLLER_H

#include "ControlLoop.h"
#include "Receiver.h"
#include "Led.h"


class RemoteLedController : public ControlLoop, public ReceiveHandler {
public:
    RemoteLedController(Receiver * receiver, Led * led);
    void body() override;
    void handle(char c) override;
private:
    Receiver * receiver;
    Led * led;
};


#endif //TEMPEN_REMOTELEDCONTROLLER_H
