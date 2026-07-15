#include <Adafruit_MLX90614.h>
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

float ambTempC;  // อุณภูมห้อง
float objTempC;  // อุณหภูมิวัตถุ
int timer_MLX90614; // ใช้เป็นตัวจับเวลา millis()

void start_MLX90614()
{
  mlx.begin(); 
  timer_MLX90614  = millis();
}


void Read_MLX90614()
{
   if (millis() > timer_MLX90614+100)
   {
      ambTempC = mlx.readAmbientTempC();    // อุณภูมิห้อง
      objTempC = mlx.readObjectTempC();     // อุณภูมิวัตถุ
      
/*
      Serial.println(String("Ambient: ")+String(ambTempC)+String(" C   "));
      Serial.println(String("Object: ")+String(objTempC)+String(" C   "));
*/
      
      tft.setTextSize(2);
      tft.drawString(String("Ambient: ")+String(ambTempC)+String(" C   "), 50, 120);
      tft.drawString(String("Object: ")+String(objTempC)+String(" C   "), 50, 150);
      timer_MLX90614  = millis();

   }   
}