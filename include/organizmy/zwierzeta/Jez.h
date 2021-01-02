//
// Created by abiel on 23.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_JEZ_H
#define WIRTUALNY_SWIAT_JPO_JEZ_H

#include "../Zwierze.h"

class Jez: public Zwierze {
public:
    Jez();

    Organizm* dziecko();
    void kolizja(Organizm *atakujacy, Organizm *stojacy);
};



#endif //WIRTUALNY_SWIAT_JPO_JEZ_H
