#include <Servo.h>
Servo myservo;
  const int ledpin = 14;
  const int buttonpin = 5;
  const int red = 2;
void setup()
{
  // put your setup code here, to run once:
  //pinMode(ledpin,OUTPUT);
  pinMode(buttonpin,INPUT_PULLUP);
  myservo.attach(2);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(3,1);
  digitalWrite(4,0);
  Serial.begin(96000);
}
void loop()
{
  myservo.write(0);
    if (!digitalRead(5)){
    delay(1000);
    myservo.write(180);
  }
  
  delay(1000);

  /*
  if (digitalRead(5)){
  // put your main code here, to run repeatedly:
    digitalWrite(ledpin,HIGH);
  }
  else {
    digitalWrite(ledpin,LOW);
  }
  */
}
