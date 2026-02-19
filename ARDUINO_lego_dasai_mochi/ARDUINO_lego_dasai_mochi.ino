// Dasai Mochi-like robot using Xiao ESP32-S3 and 0.85" 128x128px Waveshare display and 3D printed Lego helmet

// created by upir, 2026
// youtube channel: https://www.youtube.com/upir_upir

// YouTube Video: https://youtu.be/HodtB3C7RuQ
// Source Files: https://github.com/upiir/lego_dasai_mochi

// Links from the video:
// Do you like this video? You can buy me a coffee ☕: https://www.buymeacoffee.com/upir
// Waveshare display: https://www.waveshare.com/0.85inch-lcd-module.htm
// Xiao ESP32S3: https://s.click.aliexpress.com/e/_c3EyyX7Z
// ESP32S3 Documentation: https://wiki.seeedstudio.com/xiao_esp32s3_getting_started/
// Bricklink studio: https://www.bricklink.com/v3/studio/download.page
// Blender: https://www.blender.org/
// Autodesk Fusion: https://www.autodesk.com/cz/products/fusion-360/overview
// Arduino IDE: https://www.arduino.cc/en/software/

// Related videos with OLED display:
// Make your own Dasai Mochi (with ESP32 and OLED display): https://youtu.be/QOoszpg0BsM
// Your robot needs eyes: https://youtu.be/5uTRdr3TxKE
// Arduino Robot Eyes with LED Matrix Display: https://youtu.be/If-hiuwsQh0
// Arduino + OLED displays: https://www.youtube.com/playlist?list=PLjQRaMdk7pBZ1UV3IL5ol8Qc7R9k-kwXA
// Image to OLED in 60 seconds // https://www.youtube.com/watch?v=Lw0Aaoo3YSY
// Smaller & Faster Arduino? // https://youtu.be/4GfPQoIRqW8
// Tiny OLED (72x40px OLED) // https://youtu.be/caHcaUoQ2kg
// ESP32 with Tiny OLED: https://youtu.be/icD-hER8YQ8


#include <SPI.h>
#include "LCD_Driver.h"
#include "GUI_Paint.h"
#include "image.h"

#include "lego_image_render.h"
#include "lego_heads_multiple.h"


void setup()
{
  Config_Init();
  LCD_Init();
  LCD_Clear(WHITE);
  LCD_SetBacklight(500);
  Paint_NewImage(LCD_WIDTH, LCD_HEIGHT, 0, WHITE);
  Paint_Clear(WHITE);
  Paint_SetRotate(0);
  // waveshare demo sequence
	Paint_DrawString_EN(0, 15, "123",        &Font24,  YELLOW, RED);  
	Paint_DrawString_EN(0, 39, "ABC",        &Font24,  BLUE,   CYAN);
	Paint_DrawString_CN(0,85, "微雪电子",   &Font24CN,WHITE,  RED);
  Paint_DrawImage(gImage_70X70, 55, 10, 70, 70);
}


void loop()
{

  // draw lego head with simple shapes
  LCD_Clear(YELLOW);
  Paint_DrawCircle(/*X_Center*/ 29, /*Y_Center*/ 50, /*Radius*/ 9, /*Color*/ BLACK, /*Line_width*/ DOT_PIXEL_1X1, /*Draw_Fill*/ DRAW_FILL_FULL);
  Paint_DrawCircle(/*X_Center*/ 99, /*Y_Center*/ 50, /*Radius*/ 9, /*Color*/ BLACK, /*Line_width*/ DOT_PIXEL_1X1, /*Draw_Fill*/ DRAW_FILL_FULL);  
  Paint_DrawRectangle(/*Xstart*/43, /*Ystart*/82, /*Xend*/85, /*Yend*/86, /*Color*/ BLACK, /*Line_width*/ DOT_PIXEL_1X1, /*Draw_Fill*/ DRAW_FILL_FULL);
  Paint_DrawCircle(/*X_Center*/ 27, /*Y_Center*/ 47, /*Radius*/ 4, /*Color*/ WHITE, /*Line_width*/ DOT_PIXEL_1X1, /*Draw_Fill*/ DRAW_FILL_FULL);/
  Paint_DrawCircle(/*X_Center*/ 97, /*Y_Center*/ 47, /*Radius*/ 4, /*Color*/ WHITE, /*Line_width*/ DOT_PIXEL_1X1, /*Draw_Fill*/ DRAW_FILL_FULL);  

  delay(5000);

  // draw the "normal" lego fade for 5 seconds
  Paint_DrawImage(lego_head_renders_4_map, 0, 0, 128, 128);    delay(50000);

  int wait = 500;

  // draw various lego faces for half a second each
  // those images are stored in file lego_heads_multiple.h
  Paint_DrawImage(lego_head_renders_2_map, 0, 0, 128, 128);    delay(wait);
  Paint_DrawImage(lego_head_renders_3_map, 0, 0, 128, 128);    delay(wait);
  Paint_DrawImage(lego_head_renders_4_map, 0, 0, 128, 128);    delay(wait);
  Paint_DrawImage(lego_head_renders_5_map, 0, 0, 128, 128);    delay(wait);
  Paint_DrawImage(lego_head_renders_6_map, 0, 0, 128, 128);    delay(wait);
  Paint_DrawImage(lego_head_renders_7_map, 0, 0, 128, 128);    delay(wait);
  Paint_DrawImage(lego_head_renders_8_map, 0, 0, 128, 128);    delay(wait);
  Paint_DrawImage(lego_head_renders_9_map, 0, 0, 128, 128);    delay(wait);
  Paint_DrawImage(lego_head_renders_10_map, 0, 0, 128, 128);   delay(wait);
  Paint_DrawImage(lego_head_renders_11_map, 0, 0, 128, 128);   delay(wait);     
  Paint_DrawImage(lego_head_renders_12_map, 0, 0, 128, 128);   delay(wait);    
  Paint_DrawImage(lego_head_renders_13_map, 0, 0, 128, 128);   delay(wait);    
  Paint_DrawImage(lego_head_renders_14_map, 0, 0, 128, 128);   delay(wait);    
  Paint_DrawImage(lego_head_renders_15_map, 0, 0, 128, 128);   delay(wait);    
  Paint_DrawImage(lego_head_renders_16_map, 0, 0, 128, 128);   delay(wait);    
  Paint_DrawImage(lego_head_renders_17_map, 0, 0, 128, 128);   delay(wait);    
  Paint_DrawImage(lego_head_renders_18_map, 0, 0, 128, 128);   delay(wait);    
  Paint_DrawImage(lego_head_renders_19_map, 0, 0, 128, 128);   delay(wait);    
  Paint_DrawImage(lego_head_renders_20_map, 0, 0, 128, 128);   delay(wait);                                   
  Paint_DrawImage(lego_head_renders_21_map, 0, 0, 128, 128);   delay(wait);                                     

}
