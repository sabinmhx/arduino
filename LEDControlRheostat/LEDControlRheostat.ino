#define POTPIN A3
#define LEDPIN 3

void setup() {
  // put your setup code here, to run once:
  pinMode(POTPIN, INPUT);
  pinMode(LEDPIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(POTPIN);
  int ledval = map(val, 0, 1023, 0, 255); //map(val, in_min, in_max, out_min, out_max)
  analogWrite(LEDPIN, ledval);
}
