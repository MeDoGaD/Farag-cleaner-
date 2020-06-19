int sen1=A0;
 int sen2=A1;
 int sen3=A2;
 int sen4=A3;
 int sen5=A4;
 
 int val1=0;
 int val2=0;  
 int val3=0;
 int val4=0;
 int val5=0;
 
 int m1=1;
 int m2=2;
 int m3=3;
 int m4=4;
 
int pump=8;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin (9600);
  pinMode(7,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  
  pinMode(m4,OUTPUT);
  pinMode(m1,OUTPUT);

    pinMode(pump,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val1=analogRead(sen1);
  val2=analogRead(sen2);
  
  val3=analogRead(sen3);
  val4=analogRead(sen4);
  val5=analogRead(sen5);
  Serial.println(val5);
  if( val5>700 )
  {
    digitalWrite(7,HIGH);
    delay(2000);
    digitalWrite(7,LOW);
  }
 
//code for top right sensor
  /*if(val1>1000)
  {
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    delay(1500);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
    delay(1500);
  }
  
  //for top left sensor
   if(val2>1000)
  {
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    delay(1500);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
    delay(1500);
  }
  
  //for down left sensor
   if(val3>1000)
  {
    
  }
  //for down right sensor
   if(val4>1000)
  {
    
  }
  //for center sensor
  */
   if(val5>700)
  {
        digitalWrite(8,HIGH);
        delay(2000);
        digitalWrite(8,LOW);
  }
}
