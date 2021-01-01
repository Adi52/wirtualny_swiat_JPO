//
// Created by abiel on 23.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_MLECZ_H
#define WIRTUALNY_SWIAT_JPO_MLECZ_H
#include "../Roslina.h"

class Mlecz: public Roslina {
public:
    Mlecz();

    Organizm* dziecko();
    void akcja();
};

#endif //WIRTUALNY_SWIAT_JPO_MLECZ_H
