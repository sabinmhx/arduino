void setup() {
  pinMode(5,OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  for(int i = 0; i<255; i=i+5){
    analogWrite(5,i);
    analogWrite(6,i);
    analogWrite(11,i);
    delay(500);
  }
    for(int i = 255; i>0; i=i-5){
    analogWrite(5,i);
    analogWrite(6,i);
    analogWrite(11,i);
    delay(500);
  }
