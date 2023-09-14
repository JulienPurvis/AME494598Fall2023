#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>


TTGOClass *ttgo;

void setup()
{
    Serial.begin(115200);
    ttgo = TTGOClass::getWatch();
    ttgo->begin();
    ttgo->openBL();

    ttgo->tft->fillScreen(TFT_RED);
    ttgo->tft->setTextColor(TFT_BLUE, TFT_WHITE);
    ttgo->tft->setTextFont(4);
    ttgo->tft->drawString("Julien P.",  80, 120);
}

void loop (){
}