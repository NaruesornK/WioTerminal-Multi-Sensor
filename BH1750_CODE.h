#include <BH1750FVI.h>
BH1750FVI LightSensor(BH1750FVI::k_DevModeContLowRes); 
int lux;
int timer_BH1750;

void start_BH1750()
{
  
  LightSensor.begin();          
  timer_BH1750 = millis();
}



void Read_BH1750()
{
   // จับเวลาทุกๆ 300 mS
  if (millis() > timer_BH1750+300)
  {
    
    lux = LightSensor.GetLightIntensity(); // อ่านค่าความเข้มแสง หน่วยเป็น LUX
   
//แสดงตรง ซีเรียล จอคอม
   /*
    Serial.print("Light: ");
    Serial.print(lux);
    Serial.println(" lux");
    */
// แสดงค่าความเข้มของแสง ตัวอักษรสีเหลือง
    tft.setTextSize(2);
    tft.setTextColor(TFT_YELLOW,TFT_BLACK);   
    tft.drawString(String("Light : ")+String(lux)+String(" lux       "), 60, 120);

    timer_BH1750 = millis();           // เริ่มจับเวลาใหม่
  }   
}