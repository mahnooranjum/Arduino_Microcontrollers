#include<Servo.h>

Servo myservo;
int pos;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(10);

}

void loop() {
  // put your main code here, to run repeatedly:

  myservo.writeMicroseconds(1500);

  delay(25);

  myservo.detach();
  delay(25);
  myservo.attach(10);

 // myservo.writeMicrosseconds(1500);

  //delay(2);
  
  //myservo.detach();
 // delay(200);
  //myservo.attach(10);
}
