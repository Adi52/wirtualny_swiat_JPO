//
// Created by abiel on 06.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_SWIAT_H
#define WIRTUALNY_SWIAT_JPO_SWIAT_H

#include <vector>


#include "organizmy/Organizm.h"

class Organizm;

class Swiat {
public:
    Swiat(int, int);
    int wysokosc;
    int szerokosc;

    int runda;

    void poczatkowyStanMapy();
    void wykonajTure();
    void rysujSwiat();
    void dodajOrganizm(Organizm *organizm);


    int podajWysokosc();
    int podajSzerokosc();

    void rysujMape();
    void wypiszOgranizmy();

    int poprawWspolrzendna(float wspolrzedna, char wariant) const;
    int iloscOrganizmow();


private:
    std::vector<Organizm *> organizmy;
};


#endif //WIRTUALNY_SWIAT_JPO_SWIAT_H
