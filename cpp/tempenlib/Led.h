#ifndef TEMPEN_LED_H
#define TEMPEN_LED_H


class Led {
public:
    bool isGlowing();

    void enable();

    void disable();

private:
    bool state;
};


#endif //TEMPEN_LED_H