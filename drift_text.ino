/*
Visual Stimuli Drift: Uses text feature to wrap and display desired stimuli 

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

   
void loop() {
  matrix.setTextSize(1);
  matrix.setTextWrap(false);  
  matrix.setTextColor(LED_ON);
  for (int8_t x=0; x>=-36; x--) {
    matrix.clear();
    matrix.setCursor(x,0);
    matrix.print(" / / /");
    matrix.writeDisplay();
    delay(100);
  }

 }
