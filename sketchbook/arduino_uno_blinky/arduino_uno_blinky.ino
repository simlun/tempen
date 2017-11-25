#include <Led.h>
#include <Stopwatch.h>
#include <MicroController.h>
#include <Blinky.h>

class ArduinoStopwatch : public Stopwatch {
public:
  unsigned long getMillisecondsSinceStart() override {
    return millis();
  }
};

class ArduinoBuiltinLed : public Led {
public:
  ArduinoBuiltinLed() {
    pinMode(LED_BUILTIN, OUTPUT);
  }
  
  void enable() override {
    Led::enable();
    digitalWrite(LED_BUILTIN, HIGH);
  }

  void disable() override {
    Led::disable();
    digitalWrite(LED_BUILTIN, LOW);
  }
};

ArduinoStopwatch stopwatch;
ArduinoBuiltinLed led;
Blinky blinky(&stopwatch, &led);
MicroController mc(&blinky);

void setup() {}

void loop() {
  mc.tick();
}
