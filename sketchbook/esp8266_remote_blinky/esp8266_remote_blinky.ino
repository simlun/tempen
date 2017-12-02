#include <Led.h>
#include <Receiver.h>
#include <RemoteLedController.h>
#include <MicroController.h>


class Esp8266BuiltinLed : public Led {
public:
  void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    disable();
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


class SerialReceiver : public Receiver {
public:
  void setup() {
    Serial.begin(115200);
    while (!Serial) {}
  }
  
  void receive() override {
    if (Serial.available() > 0) {
      char c = Serial.read();
      handler->handle(c);
    }
  }
};


Esp8266BuiltinLed led;
SerialReceiver receiver;
RemoteLedController controller(&receiver, &led);
MicroController mc(&controller);


void setup() {
  receiver.setup();
  led.setup();
  receiver.setHandler(&controller);
}


void loop() {
  mc.tick();
}
