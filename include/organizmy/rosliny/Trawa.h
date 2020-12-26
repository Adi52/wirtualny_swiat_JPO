//
// Created by abiel on 21.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_TRAWA_H
#define WIRTUALNY_SWIAT_JPO_TRAWA_H


#include "../Roslina.h"

class Trawa: public Roslina {
public:
    Trawa();
    
    Organizm* dziecko();
};


#endif //WIRTUALNY_SWIAT_JPO_TRAWA_H
