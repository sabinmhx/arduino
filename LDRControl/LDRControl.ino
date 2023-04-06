#include<Servo.h>
#define POTPIN A3
#define LEDPIN 3
Servo myservo;
void setup() {
  myservo.attach(9);
  pinMode(POTPIN, INPUT);
  pinMode(LEDPIN, OUTPUT)
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(POTPIN);
  int servoValue = map(val, 0 , 1023, 0, 180);
  myservo.write(servoValue);
  delay(500);
  Serial.println(val);
  if (val > 500){
    digitalWrite(LEDPIN, HIGH);
  }
  else     
  {
  digitalWrite(LEDPIN, LOW);
  }
}
