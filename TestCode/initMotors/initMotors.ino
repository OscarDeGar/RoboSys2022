int motor1 = 2;
int motor2 = 3;
int motor3 = 4;
int motor4 = 5;
int motor5 = 6;
int motor6 = 7;

void setup() {
//  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
//  pinMode(motor3, OUTPUT);
//  pinMode(motor4, OUTPUT);
//  pinMode(motor5, OUTPUT);
//  pinMode(motor6, OUTPUT);
}

void loop() {
//  digitalWrite(motor1, HIGH); // sets the digital pin 2 on
  digitalWrite(motor2, HIGH); // sets the digital pin 3 on
//  digitalWrite(motor3, HIGH); // sets the digital pin 4 on
//  digitalWrite(motor4, HIGH); // sets the digital pin 5 on
//  digitalWrite(motor5, HIGH); // sets the digital pin 6 on
//  digitalWrite(motor6, HIGH); // sets the digital pin 7 on
  delay(10000);            // run for 10 seconds
//  digitalWrite(motor1, LOW); // sets the digital pin 2 off
  digitalWrite(motor2, LOW); // sets the digital pin 3 off
//  digitalWrite(motor3, LOW); // sets the digital pin 4 off
//  digitalWrite(motor4, LOW); // sets the digital pin 5 off
//  digitalWrite(motor5, LOW); // sets the digital pin 6 off
//  digitalWrite(motor6, LOW); // sets the digital pin 7 off
  delay(3000);            // waits for 3 seconds
}
