#include <Servo.h>
int ir1 = 2;
int ir2 = 7;
Servo myservo1;
Servo myservo2;
void setup(){
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  myservo1.attach(3);
  myservo2.attach(5);
}
void loop(){
  if (digitalRead(ir1) == LOW){
    myservo2.write(90);
    myservo1.write(90);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
  }
  else if (digitalRead(ir2) == LOW){
    myservo2.write(0);
    myservo1.write(0);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);}}