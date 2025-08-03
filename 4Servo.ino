#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

unsigned long startTime;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);

  startTime = millis();  // Start timer
}

void loop() {
  unsigned long currentTime = millis();
  
  // Run sweep for 2 seconds
  if (currentTime - startTime <= 2000) {
    for (int pos = 0; pos <= 180; pos += 1) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(5);
    }
    for (int pos = 180; pos >= 0; pos -= 1) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(5);
    }
  } else {
    // Hold all at 90 degrees
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    while (true);  // Freeze position
  }
}
