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
    char losujKierunek();

    bool rozmnoz(Organizm *organizm);

    void zabijMartwe();


    bool wolneWokol(int x, int y);
    bool miejsceZajete(int x, int y);
    bool organizmNaPolu(int x, int y);
    void wypiszOgranizmy(); // raczej do usuniecia.
    bool punktPozaMapa(int x, int y);

    Organizm * dajOgranizmNaPolu(int x, int y);


    int iloscOrganizmow();

    Wyswietlanie wyswietlanie = Wyswietlanie(wysokosc, szerokosc);

    std::vector<string> komunikaty;




private:
    std::vector<Organizm *> organizmy;
};


#endif //WIRTUALNY_SWIAT_JPO_SWIAT_H
