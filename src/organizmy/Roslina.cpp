//
// Created by abiel on 21.12.2020.
//

#include "../../include/organizmy/Roslina.h"

Roslina::Roslina() {
    znak = 'r';
    sila = 0;
    inicjatywa = 0;
}

void Roslina::akcja() {
    if (rand() % 100 < 10) { // 20% szans na rozprzestrzenienie się
        swiat->rozmnoz(this);
    }
}

void Roslina::kolizja(Organizm *atakujacy, Organizm *stojacy) {

}


