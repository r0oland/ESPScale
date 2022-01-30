#include <Arduino.h>

#include <Adafruit_I2CDevice.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <SPI.h>

// For 1.44" and 1.8" TFT with ST7735 use:
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void testdrawtext(char *text, uint16_t color);


float p = 3.1415926;

void setup(void) {
  Serial.begin(9600);
  Serial.println(F("ESPScale v0.0.1"));
  Serial.println(F("started Jan 2022..."));

  Serial.print(F("Starting screen init..."));

  tft.initR(INITR_144GREENTAB); // Init ST7735R chip, green tab
  tft.setRotation(180);

  Serial.println(F("done!"));

  // large block of text
  tft.fillScreen(ST77XX_BLACK);
  testdrawtext("ESPScale v0.0.1\nstarted Jan 2022...", ST77XX_GREEN);
  delay(1000);

}

void loop() {
  // instead of filling the entire screen, redraw the old string in background
  // color, then draw the new string in foreground color.
  tft.fillScreen(ST77XX_BLACK);

  // tft.setTextColor(ST77XX_GREEN);
  tft.setTextWrap(true);

  tft.setCursor(0, 50);

  tft.println("Sketch has been\nrunning for: ");
  tft.setTextColor(ST77XX_MAGENTA);
  tft.setCursor(0, 70);
  tft.print("_____________________");
  tft.setCursor(0, 70);
  tft.print(millis() / 1000);
  tft.setTextColor(ST77XX_GREEN);
  tft.print(" s.");
  delay(1000);

}

void testdrawtext(char *text, uint16_t color) {
  tft.setCursor(0, 0);
  tft.setTextColor(color);
  tft.setTextWrap(true);
  tft.print(text);
}