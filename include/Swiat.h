//
// Created by abiel on 06.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_SWIAT_H
#define WIRTUALNY_SWIAT_JPO_SWIAT_H

#include <vector>

#include "Wyswietlanie.h"
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
    void rysujMape();
    void dodajOrganizm(Organizm *organizm);
    void idz(Organizm *organizm, int x, int y);


    int podajWysokosc();
    int podajSzerokosc();

    bool organizmNaPolu(int x, int y);
    void wypiszOgranizmy(); // raczej do usuniecia.

    int poprawWspolrzendna(float wspolrzedna, char wariant) const;
    int iloscOrganizmow();

    Wyswietlanie wyswietlanie = Wyswietlanie(wysokosc, szerokosc);



private:
    std::vector<Organizm *> organizmy;
};


#endif //WIRTUALNY_SWIAT_JPO_SWIAT_H
