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

ArduinoStopwatch stopwatch;
Led led;
Blinky blinky(&stopwatch, &led);

MicroController mc(&blinky);

void setup() {
  Serial.begin(115200);
}

void loop() {
  mc.tick();
  Serial.print("LED status: ");
  Serial.println(led.isGlowing());
  delay(100);
}
