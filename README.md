# ESPScale
Digital weight for measuring and logging printer material consumption based on ESP32, digital load-cell and with a nice color display...

## Hardware

## Pin Connections

// TFT_CS  == 14 -> CS
// TFT_RST == 33 -> RST
// TFT_DC  == 27 -> A0
// MOSI    == 23 -> SDA
// SCL     == 18 -> SCK


## Functions to test / Find API

```C
tft.drawFastVLine(x, 0, tft.height(), color2);
tft.drawLine(0, tft.height()-1, tft.width()-1, y, color);
tft.drawRect(tft.width()/2 -x/2, tft.height()/2 -x/2 , x, x, color);
tft.fillRect(tft.width()/2 -x/2, tft.height()/2 -x/2 , x, x, color1);
tft.fillCircle(x, y, radius, color);
tft.drawCircle(x, y, radius, color);
tft.drawTriangle(w, y, y, x, z, x, color);
tft.drawRoundRect(x, y, w, h, 5, color);Q
tft.setTextWrap(false);
tft.setTextColor(ST77XX_RED);
tft.setTextSize(1);
tft.print(1234.567);
tft.print(8675309, HEX); // print 8,675,309 out in HEX!
tft.println(" Print HEX!");
tft.println(" ");
```
