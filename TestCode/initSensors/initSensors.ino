// LIST OF ALL SENSORS WILL UPDATE LATER ON
int encoderPin = A0;   // encoderPin
// int photoPin = 13;   `// photoResistor pin
int sensorValue = 0;  // stores encoder value


void setup() {
  // declare the photoPin as an OUTPUT:
//  pinMode(photoPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(encoderPin);
//  // turn the ledPin on
//  digitalWrite(ledPin, HIGH);
//  // stop the program for <sensorValue> milliseconds:
//  delay(sensorValue);
//  // turn the ledPin off:
//  digitalWrite(ledPin, LOW);
//  // stop the program for for <sensorValue> milliseconds:
//  delay(sensorValue);
}
