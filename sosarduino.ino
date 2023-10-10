
#include <Servo.h>

Servo myServo;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  myServo.attach(11,1000,2000);
  myServo.write(90);

}

void blinkOnce(int time){
  digitalWrite(LED_BUILTIN, HIGH);
  myServo.write(0);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  myServo.write(180);
  delay(time);
  
}

void blinkSOS() {
  blinkOnce(700);
  blinkOnce(700);
  blinkOnce(700);
  blinkOnce(300);
  blinkOnce(300);
  blinkOnce(300);
  blinkOnce(700);
  blinkOnce(700);
  blinkOnce(700);
}

void loop() {
  blinkSOS();
}

