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
    int x, y;

    int kierunek = swiat->losujKierunek();
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


void Zwierze::kolizja(Organizm *atakujacy, Organizm *stojacy) {

    if (atakujacy->znak == stojacy->znak) {
        swiat->rozmnoz(stojacy);

        std::string komunikat =  std::string("Organizm ") + stojacy->znak + " rozmnaza sie!";
        swiat->komunikaty.push_back(komunikat);
    } else {

        if (atakujacy->sila < stojacy->sila) {
            atakujacy->zyje = false;

            std::string komunikat =  std::string("Organizm ") + stojacy->znak + " zabija " + atakujacy->znak;
            swiat->komunikaty.push_back(komunikat);
        } else {
            stojacy->zyje = false;

            std::string komunikat =  std::string("Organizm ") + atakujacy->znak + " zabija " + stojacy->znak;
            swiat->komunikaty.push_back(komunikat);
        }
    }
}

