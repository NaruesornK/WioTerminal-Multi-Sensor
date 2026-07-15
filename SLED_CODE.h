#include <Adafruit_NeoPixel.h>
#define NUMSLEDs  12       // ตัวเลข 12 คือจำนวน LED
#define PINSLEDs  D0      // ขาพอร์ตที่ต่อใช้งาน (ขา GPIO10)
Adafruit_NeoPixel SLEDs = Adafruit_NeoPixel(NUMSLEDs,PINSLEDs, NEO_RGB + NEO_KHZ800);

            int r1 ,g1 ,b1 ;
            int r2 ,g2 ,b2 ;
            int r3 ,g3 ,b3;
            int r4 ,g4 , b4;
            int r5 ,g5 , b5;
            int r6 ,g6 , b6;
            int r7 ,g7 , b7;
            int r8 ,g8 , b8;
            int r9 ,g9 , b9;
            int r10 ,g10 , b10;
            int r11 ,g11 , b11;
            int r12 ,g12 , b12;
            int R = 255  , G , B ;  

int SLED_NUM;
void start_SLED()
{
SLEDs.begin();     

}


void SLED_ALL()
{
r1=r2=r3=r4=r5=r6=r7=r8=r9=r10=r11=r12 =R;
g1=g2=g3=g4=g5=g6=g7=g8=g9=g10=g11=g12 =G;
b1=b2=b3=b4=b5=b6=b7=b8=b9=b10=b11=b12 =B;

SLED_NUM++; if(SLED_NUM > 12 )
{SLED_NUM = 0;}delay(500);

 if(SLED_NUM==0)
  {
      SLEDs.setPixelColor(0,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(1,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(2,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(3,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(4,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(5,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(6,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(7,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
      SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
      SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
      SLEDs.show();
   
  }
  if(SLED_NUM==1)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(2,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(3,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(4,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(5,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(6,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(7,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }
  
  if(SLED_NUM==2)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(3,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(4,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(5,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(6,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(7,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }

   if(SLED_NUM==3)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(4,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(5,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(6,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(7,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
   
  }

   if(SLED_NUM==4)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(5,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(6,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(7,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }

  if(SLED_NUM==5)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(g5,r5,b5));
    SLEDs.setPixelColor(5,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(6,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(7,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }

  if(SLED_NUM==6)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(g5,r5,b5));
    SLEDs.setPixelColor(5,SLEDs.Color(g6,r6,b6));
    SLEDs.setPixelColor(6,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(7,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }
   if(SLED_NUM==7)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(g5,r5,b5));
    SLEDs.setPixelColor(5,SLEDs.Color(g6,r6,b6));
    SLEDs.setPixelColor(6,SLEDs.Color(g7,r7,b7));
    SLEDs.setPixelColor(7,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }

  if(SLED_NUM==8)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(g5,r5,b5));
    SLEDs.setPixelColor(5,SLEDs.Color(g6,r6,b6));
    SLEDs.setPixelColor(6,SLEDs.Color(g7,r7,b7));
    SLEDs.setPixelColor(7,SLEDs.Color(g8,r8,b8));
    SLEDs.setPixelColor(8,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }
   if(SLED_NUM==9)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(g5,r5,b5));
    SLEDs.setPixelColor(5,SLEDs.Color(g6,r6,b6));
    SLEDs.setPixelColor(6,SLEDs.Color(g7,r7,b7));
    SLEDs.setPixelColor(7,SLEDs.Color(g8,r8,b8));
    SLEDs.setPixelColor(8,SLEDs.Color(g9,r9,b9));
    SLEDs.setPixelColor(9,SLEDs.Color(0,0,0));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }
   if(SLED_NUM==10)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(g5,r5,b5));
    SLEDs.setPixelColor(5,SLEDs.Color(g6,r6,b6));
    SLEDs.setPixelColor(6,SLEDs.Color(g7,r7,b7));
    SLEDs.setPixelColor(7,SLEDs.Color(g8,r8,b8));
    SLEDs.setPixelColor(8,SLEDs.Color(g9,r9,b9));
    SLEDs.setPixelColor(9,SLEDs.Color(g10,r10,b10));  
    SLEDs.setPixelColor(10,SLEDs.Color(0,0,0));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }
  if(SLED_NUM==11)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(g5,r5,b5));
    SLEDs.setPixelColor(5,SLEDs.Color(g6,r6,b6));
    SLEDs.setPixelColor(6,SLEDs.Color(g7,r7,b7));
    SLEDs.setPixelColor(7,SLEDs.Color(g8,r8,b8));
    SLEDs.setPixelColor(8,SLEDs.Color(g9,r9,b9));
    SLEDs.setPixelColor(9,SLEDs.Color(g10,r10,b10));  
    SLEDs.setPixelColor(10,SLEDs.Color(g11,r11,b11));
    SLEDs.setPixelColor(11,SLEDs.Color(0,0,0));
    SLEDs.show();
   
  }
  if(SLED_NUM==12)
  {
    SLEDs.setPixelColor(0,SLEDs.Color(g1,r1,b1));
    SLEDs.setPixelColor(1,SLEDs.Color(g2,r2,b2));
    SLEDs.setPixelColor(2,SLEDs.Color(g3,r3,b3));
    SLEDs.setPixelColor(3,SLEDs.Color(g4,r4,b4));
    SLEDs.setPixelColor(4,SLEDs.Color(g5,r5,b5));
    SLEDs.setPixelColor(5,SLEDs.Color(g6,r6,b6));
    SLEDs.setPixelColor(6,SLEDs.Color(g7,r7,b7));
    SLEDs.setPixelColor(7,SLEDs.Color(g8,r8,b8));
    SLEDs.setPixelColor(8,SLEDs.Color(g9,r9,b9));
    SLEDs.setPixelColor(9,SLEDs.Color(g10,r10,b10));  
    SLEDs.setPixelColor(10,SLEDs.Color(g11,r11,b11));
    SLEDs.setPixelColor(11,SLEDs.Color(g12,r12,b12));
    SLEDs.show();
   
  }

   
  
}