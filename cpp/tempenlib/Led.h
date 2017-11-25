#ifndef TEMPEN_LED_H
#define TEMPEN_LED_H


class Led {
public:
    bool isGlowing();

    virtual void enable();

    virtual void disable();

private:
    bool state = false;
};


#endif //TEMPEN_LED_H