#include <Servo.h> 
Servo myservo;

void start_servo() 
{ 
  myservo.attach(BCM9);
} 


void Servo_4Ch() 
{
  myservo.write(20);  
  delay(2000);
  myservo.write(90);  
  delay(2000);
  myservo.write(170);  
  delay(2000);
} 