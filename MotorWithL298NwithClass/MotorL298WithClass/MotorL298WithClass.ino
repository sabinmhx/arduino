class Motor{
  private:
    int M1;
    int M2;
  public:
    void stop(){
    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    }
  void front(){
    digitalWrite(M1, HIGH);
    digitalWrite(M2, LOW);
  }
  void back(){
    digitalWrite(M1, LOW);
    digitalWrite(M2, HIGH);
  }
  void set(){
    pinMode(M1, OUTPUT);
    pinMode(M2, OUTPUT);    
  }
  Motor(int M1, int M2){
    this->M1 = M1;
    this->M2 = M2;
  }
};
Motor m(2,3);

  void setup() {
    // put your setup code here, to run once
    m.set();
  }
  void loop() {
    // put your main code here, to run repeatedly:
    m.front();
    delay(1000);
    m.back();
    delay(1000);
  }