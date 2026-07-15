#include"TFT_eSPI.h"
  TFT_eSPI tft;


void start_TFT() 
{
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(TFT_BLACK);              
  tft.setTextColor(TFT_WHITE,TFT_BLACK);  
  tft.setTextSize(2);

}



void tft_basic()
{
    tft.drawString("  Hello Wolrd", 100, 30);  // ข้อความ ตำแหน่ง (x,y)

  ///     วิธีใช้  (x1, y1 ,  x2 , y2     TFT_สี ) x1=จุดเริ่มต้นความยาว(ดูแกน x ) , x2=จุดจบความยาว บวกจาก x1 ไปอีก (ดูแกน x )  
  ///                                        y1=จุดเริ่มต้นความสูง(ดูแกน y) y2= ขนาดของสี่เหลี่ยม บวกจากแกน y1 ไปอีก (แกน y)
    tft.fillRect(80,  60, 160, 100 ,TFT_BLUE); // สีเหลี่ยมสีเต็ม 
   tft.drawRect(0,  0,  320, 50, TFT_BLUE); // สีเหลี่ยมมีแค่สีกรอบ
  ///     วิธีใช้     (x,   y,  c , TFT_สี ) x=ตำแหน่งแกน x   y=ตำแหน่งแกน y c= รัศมีของวงกลม หรือ ขนาดของวงกลม
    tft.fillCircle(60, 200, 30, TFT_GREEN); // วงกลมสีเต็ม
    tft.drawCircle(60, 200, 30, TFT_BLACK); // วงกลมมีแค่สีกรอบ

  //  วิธีใช้  (x1, y1 , x2 , y2  TFT_สี )  / x1 = ตำแหน่งเริ่มต้นของเส้นแกน x /  y1 = ตำแหน่งเริ่มต้นของแกน y  / x2 = ตำแหน่งจบของเส้นแกน x  / y2 =ตำแหน่งจบของเส้นแกน y /
    tft.drawLine(0, 230, 320 , 230, TFT_RED); // เส้นตรง

    tft.fillTriangle(60, 60, 60, 60, 60, 60, TFT_RED);
    tft.drawTriangle(60, 60, 60, 60, 60, 60, TFT_RED);
                  /*(x0, y0),(x1, y1),(x2, y2) คือพิกัดของสามเหลี่ยมทั้ง 3 จุด (x2,y2) คือจุด สูงสุดหรือตำสุดของสามเหรียม 
                  color คือสีของสามเหลี่ยม (เช่น TFT_SKYBLUE, TFT_RED)
                  */

   tft.fillScreen(TFT_BLACK);  // รีเซ็ตหน้าจอ
}

