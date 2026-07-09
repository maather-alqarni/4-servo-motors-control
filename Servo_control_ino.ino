#include <Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;

void setup() {
  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
}

void loop() {

  for (int i = 0; i <= 180; i++) {
    s1.write(i);
    s2.write(i);
    s3.write(i);
    s4.write(i);
    delay(4);
  }

  for (int i = 180; i >= 0; i--) {
    s1.write(i);
    s2.write(i);
    s3.write(i);
    s4.write(i);
    delay(4);
  }

  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);

  while (true);
}