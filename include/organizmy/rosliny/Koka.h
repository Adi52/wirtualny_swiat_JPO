//
// Created by abiel on 23.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_KOKA_H
#define WIRTUALNY_SWIAT_JPO_KOKA_H
#include "../Roslina.h"

class Koka: public Roslina {
public:
    Koka();

    Organizm* dziecko();
private:
    void kolizja(Organizm *atakujacy, Organizm *stojacy);
};



#endif //WIRTUALNY_SWIAT_JPO_KOKA_H
