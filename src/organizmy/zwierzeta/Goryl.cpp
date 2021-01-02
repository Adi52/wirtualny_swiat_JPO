//
// Created by abiel on 23.12.2020.
//

#include "../../../include/organizmy/zwierzeta/Goryl.h"

Goryl::Goryl() {
    sila = 12;
    inicjatywa = 8;
    znak = "🦧";
    wykonanoZabojstwoWilka = true;
}

Organizm *Goryl::dziecko() {
    return new Goryl();
}

void Goryl::kolizja(Organizm *atakujacy, Organizm *stojacy) {
    // Jest najsilniejszy w swiecie, ale nie jest w stanie się rozmnażać
    // nienawidzi wilków - zabija wszystkie wokół siebie;

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

        if (stojacy->znak == "🌿") {
            stojacy->kolizja(atakujacy, stojacy);
        }
    }

    wykonanoZabojstwoWilka = true;

    if (swiat->dajOgranizmNaPolu(this->pozX+1, this->pozY)
        && swiat->dajOgranizmNaPolu(this->pozX+1, this->pozY)->znak == "🐺") {
        zabijWilka(swiat->dajOgranizmNaPolu(this->pozX+1, this->pozY));
    }
    if (swiat->dajOgranizmNaPolu(this->pozX-1, this->pozY)
        && swiat->dajOgranizmNaPolu(this->pozX-1, this->pozY)->znak == "🐺") {
        zabijWilka(swiat->dajOgranizmNaPolu(this->pozX-1, this->pozY));
    }
    if (swiat->dajOgranizmNaPolu(this->pozX, this->pozY+1)
        && swiat->dajOgranizmNaPolu(this->pozX, this->pozY+1)->znak == "🐺") {
        zabijWilka(swiat->dajOgranizmNaPolu(this->pozX, this->pozY+1));
    }
    if (swiat->dajOgranizmNaPolu(this->pozX, this->pozY-1)
        && swiat->dajOgranizmNaPolu(this->pozX, this->pozY-1)->znak == "🐺") {
        zabijWilka(swiat->dajOgranizmNaPolu(this->pozX, this->pozY-1));
    }
}

void Goryl::zabijWilka(Organizm *organizm) {
    organizm->zyje = false;
    if (wykonanoZabojstwoWilka) {
        wykonanoZabojstwoWilka = false;
        // XD
        std::string komunikat =  std::string("Wściekły ") + this->znak + " zabił wszystkie " + organizm->znak + " wokół siebie!";
        swiat->komunikatySpecjalne.push_back(komunikat);
    }

}




