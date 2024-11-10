#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <SPI.h>

Adafruit_ILI9341 tft = Adafruit_ILI9341(/*CS*/ 5, /*DC*/ 23, /*RST*/ 16);

void setup() {
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);  // Inizializza lo schermo con il nero
}

void loop() {
  tft.fillScreen(ILI9341_RED);    // Schermo rosso
  delay(1000);                     // Aspetta 1 secondo

  tft.fillScreen(ILI9341_BLUE);   // Schermo blu
  delay(1000);                     // Aspetta 1 secondo

  tft.fillScreen(ILI9341_GREEN);  // Schermo verde
  delay(1000);                     // Aspetta 1 secondo
}
