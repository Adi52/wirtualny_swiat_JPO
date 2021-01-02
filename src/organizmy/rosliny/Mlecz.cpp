//
// Created by abiel on 23.12.2020.
//

#include "../../../include/organizmy/rosliny/Mlecz.h"

Mlecz::Mlecz() {
    znak = "🌱";
}

Organizm *Mlecz::dziecko() {
    return new Mlecz();
}

void Mlecz::akcja() {
    // Podejmuje trzy próby rozprzestrzeniania w jednej turze
    for (auto i=0; i<3; i++) {
        if (rand() % 100 < 5 && swiat->runda<70) {
            std::string komunikat =  this->znak + std::string("💦");
            swiat->komunikaty.push_back(komunikat);
            swiat->rozmnoz(this);
            break;
        }
    }
}

