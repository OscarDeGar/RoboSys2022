int motorPin = 3;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH); // sets the digital pin 13 on
  delay(10000);            // waits for a second
  digitalWrite(motorPin, LOW);  // sets the digital pin 13 off
  delay(1000);            // waits for a second
}
