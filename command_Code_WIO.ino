#include "INOUTput_CODE.h"
#include "TFT_CODE.h"
#include "MLX90614_CODE.h"
#include "BH1750_CODE.h"
#include "DH11_CODE.h"
#include "Servo_Direct.h"
#include "DC_Motor_CODE.h"
#include "SLED_CODE.h"
#include "PCA9685_CODE.h"
#include "Blynk_.h"

void setup() 
{

  WIO_joystick_Key();
  RelayAll();
  LED_ALL();
  start_TFT();
  start_BH1750();
  start_MLX90614();
  start_DH11();
  start_DCMotor();
  start_SLED();
  start_PCA9685();
  start_servo();
  strat_blynk();

}

void loop() 
{   

  //tft_basic();  
  //Read_BH1750();
  // Read_MLX90614(); 
 // Read_DHT11();
  // DCMotorA(100,1);
   //DCMotorB(speed,dir);
  // SLED_ALL();
  //Sevro_PCA9685();
  blynkTest();
}
