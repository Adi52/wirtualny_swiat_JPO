//
// Created by abiel on 06.12.2020.
//

#include <iostream>

#include <vector>

#include "../include/Wyswietlanie.h"
#include "../include/Swiat.h"
#include "../include/organizmy/zwierzeta/Wilk.h"
#include "../include/organizmy/zwierzeta/Owca.h"
#include "../include/organizmy/rosliny/Trawa.h"

using namespace std;

Swiat::Swiat(int szer, int wys) {
    wysokosc = wys;
    szerokosc = szer;
    runda = 0;
}


int Swiat::podajWysokosc() {
    return wysokosc;
}

int Swiat::podajSzerokosc() {
    return szerokosc;
}

void Swiat::wykonajTure() {


}

void Swiat::rysujSwiat() {


}

void Swiat::dodajOrganizm(Organizm *organizm) {
//    cout << "Dodaje ogranizm " << organizm << endl;
    organizmy.push_back(organizm);
    organizm->umiescWSwiecie(this);
}


int Swiat::poprawWspolrzendna(float wspolrzedna, char wariant) const {
    cout << szerokosc << "<- szerokosc!" << endl;

    int nowaWspolrzedna = (int)round(wspolrzedna);

    if (wariant == 'x' && nowaWspolrzedna > szerokosc){
        return (int)round(nowaWspolrzedna % szerokosc);
    }
    else if (wariant == 'y' && nowaWspolrzedna > wysokosc) {
        return (int)round(nowaWspolrzedna % wysokosc);
    }
    else {
        return nowaWspolrzedna;
    }
}


void Swiat::poczatkowyStanMapy() {
    Organizm * wilk1 = new Wilk();
    wilk1->przypiszWspolrzedne(1, 1);
    dodajOrganizm(wilk1);

    Organizm * wilk2 = new Wilk();
    wilk2->przypiszWspolrzedne(5, 11);
    dodajOrganizm(wilk2);

    Organizm * wilk3 = new Wilk();
    wilk3->przypiszWspolrzedne(6, 4);
    dodajOrganizm(wilk3);

    Organizm * owca1 = new Owca();
    owca1->przypiszWspolrzedne(12, 1);
    dodajOrganizm(owca1);

    Organizm * owca2 = new Owca();
    owca2->przypiszWspolrzedne(1, 5);
    dodajOrganizm(owca2);

    Organizm * trawa1 = new Trawa();
    trawa1->przypiszWspolrzedne(4, 18);
    dodajOrganizm(trawa1);

    Organizm * trawa2 = new Trawa();
    trawa2->przypiszWspolrzedne(11, 13);
    dodajOrganizm(trawa2);
}

int Swiat::iloscOrganizmow() {
    return organizmy.size();
}


void Swiat::wypiszOgranizmy() {
    // raczej zbędne - do testów!
//    for (int i=0; i < iloscOrganizmow(); i++) {
//        cout << organizmy[i]->pozX << ", " << organizmy[i]->pozY <<endl;
//    }
}


void Swiat::rysujMape() {
    // Góra ramki
    cout << "\n╔";
    for (auto i = 0; i < szerokosc; i++) {
        cout << "══";
    }
    cout << "╗\n";
    // koniec góry

    for (auto i = 0; i < wysokosc; i++) {
        cout << "║";
        for (auto j = 1; j < szerokosc+1; j++) {

            for (auto organizm=0; organizm < iloscOrganizmow(); organizm++) {
                if (organizmy[organizm]->pozY == i+1 && organizmy[organizm]->pozX == j) {
                    cout << organizmy[organizm]->znak;
                    goto cnt;                        // Nie chciałem tego używać, może w międzyczasie wymyśle rozwiązanie xD
                }
            }

            cout << "  ";
            cnt:;

        }
        cout << "║\n";
    }

    // dół ramki
    cout << "╚";
    for (auto i = 0; i < szerokosc; i++) {
        cout << "══";
    }
    cout << "╝";



}


