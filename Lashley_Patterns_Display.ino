/*
Visual Stimuli: Displays a collection of stimuli from
K.S. Lashley's patterns in The Mechanism of Vision

Lashley, K.. (2010). The mechanism of vision: I. 
A method for rapid analysis of pattern vision in the rat. 
The Pedagogical Seminary and Journal of Genetic Psychology. 
37. 453-460. 10.1080/08856559.1930.9944155. 

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
// 2x2 center square
 center_square[] =
  { B00000000,
   B00000000,
   B00000000,
   B00011000,
   B00011000,
   B00000000,
   B00000000,
   B00000000 },
 // two squares one above the other
 two_squres_v[] =
 { B00000000,
   B00011000,
   B00011000,
   B00000000,
   B00000000,
   B00011000,
   B00011000,
   B00000000 },
 // two squares side by side 
 two_squres_h[] = 
 { B00000000,
   B00000000,
   B00000000,
   B01100110,
   B01100110,
   B00000000,
   B00000000,
   B00000000 },
 // 4x4 center square 
 large_square[] =
 { B00000000,
   B00000000,
   B00111100,
   B00111100,
   B00111100,
   B00111100,
   B00000000,
   B00000000 },
 // vertical lines
 line_v[] = 
 { B01010101,
   B01010101,
   B01010101,
   B01010101,
   B01010101,
   B01010101,
   B01010101,
   B01010101 },
 // horizontal lines
 lines_h[] = 
 { B11111111,
   B00000000,
   B11111111,
   B00000000,
   B11111111,
   B00000000,
   B11111111,
   B00000000 },
 // circle
 circle [] =
 { B00111100,
   B01000010,
   B10000001,
   B10000001,
   B10000001,
   B10000001,
   B01000010,
   B00111100 },
 // left direction v shape
 v_left [] =
 { B00000000,
   B00000000,
   B00111100,
   B00100000,
   B00100000,
   B00100000,
   B00000000,
   B00000000 },
 // right direction v shape
  v_right [] =
 { B00000000,
   B00000000,
   B00111100,
   B00000100,
   B00000100,
   B00000100,
   B00000000,
   B00000000 },
 // triangle
 triangle [] =
  { B00000000,
    B00000000,
    B00111100,
    B00101000,
    B00110000,
    B00100000,
    B00000000,
    B00000000 },
 // triangle within circle
 trianglecircle[] =
 { B00111100,
   B01000010,
   B10111101,
   B10101001,
   B10110001,
   B10100001,
   B01000010,
   B00111100 },
 // filled triangle within circle 
 filledtrianglecircle[] =
 { B00111100,
   B01000010,
   B10111101,
   B10111001,
   B10110001,
   B10100001,
   B01000010,
   B00111100 };

void loop() {
  matrix.clear();
  matrix.drawBitmap(0, 0, center_square, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

  matrix.clear();
  matrix.drawBitmap(0, 0, two_squres_v, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

  matrix.clear();
  matrix.drawBitmap(0, 0, two_squres_h, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

  matrix.clear();
  matrix.drawBitmap(0, 0, large_square, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

  matrix.clear();
  matrix.drawBitmap(0, 0, line_v, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

  matrix.clear();
  matrix.drawBitmap(0, 0, lines_h, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);
  
  matrix.clear();
  matrix.drawBitmap(0, 0, circle, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

  matrix.clear();
  matrix.drawBitmap(0, 0, v_left, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

  matrix.clear();
  matrix.drawBitmap(0, 0, v_right, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);
  
  matrix.clear();
  matrix.drawBitmap(0, 0, triangle, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

  matrix.clear();
  matrix.drawBitmap(0, 0, trianglecircle, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);
  
  matrix.clear();
  matrix.drawBitmap(0, 0, filledtrianglecircle, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(500);

}
