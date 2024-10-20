/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#define btn_top 2
#define btn_bottom 3
#define magnet_sw 4
#define servo_sw 5
#define servo 9

#include <Servo.h>

Servo myservo;

void setup() {
  pinMode(btn_bottom, INPUT);
  pinMode(btn_top, INPUT);
  pinMode(magnet_sw, OUTPUT);
  pinMode(servo_sw, OUTPUT);

  myservo.attach(servo);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  //just leave the servo on
  digitalWrite(servo_sw, HIGH);

  if (digitalRead(btn_top) == HIGH) {
    myservo.write(150);
  } else {
    myservo.write(30);
  }

  if (digitalRead(btn_bottom) == HIGH) {
    digitalWrite(magnet_sw, HIGH);
  } else {
    digitalWrite(magnet_sw, LOW);
  }
}
