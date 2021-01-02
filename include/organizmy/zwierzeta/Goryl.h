//
// Created by abiel on 23.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_GORYL_H
#define WIRTUALNY_SWIAT_JPO_GORYL_H

#include "../Zwierze.h"

class Goryl: public Zwierze {
public:
    Goryl();
    Organizm* dziecko();
    void kolizja(Organizm *atakujacy, Organizm *stojacy);

private:
    void zabijWilka(Organizm *organizm);
    bool wykonanoZabojstwoWilka;
};



#endif //WIRTUALNY_SWIAT_JPO_GORYL_H
