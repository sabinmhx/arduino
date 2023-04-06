#define N1 2
#define N2 3
void setup() {
  // put your setup code here, to run once:
  pinMode(N1, OUTPUT);
  pinMode(N2, OUTPUT);
}
void front(){
  digitalWrite(N1, HIGH);
  digitalWrite(N2, LOW);
}
void back(){
  digitalWrite(N1, LOW);
  digitalWrite(N2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  front();
  delay(1000);
  back();
  delay(1000);
}
