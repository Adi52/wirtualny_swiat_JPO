//
// Created by abiel on 23.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_LIS_H
#define WIRTUALNY_SWIAT_JPO_LIS_H

#include "../Zwierze.h"

class Lis: public Zwierze {
public:
    Lis();
    Organizm* dziecko();
    void akcja();
};



#endif //WIRTUALNY_SWIAT_JPO_LIS_H
