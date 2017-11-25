#include <Led.h>
#include <Stopwatch.h>
#include <MicroController.h>
#include <Blinky.h>

class Esp8266Stopwatch : public Stopwatch {
public:
  unsigned long getMillisecondsSinceStart() override {
    return millis();
  }
};

class Esp8266BuiltinLed : public Led {
public:
  Esp8266BuiltinLed() {
    pinMode(LED_BUILTIN, OUTPUT);
  }
  
  void enable() override {
    Led::enable();
    digitalWrite(LED_BUILTIN, LOW);
  }

  void disable() override {
    Led::disable();
    digitalWrite(LED_BUILTIN, HIGH);
  }
};

Esp8266Stopwatch stopwatch;
Esp8266BuiltinLed led;
Blinky blinky(&stopwatch, &led);
MicroController mc(&blinky);

void setup() {}

void loop() {
  mc.tick();
}
