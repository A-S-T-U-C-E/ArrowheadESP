//
// Created by Szvetlin Tanyi <szvetlin@aitia.ai> on 2020. 04. 06.
//

#ifndef ARROWHEADESP_ARROWHEADESP_H
#define ARROWHEADESP_ARROWHEADESP_H

#ifdef ESP8266
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#endif

#ifdef ESP32
// TODO
#endif

// Library includes
#include <WiFiClientSecure.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

// Header Includes
#include "ArrowheadESPFS.h"

class ArrowheadESP {
private:
    ArrowheadESPFS arrowheadEspFs;
public:
    ArrowheadESP();

    ArrowheadESPFS getArrowheadESPFS();
};


#endif //ARROWHEADESP_ARROWHEADESP_H
