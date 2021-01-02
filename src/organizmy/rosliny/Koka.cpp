//
// Created by abiel on 23.12.2020.
//
#include "../../../include/organizmy/rosliny/Koka.h"
#include "../../../include/organizmy/Zwierze.h"

Koka::Koka() {
    znak = "🌿";
}

Organizm *Koka::dziecko() {
    return new Koka();
}

void Koka::kolizja(Organizm *atakujacy, Organizm *stojacy) {
    //Zwierze, które zjadło tę roślinę w następnej kolejce ma dodatkowy ruch.
    std::string komunikat =  atakujacy->znak + std::string(" po zjedzeniu ") + stojacy->znak + " w następnej turze będzie miał dodatkowy ruch!";
    swiat->komunikatySpecjalne.push_back(komunikat);

    reinterpret_cast<Zwierze &>(atakujacy).dajPodwojnyRuch();
    Roslina::kolizja(atakujacy, stojacy);
}

