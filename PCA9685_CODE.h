#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwmServo = Adafruit_PWMServoDriver();

// ค่าพัลส์สำหรับ MG90S

#define SERVOMAX 615 //ค่า MAX ที่กำหนดคือประมาณ 180 องศา
#define SERVOMIN 125//ค่า MIX ที่กำหนดคือประมาณ 0 องศา

void start_PCA9685() 
{
  pwmServo.begin();          // เริ่มต้น PWM driver
  pwmServo.setPWMFreq(60);  // ตั้งค่าความถี่ที่ 60Hz
}

void Sevro_PCA9685() 
{
  int  val1 = map(analogRead(A0),0,1023,125,615);
  int  valservo = map(val1,125,615,0,182);

     tft.drawString( String(valservo)+"  C", 100, 30);  // ข้อความ ตำแหน่ง (x,y)

     pwmServo.setPWM(0, 0, val1); // ส่งสัญญาณไปยังเซอร์โว
     /// เวลาส่งสัญญาณไปที่ val1 ห้ามสูงเกิน 615 และต่ำเกิน 125 ไม่งั้น Servo จะร่วง เนื่องจากไลบารี่รับได้แค่ 180 องศา
   

}