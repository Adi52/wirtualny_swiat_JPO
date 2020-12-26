//
// Created by abiel on 21.12.2020.
//

#include "../../../include/organizmy/zwierzeta/Wilk.h"

Wilk::Wilk() {
    sila = 9;
    inicjatywa = 5;
    znak = "🐺";
}

Organizm *Wilk::dziecko() {
    return new Wilk();
}
