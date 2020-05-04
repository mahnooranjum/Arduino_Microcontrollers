#include <Servo.h> //add '<' and '>' before and after servo.h
 
int servoPin = 9;
 
Servo servo;  
//Servo servo1;
 
int servoAngle = 0;   // servo position in degrees
 
void setup()
{
  Serial.begin(9600);  
  servo.attach(servoPin);
  //  servo1.attach(111);
}
 int i =0;
 int j=1;
 
void loop()
{
//control the servo's direction and the position of the motor
//for(i = 0,j=1; i<180 || j<=180; i++,j++){
   servo.write(180);      // Turn SG90 servo Left to 45 degrees
   delay(1000);      
   //servo1.write(i);
   //delay(1000);// Wait 1 second
   servo.write(0); 
   delay(1000);
   //servo1.write(j);// Turn SG90 servo back to 90 degrees (center position)
   //delay(1000);
//}
//end control the servo's direction and the position of the motor


//control the servo's speed  

//if you change the delay value (from example change 50 to 10), the speed of the servo changes
 
  //end control the servo's speed  
}
