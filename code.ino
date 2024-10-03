#include <Servo.h>

Servo myServo;  // Create a Servo object

int angle = 0;  // Variable to store the current angle of the servo
int increment = 1;  // How much to change the angle each loop
int delayTime = 15;  // Delay between updates (ms)

void setup() {
  myServo.attach(9);  // Attach the servo to pin 9
}

void loop() {
  // Move the servo from 0 to 180 degrees
  for (angle = 0; angle <= 180; angle += increment) {
    myServo.write(angle);  // Set the servo position
    delay(delayTime);  // Wait for the servo to reach the position
  }

  // Move the servo from 180 back to 0 degrees
  for (angle = 180; angle >= 0; angle -= increment) {
    myServo.write(angle);  // Set the servo position
    delay(delayTime);  // Wait for the servo to reach the position
  }
}
