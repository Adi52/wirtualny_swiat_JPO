//
// Created by abiel on 21.12.2020.
//

#include "../../include/Swiat.h"
#include "../../include/organizmy/Zwierze.h"

Zwierze::Zwierze() {
    znak = 'z';
}

void Zwierze::akcja() {
    if (!this->zamrozony) {
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
    } else {
        this->naJakDlugoZamrozony--;
        if (this->naJakDlugoZamrozony == 0) {
            this->zamrozony = false;
            std::string komunikat =  this->znak + " wraca do gry!";
            swiat->komunikatySpecjalne.push_back(komunikat);
        }
    }
}


void Zwierze::kolizja(Organizm *atakujacy, Organizm *stojacy) {
    if (atakujacy->znak == stojacy->znak) {
        if (swiat->rozmnoz(stojacy)) {
            std::string komunikat =  stojacy->znak + std::string("💞");
            swiat->komunikaty.push_back(komunikat);
        }
    } else {

        if (atakujacy->sila < stojacy->sila) {
            atakujacy->zyje = false;

            std::string komunikat =  stojacy->znak + std::string("⚔") + atakujacy->znak;
            swiat->komunikaty.push_back(komunikat);
        } else {
            stojacy->zyje = false;
            atakujacy->pozX = stojacy->pozX;
            atakujacy->pozY = stojacy->pozY;

            std::string komunikat =  atakujacy->znak + std::string("🔪") + stojacy->znak;
            swiat->komunikaty.push_back(komunikat);
        }
    }
}

