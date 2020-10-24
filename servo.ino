#include<Servo.h>
Servo servoIn, servoOut;

void setup() {
  // put your setup code here, to run once:
  servoIn.attach(5);
  servoIn.write(0);

}

void loop() {
  servoIn.write(90);
  delay(2000);
  servoIn.write(0);
  delay(5000);
  // put your main code here, to run repeatedly:

}
