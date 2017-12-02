#ifndef TEMPEN_RECEIVER_H
#define TEMPEN_RECEIVER_H


class ReceiveHandler {
public:
    virtual void handle(char c) = 0;
};


class Receiver {
public:
    void setHandler(ReceiveHandler * h);
    virtual void receive() = 0;
protected:
    ReceiveHandler * handler = nullptr;
};


#endif //TEMPEN_RECEIVER_H
