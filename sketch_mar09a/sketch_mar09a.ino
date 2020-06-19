int m1=1;
int m2=2;
int m3=4;
int m4=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
   // delay(1500);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
    //delay(1500);
}
