//
// Created by abiel on 23.12.2020.
//
#include "../../../include/organizmy/zwierzeta/Lis.h"


Lis::Lis() {
    sila = 2;
    inicjatywa = 3;
    znak = "🦊";
}

Organizm *Lis::dziecko() {
    return new Lis();
}

void Lis::akcja() {
    //AKCJA: Dobry węch: lis nigdy nie ruszy się na pole zajmowane przez organizm silniejszy niż on
    int dostepneKierunki[4] = {0, 0, 0, 0};

    if (swiat->dajOgranizmNaPolu(this->pozX + 1, this->pozY)) {
        if (swiat->dajOgranizmNaPolu(this->pozX + 1, this->pozY)->sila <= sila) {
            dostepneKierunki[0] = 1;
        }
    }
    if (swiat->dajOgranizmNaPolu(this->pozX - 1, this->pozY)) {
        if (swiat->dajOgranizmNaPolu(this->pozX - 1, this->pozY)->sila <= sila) {
            dostepneKierunki[1] = 2;
        }
    }
    if (swiat->dajOgranizmNaPolu(this->pozX, this->pozY + 1)) {
        if (swiat->dajOgranizmNaPolu(this->pozX, this->pozY + 1)->sila <= sila) {
            dostepneKierunki[2] = 3;
        }
    }
    if (swiat->dajOgranizmNaPolu(this->pozX, this->pozY - 1)) {
        if (swiat->dajOgranizmNaPolu(this->pozX, this->pozY - 1)->sila <= sila) {
            dostepneKierunki[3] = 4;
        }
    }

    int x, y, kierunek;
    int counter = 0;

    do {
        // Wybiera możliwy kierunek
        counter++;
        if (counter == 4) {
            return;
        }
        kierunek = swiat->losujKierunek();
    } while (std::find(std::begin(dostepneKierunki), std::end(dostepneKierunki), kierunek) != std::end(dostepneKierunki));

    x = 0;
    y = 0;

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
        default:
            break;
    }

    swiat->idz(this, x, y);
}