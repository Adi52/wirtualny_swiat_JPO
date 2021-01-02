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
    void poczatkowyStanMapy();
    void wykonajTure();
    void idz(Organizm *organizm, int x, int y);
    void zamrozOgranizm(Organizm *organizm);
    void zabijMartwe();
    void sortujOrganizmyPoIniciatywie();

    bool rozmnoz(Organizm *organizm);
    char losujKierunek();
    int runda;

    Organizm * dajOgranizmNaPolu(int x, int y);

    Wyswietlanie wyswietlanie = Wyswietlanie(wysokosc, szerokosc);
    std::vector<string> komunikaty;
    std::vector<string> komunikatySpecjalne;

protected:
    void dodajOrganizm(Organizm *organizm);



private:
    int wysokosc;
    int szerokosc;
    int iloscOrganizmow();

    void rysujMape();

    bool miejsceZajete(int x, int y);
    bool organizmNaPolu(int x, int y);
    bool punktPozaMapa(int x, int y);
    bool wolneWokol(int x, int y);

    std::vector<Organizm *> organizmy;
};


#endif //WIRTUALNY_SWIAT_JPO_SWIAT_H
