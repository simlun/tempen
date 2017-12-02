#ifndef TEMPEN_REMOTELED_H
#define TEMPEN_REMOTELED_H

#include "Led.h"
#include "Sender.h"


class RemoteLed : public Led {
public:
    explicit RemoteLed(Sender * sender) : sender(sender) {}
    void enable() override;
    void disable() override;
private:
    Sender * sender;
};


#endif //TEMPEN_REMOTELED_H
