#include <Sender.h>
#include <RemoteLed.h>
#include <Stopwatch.h>
#include <MicroController.h>
#include <Blinky.h>


class ArduinoStopwatch : public Stopwatch {
public:
  unsigned long getMillisecondsSinceStart() override {
    return millis();
  }
};


class ArduinoSerialSender : public Sender {
public:
  void setup() {
    Serial.begin(115200);
    while (!Serial) {}
  }
  void send(char c) override {
    Serial.write(c);
    Serial.flush();
  }
};


ArduinoStopwatch stopwatch;
ArduinoSerialSender sender;
RemoteLed remoteLed(&sender);
Blinky blinky(&stopwatch, &remoteLed);
MicroController mc(&blinky);


void setup() {
  sender.setup();
}


void loop() {
  mc.tick();
}

