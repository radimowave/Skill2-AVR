#include <Servo.h> //ต้องลง library Servo.h 

Servo myservo; //ประกาศตัวแปรแทน Servo
 
void setup()
{
  myservo.attach(10); // กำหนดขา D10 ควบคุม Servo ขาที่ ๅ6
}

void loop()
{
  myservo.write(0); // สั่งให้ Servo หมุนไปองศาที่ 0
  delay(1000); // หน่วงเวลา 1000ms
  myservo.write(45); // สั่งให้ Servo หมุนไปองศาที่ 45
  delay(1000); // หน่วงเวลา 1000ms
  myservo.write(90); // สั่งให้ Servo หมุนไปองศาที่ 90
  delay(1000); // หน่วงเวลา 1000ms
  myservo.write(136); // สั่งให้ Servo หมุนไปองศาที่ 135
  delay(1000); // หน่วงเวลา 1000ms
  myservo.write(180); // สั่งให้ Servo หมุนไปองศาที่ 180
  delay(1000); // หน่วงเวลา 1000ms
 
 }