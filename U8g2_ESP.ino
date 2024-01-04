#include <Arduino.h>
#include <Wire.h>
#include <U8g2lib.h>

#define NUM_DISPLAYS 6 // Number of displays connected
#define TCAADDR 0x70

U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2[NUM_DISPLAYS] = {
  {U8G2_R0, U8X8_PIN_NONE},
  {U8G2_R0, U8X8_PIN_NONE},
  {U8G2_R0, U8X8_PIN_NONE},
  {U8G2_R0, U8X8_PIN_NONE},
  {U8G2_R0, U8X8_PIN_NONE},
  {U8G2_R0, U8X8_PIN_NONE}
};

void selectI2CChannel(uint8_t i) {
  if (i > 7) return;

  Wire.beginTransmission(TCAADDR);
  Wire.write(1 << i);
  Wire.endTransmission();
}

void setup() {
  Serial.begin(115200);
  Wire.begin();

  // Initialize all OLED displays
  for (int i = 0; i < NUM_DISPLAYS; i++) {
    selectI2CChannel(i + 2); // Adjust the channel number as necessary
    u8g2[i].begin();
    u8g2[i].clearBuffer();
    u8g2[i].setFont(u8g2_font_ncenB14_tr); // Choose a suitable font
    u8g2[i].drawStr(0, 24, "Hello"); // Position and text to be displayed
    u8g2[i].sendBuffer();
  }
}

void loop() {
  // Nothing to do here
}
