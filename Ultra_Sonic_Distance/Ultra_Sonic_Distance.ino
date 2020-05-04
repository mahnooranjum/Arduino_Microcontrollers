#define trig  13
#define echo  12

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
long duration, dist;
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
duration = pulseIn(echo, HIGH);
dist = (duration/2)/29.1;

 if(dist >=200 || dist <=0)
 {
  Serial.println("Out of Range");
  
  }else
  {
    Serial.println(dist);
    }
 delay(1000);

}
