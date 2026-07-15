#define BLYNK_TEMPLATE_ID "TMPL6eN601l12"
#define BLYNK_TEMPLATE_NAME "Test"
#define BLYNK_AUTH_TOKEN "8P93qqsSK4O8EMEtUJzSzrZMull-WBlG"

#define LED_blynk BCM24
#include <rpcWiFi.h>
#include <BlynkSimpleWioTerminal.h>

char ssid[] = "kong";
char pass[] = "12345678";

int time_WiFi ;
int timeCount_WiFI = 10000 ; /// เวลาในการเข้าไปเช็ด สถานะ WiFi 10s
void strat_blynk()
{   
  pinMode(LED_blynk,OUTPUT);
  WiFi.begin(ssid, pass);    // ใช้ำสำหรับการเชื่อมต่อ WiFi 

  Blynk.config(BLYNK_AUTH_TOKEN); // ใช้เหมือน bylnk.begin แต่ถ้ายังไม่ได้เชื่อม WiFi มันจะไม่ติด เหมือน bylnk.begin 
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
/// ตรวจสอบว่ามีการเชื่อมต่อไหม 
  if (WiFi.begin(ssid, pass) != WL_CONNECTED) {Serial.println("Wi-Fi connection failed!");  tft.fillCircle(30, 40, 30, TFT_RED);}
  else{Serial.println("Wi-Fi connected.");Serial.print("IP Address: ");Serial.println(WiFi.localIP()); tft.fillCircle(30, 40, 30, TFT_GREEN);}

      time_WiFi = millis() ;  //// บันทันเวลาเริ่มต้น

}


void WiFi_status() ////// อ่านสถานะ WiFi
{
       if(millis() > time_WiFi+timeCount_WiFI) 
        {
            if (WiFi.status() != WL_CONNECTED) 
            {
              WiFi.begin(ssid, pass);
              Serial.println("\nFailed to reconnect Wi-Fi.");
              tft.fillCircle(30, 40, 30, TFT_RED); // แสดงสถานะ WiFI 
            } 
             if (WiFi.status() == WL_CONNECTED)  
            {
              Serial.println("\nWi-Fi reconnected.");
              tft.fillCircle(30, 40, 30, TFT_GREEN); // แสดงสถานะ WiFI 
              // เชื่อมต่อกับ Blynk ใหม่
            }

            time_WiFi = millis() ; 
        }
}



void blynkTest()
{
  Read_BH1750();
  WiFi_status();
  Blynk.run(); /// จำเป็นเพื่อให้ Blynk ใช้งานได้

  Blynk.virtualWrite(V2, lux); //// ส่งข้อมูลจาก บอร์ด WIO ไปที่ BLYNK
}

BLYNK_WRITE(V0) ////// อันนี้ใช้ BUTTON(0,1) เพื่อ ส่งข้อมูลจาก Blynk มาที่ บอร์ด WIO
{ 
int buttonState = param.asInt(); 
digitalWrite(LED_blynk, buttonState);
if(buttonState == 1){}
if(buttonState == 0){}
}


BLYNK_WRITE(V1)   ////// อันนี้ใช้ Slider(0,100) เพื่อ ส่งข้อมูลจาก Blynk มาที่ บอร์ด WIO
{  
    int lux_old1;
    int LOAD_LUX = param.asInt(); 
    int hl1 = map(LOAD_LUX, 0, 100, 0,200 );       
    if(hl1>200){ hl1=200;}
      if(hl1<0){ hl1=0;}
    if (lux_old1 !=LOAD_LUX)  ///ป้องกันค่าเดิมรันซ้ำ กันกราฟกระพริบ
        {
        tft.fillRect(60, 180,hl1, 30, TFT_GREEN);
        tft.fillRect(60+hl1, 180,200-hl1, 30, TFT_WHITE);
        lux_old1=LOAD_LUX;
        }
}



