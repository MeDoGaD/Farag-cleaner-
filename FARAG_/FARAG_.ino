#include <Servo.h>
Servo servo;
int m1=2;
int m2=3;
int m3=4;
int m4=5;

int m5=6;
int m6=7;
int m7=12;
int m8=13;

int pumb=8;
int ser=9;
int trig=10;
int eco=11;
int duration;
int dist;
char blu;
int angle=90;
int x=20;
void setup() {;

  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(m5,OUTPUT);
pinMode(m6,OUTPUT);
pinMode(m7,OUTPUT);
pinMode(m8,OUTPUT);
pinMode(ser,OUTPUT);
pinMode(pumb,OUTPUT);
servo.attach(ser);
pinMode(trig,OUTPUT);
pinMode(eco,INPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
 /* servo.write(90);  
delay(500);
digitalWrite(trig,LOW);
delayMicroseconds(1);
digitalWrite(trig,HIGH);
delayMicroseconds(1);
digitalWrite(trig,LOW);
duration=pulseIn(eco,HIGH);
dist=duration*0.034/2;
*/
    





////////////////////////////////////
blu=Serial.read();
if(blu=='B'){
  Serial.println("BACKWORD");
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
  }

 if(blu=='F'){
Serial.println("FORWORD");
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH); 
}
 if(blu=='L')
{
  Serial.println("LEFT");

    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
}
 if(blu=='R')
{
  Serial.println("Right");

    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
}
//Forward left
 if(blu=='I'){
     digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
    
     digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH); 
}
//forward right
 if(blu=='G'){
 Serial.println("f r");
    
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH); 
}
//back left
 if(blu=='H'){
  Serial.println("b l");
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
    
   
}
//back right
 if(blu=='J'){
  
    Serial.println("b r");
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);

    
}
 if(blu=='W')
{
     digitalWrite(m5,LOW);
    digitalWrite(m6,HIGH);
    digitalWrite(m7,HIGH);
    digitalWrite(m8,LOW); 

}
if(blu=='U')
{
     digitalWrite(m5,HIGH);
    digitalWrite(m6,LOW);
    digitalWrite(m7,LOW);
    digitalWrite(m8,HIGH); 

}
if(blu=='w'||blu=='u')
{
     digitalWrite(m5,LOW);
    digitalWrite(m6,LOW);
    digitalWrite(m7,LOW);
    digitalWrite(m8,LOW); 

}
 if(blu=='V')
{
     digitalWrite(pumb,HIGH);

}
 if(blu=='v')
{
     digitalWrite(pumb,LOW);

}

 if(blu=='S'){
//Serial.println("Stop");
 digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW); 
}

}

/*void Auto()
{
  
  //ym4y odam l modt 4 swany
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH); 
    check();
    delay(4000);
    check();

    //ylf 4mal 1 sec
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
    check();

    delay(1000);
    check();

    //ym4y odam 4 sec
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH); 
    check();

    delay(4000);
    check();

    //ylf ymen 1 sec
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
    delay(1000);
    check();

    

}
void check()
{
if (dist<=x)
{
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW); 
    servo.write(180); 
    {
      if(dist<=x)
      {
       servo.write(0); 
       if(dist<=15)
       {
        digitalWrite(m1,HIGH);
        digitalWrite(m2,LOW);
        digitalWrite(m3,HIGH);
        digitalWrite(m4,LOW);
        delay(3000);
        check();
       }
       else
       {
       digitalWrite(m1,LOW);
       digitalWrite(m2,LOW);
       digitalWrite(m3,LOW);
       digitalWrite(m4,HIGH);
       delay(1000);
       Auto();
       }

      }
      else
      {
        digitalWrite(m1,LOW);
        digitalWrite(m2,HIGH);
        digitalWrite(m3,LOW);
        digitalWrite(m4,LOW);
        delay(1000);
        Auto();
      }
    } 

} 
}*/
