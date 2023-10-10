
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}

void blinkOnce(int time){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(time);
}

void loop() {
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

