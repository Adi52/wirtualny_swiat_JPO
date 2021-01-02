//
// Created by abiel on 23.12.2020.
//

#include "../../../include/organizmy/zwierzeta/Jez.h"

Jez::Jez() {
    sila = 2;
    inicjatywa = 3;
    znak = "🦔";
}

Organizm *Jez::dziecko() {
    return new Jez();
}

// KOLIZJA: Gdy ginie, tak mocno kaleczy swojego pogromcę, że ten nie może się ruszać przez kolejne dwie tury.

void Jez::kolizja(Organizm *atakujacy, Organizm *stojacy) {
    if (atakujacy->znak == stojacy->znak) {
        if (swiat->rozmnoz(stojacy)) {
            std::string komunikat =  stojacy->znak + std::string("💞");
            swiat->komunikaty.push_back(komunikat);
        }
    } else {
        if (atakujacy->sila < stojacy->sila) {
            atakujacy->zyje = false;
            swiat->zamrozOgranizm(stojacy);

            std::string komunikat =  stojacy->znak + std::string("⚔") + atakujacy->znak;
            std::string komunikat2 =  atakujacy->znak + std::string(" unieruchomił ") + stojacy->znak + " na dwie tury!";
            swiat->komunikaty.push_back(komunikat);
            swiat->komunikatySpecjalne.push_back(komunikat2);

        } else {
            stojacy->zyje = false;
            atakujacy->pozX = stojacy->pozX;
            atakujacy->pozY = stojacy->pozY;

            std::string komunikat =  atakujacy->znak + std::string("🔪") + stojacy->znak;
            swiat->komunikaty.push_back(komunikat);

            if (stojacy->znak == "🌿" || stojacy->znak == "🌱" || stojacy->znak == "🥦") {
                stojacy->kolizja(atakujacy, stojacy);
            }
        }
    }
}