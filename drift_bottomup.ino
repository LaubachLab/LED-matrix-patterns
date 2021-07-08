/*
Visual Stimuli Drift: Upwards direction from botton to top 

Works with 8x8 Adafruit LED Matrix backpacks
Set up for backpacks with 2 Address Select pins: 0x70
 */

#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_8x8matrix matrix = Adafruit_8x8matrix();

void setup() {
  Serial.begin(9600);  
  matrix.begin(0x70);  
}

static const uint8_t PROGMEM
  drift1[] = 
 { B11111111,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000 },
  drift2[] =
  {B00000000,
   B11111111,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000},
   drift3[] = 
  {B00000000,
   B00000000,
   B11111111,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000},
   drift4[] = 
  {B00000000,
   B00000000,
   B00000000,
   B11111111,
   B00000000,
   B00000000,
   B00000000,
   B00000000},
   drift5[] = 
  {B00000000,
   B00000000,
   B00000000,
   B00000000,
   B11111111,
   B00000000,
   B00000000,
   B00000000},
   drift6[] = 
  {B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B11111111,
   B00000000,
   B00000000},
   drift7[] =
  {B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B11111111,
   B00000000},
   drift8[] =
  {B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B11111111};
   
void loop() {
  matrix.clear();
  matrix.drawBitmap(0, 0, drift8, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(50);

  matrix.clear();
  matrix.drawBitmap(0, 0, drift7, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(50);

  matrix.clear();
  matrix.drawBitmap(0, 0, drift6, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(50);

  matrix.clear();
  matrix.drawBitmap(0, 0, drift5, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(50);

  matrix.clear();
  matrix.drawBitmap(0, 0, drift4, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(50);

  matrix.clear();
  matrix.drawBitmap(0, 0, drift3, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(50);

  matrix.clear();
  matrix.drawBitmap(0, 0, drift2, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(50);

  matrix.clear();
  matrix.drawBitmap(0, 0, drift1, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(50);
  }
