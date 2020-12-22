//
// Created by abiel on 21.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_ORGANIZM_H
#define WIRTUALNY_SWIAT_JPO_ORGANIZM_H

#include <string>

#include "../Swiat.h"

class Swiat;

class Organizm {
public:
    Organizm();
    int sila;
    int inicjatywa;
    int pozX;
    int pozY;

    bool zyje;
    std::string znak;

    void umiescWSwiecie(Swiat *swiat);
    void przypiszWspolrzedne(float x, float y);

//    virtual void akcja() = 0;
//    virtual void kolizja() = 0;
//    virtual void rysuj();

protected:
    Swiat *swiat;

};

#endif //WIRTUALNY_SWIAT_JPO_ORGANIZM_H