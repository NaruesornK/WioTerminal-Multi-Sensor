
void WIO_joystick_Key()
{
  pinMode(WIO_5S_UP, INPUT);
  pinMode(WIO_5S_LEFT, INPUT);
  pinMode(WIO_5S_RIGHT, INPUT);
  pinMode(WIO_5S_DOWN, INPUT);
  pinMode(WIO_5S_PRESS, INPUT);

   pinMode(WIO_KEY_A, INPUT);
   pinMode(WIO_KEY_B, INPUT);
   pinMode(WIO_KEY_C, INPUT);
}

////////////////////////////////////////////////
////////////////////////////////////////////////

#define Relay1 BCM23
#define Relay2 BCM22
#define Relay3 BCM21
#define Relay4 BCM20

void RelayAll()
{
  pinMode(Relay1,OUTPUT);
  pinMode(Relay2,OUTPUT);
  pinMode(Relay3,OUTPUT);
  pinMode(Relay4,OUTPUT);
}
////////////////////////////////////////////////
////////////////////////////////////////////////


////////////////////////////////////////////////
////////////////////////////////////////////////
int LED[10] {BCM13,BCM12,BCM11,BCM10,BCM9,BCM8,BCM7,BCM6,BCM5,BCM4 }; /// วิธีใช้ Array int x[3]= {0,1,2} x จะมี Array 3 ตัว โดยเริ่มจาก 0 1 2 

void LED_ALL()
{     


}
////////////////////////////////////////////////
////////////////////////////////////////////////

int time_S;
void bais_code()
{
  
    for(int i = 0 ; i < 10 ; i++ )
          {
            pinMode(LED[i] ,OUTPUT);
            digitalWrite(LED[i] ,0);
          }


    time_S = millis(); ///// ต้องให้ไปทำ

    if(millis() >= time_S + 500)
    {

    }


            /*  digitalRead();
                digitalWrite();


                Serial.begin();
                Serial.println();

                randomSeed(analogRead(0));

                int  randNumber = random(300); 0 - 299
                int randNumber = random(10, 20); 10-19;


                while(1)delay(10);
                break;


               analogWrite(WIO_BUZZER, 200);
            */  
}
//

