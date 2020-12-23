//
// Created by abiel on 21.12.2020.
//

#include "../../include/Swiat.h"
#include "../../include/organizmy/Zwierze.h"

Zwierze::Zwierze() {
    znak = 'z';

}

void Zwierze::akcja() {

    // Poruszanie się zwierzęcia
    int kierunek = 1 + (rand() % 4);

    int x = 0;
    int y = 0;

    switch (kierunek) {
        case 1:
            y = -1;
            break;
        case 2:
            x = 1;
            break;
        case 3:
            y = 1;
            break;
        case 4:
            x = -1;
            break;
    }

    swiat->idz(this, x, y);

}

