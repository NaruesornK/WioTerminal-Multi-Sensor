// DC MOTOR A PIN
#define AIN1 BCM4
#define AIN2 BCM5
#define PWMA BCM26  // PWM3
// DC MOTOR B PIN
#define BIN1 BCM2
#define BIN2 BCM3
#define PWMB BCM11    // PWM2

int timer_DCMotorA;
int timer_DCMotorB;

void start_DCMotor()
{
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

timer_DCMotorA = millis();
timer_DCMotorB = millis();

}
////วิธีใช้  DCMotorA(100,1); คือ ให้มอเตอร์ A หมุน 100% คือ 255 แล้วให้ Motor หมุนไปทวนเข็ม 

void DCMotorA(int Speed, int dir)
{
  // ปรับค่า Speed จาก 0-100 เป็น 100-255 มาเก็บไว้ในตัวแปร dutyCycle
  // DC MOTOR เริ่มหมุนที่ duty cycle ประมาณ 100-255
 if (millis() > timer_DCMotorA+100)
   {
  int dutyCycle = map(Speed,0,100,0,255);
  analogWrite(PWMA,dutyCycle);
  
  timer_DCMotorA = millis();
   }

  // DC MOTOR หมุนตามเข็มนาฬิกา  
    if (dir ==0) 
    {
      digitalWrite(AIN1,LOW);
      digitalWrite(AIN2,HIGH);
    }

  // DC MOTOR หมุนทวนเข็มนาฬิกา    
     else if (dir ==1)
    {
      digitalWrite(AIN1,HIGH);
      digitalWrite(AIN2,LOW);
    }
     
   // DC MOTOR หยุดหมุน  
     else if (dir ==2)
     {
      digitalWrite(AIN1,LOW);
      digitalWrite(AIN2,LOW);
     }
}





void DCMotorB(int Speed, int dir)
{
  // ปรับค่า Speed จาก 0-100 เป็น 100-255 มาเก็บไว้ในตัวแปร dutyCycle
  // DC MOTOR เริ่มหมุนที่ duty cycle ประมาณ 100-255
if (millis() > timer_DCMotorB+100)
   {
  int dutyCycle = map(Speed,0,100,0,255);
  analogWrite(PWMB,dutyCycle);
timer_DCMotorB = millis();
   }

  // DC MOTOR หมุนตามเข็มนาฬิกา ตามค่า dutyCycle 
    if (dir ==0) 
    {
      digitalWrite(BIN1,LOW);
      digitalWrite(BIN2,HIGH);
    }

  // DC MOTOR หมุนทวนเข็มนาฬิกา ตามค่า dutyCycle   
     else if (dir ==1)
    {
      digitalWrite(BIN1,HIGH);
      digitalWrite(BIN2,LOW);
    }
     
   // DC MOTOR หยุดหมุน  
     else if (dir ==2)
     {
      digitalWrite(BIN1,LOW);
      digitalWrite(BIN2,LOW);
     }
}
