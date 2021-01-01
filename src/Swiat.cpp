//
// Created by abiel on 06.12.2020.
//

#include <iostream>
#include <vector>
#include "windows.h"

#include "../include/Wyswietlanie.h"
#include "../include/Swiat.h"
#include "../include/organizmy/zwierzeta/Wilk.h"
#include "../include/organizmy/zwierzeta/Owca.h"
#include "../include/organizmy/zwierzeta/Lis.h"
#include "../include/organizmy/rosliny/Trawa.h"
#include "../include/organizmy/rosliny/Mlecz.h"


using namespace std;

Swiat::Swiat(int szer, int wys) {
    wysokosc = wys;
    szerokosc = szer;
    runda = 0;
}

void Swiat::idz(Organizm *organizm, int _x, int _y) {
    int x = organizm->pozX + _x;
    int y = organizm->pozY + _y;

    if (x > szerokosc || x < 1) {
        // Jeżeli natrafi na boczne krawędzie mapy to cofa się o jedno pole do środka mapy (od PIERWOTNEGO pola)
        x -= _x * 2;
    }
    if (y > wysokosc || y < 1) {
        // Tak samo z górnymi i dolnymi krawędziami
        y -= _y*2;
    }


    for (auto organizmIndeks=0; organizmIndeks < iloscOrganizmow(); organizmIndeks++) {
            if (organizmy[organizmIndeks]->pozY == y && organizmy[organizmIndeks]->pozX == x) {
                organizm->kolizja(organizm, organizmy[organizmIndeks]);
                return;
            }
        }

    organizm->przypiszWspolrzedne(x, y);
}


char Swiat::losujKierunek() {
    int kierunek = 1 + (rand() % 4);
    return kierunek;
}

void Swiat::dodajOrganizm(Organizm *organizm) {
//    cout << "Dodaje ogranizm " << organizm << endl;
    organizmy.push_back(organizm);
    organizm->umiescWSwiecie(this);
}


void Swiat::poczatkowyStanMapy() {
    Organizm * wilk1 = new Wilk();
    wilk1->przypiszWspolrzedne(5, 6);
    dodajOrganizm(wilk1);

    Organizm * wilk2 = new Wilk();
    wilk2->przypiszWspolrzedne(5, 11);
    dodajOrganizm(wilk2);

    Organizm * wilk3 = new Wilk();
    wilk3->przypiszWspolrzedne(6, 4);
    dodajOrganizm(wilk3);

    Organizm * lis1 = new Lis();
    lis1->przypiszWspolrzedne(10, 14);
    dodajOrganizm(lis1);

    Organizm * lis2 = new Lis();
    lis2->przypiszWspolrzedne(4, 17);
    dodajOrganizm(lis2);

    Organizm * lis3 = new Lis();
    lis3->przypiszWspolrzedne(12, 9);
    dodajOrganizm(lis3);

    Organizm * owca1 = new Owca();
    owca1->przypiszWspolrzedne(12, 8);
    dodajOrganizm(owca1);

    Organizm * owca2 = new Owca();
    owca2->przypiszWspolrzedne(12, 10);
    dodajOrganizm(owca2);

    Organizm * owca3 = new Owca();
    owca3->przypiszWspolrzedne(10, 5);
    dodajOrganizm(owca3);

    Organizm * owca4 = new Owca();
    owca4->przypiszWspolrzedne(8, 3);
    dodajOrganizm(owca4);

    Organizm * owca5 = new Owca();
    owca5->przypiszWspolrzedne(1, 8);
    dodajOrganizm(owca5);

    Organizm * trawa1 = new Trawa();
    trawa1->przypiszWspolrzedne(4, 18);
    dodajOrganizm(trawa1);

    Organizm * trawa2 = new Trawa();
    trawa2->przypiszWspolrzedne(11, 13);
    dodajOrganizm(trawa2);

    Organizm * mlecz = new Mlecz();
    mlecz->przypiszWspolrzedne(15, 4);
    dodajOrganizm(mlecz);

    Organizm * mlecz2 = new Mlecz();
    mlecz2->przypiszWspolrzedne(5, 18);
    dodajOrganizm(mlecz2);

    Organizm * koka1 = new Mlecz();
    koka1->przypiszWspolrzedne(14, 3);
    dodajOrganizm(koka1);

    Organizm * koka2 = new Mlecz();
    koka2->przypiszWspolrzedne(2, 5);
    dodajOrganizm(koka2);
}

int Swiat::iloscOrganizmow() {
    return organizmy.size();
}


void Swiat::wypiszOgranizmy() {
    // raczej zbędne - do testów!
    for (int i=0; i < iloscOrganizmow(); i++) {
        cout << organizmy[i]->pozX << ", " << organizmy[i]->pozY <<endl;
    }
}


bool Swiat::organizmNaPolu(int x, int y) {
    for (auto organizm=0; organizm < iloscOrganizmow(); organizm++) {
        if (organizmy[organizm]->pozY == y+1 && organizmy[organizm]->pozX == x && organizmy[organizm]->zyje) {
            cout << organizmy[organizm]->znak;
            return true;
        }
    }
    return false;
}

void Swiat::rysujMape() {
    // Góra ramki
    cout << "\n╔";
    for (auto i = 0; i < szerokosc; i++) {
        cout << "══";
    }
    cout << "╗\n";
    // ustawienie organizmow + ramka
    for (auto i = 0; i < wysokosc; i++) {
        cout << "║";
        for (auto j = 1; j < szerokosc+1; j++) {
            if (!organizmNaPolu(j, i)) {
                cout << "  ";
            }
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

void Swiat::wykonajTure() {
    system("cls");
    komunikaty.clear();

    runda++;

    wyswietlanie.wyswietlRunde(runda);

    rysujMape();

    Sleep(10);

    int iloscOrganizmow = organizmy.size();

    for (auto organizm=0; organizm < iloscOrganizmow; organizm++) {
        if (organizmy[organizm]->zyje) {
            organizmy[organizm]->akcja();
        }
    }


    // tu git
    wyswietlanie.wyswietlAkcje(komunikaty);
    wyswietlanie.wyswietlPodpis();
    zabijMartwe();
}

bool Swiat::punktPozaMapa(int x, int y) {
    return (x > szerokosc || x < 1 || y > wysokosc || y < 1);
}

bool Swiat::miejsceZajete(int x, int y) {
    if (punktPozaMapa(x, y)) {
        return true;
    }

    for (auto organizm=0; organizm < iloscOrganizmow(); organizm++) {
        if (organizmy[organizm]->pozY == y && organizmy[organizm]->pozX == x) {
            return true;
        }
    }
    return false;
}

bool Swiat::wolneWokol(int x, int y) {
    return !(miejsceZajete(x - 1, y) && miejsceZajete(x + 1, y)
             && miejsceZajete(x, y - 1) && miejsceZajete(x, y + 1));
}

bool Swiat::rozmnoz(Organizm *organizm) {
    bool naMapie = organizm->pozX >= 0 && organizm->pozX <= szerokosc
            && organizm->pozY >= 0 && organizm->pozY <= wysokosc;

    if (wolneWokol(organizm->pozX, organizm->pozY) && naMapie) {

        int kierunek;
        int nowyX, nowyY;
        int x = 0;
        int y = 0;
        int counter = 0;

        Organizm *nowyOrganizm = organizm->dziecko();

        do {
            kierunek = losujKierunek();
            counter++;
            if (counter == 5) {
                break;
            }
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
            nowyX = organizm->pozX + x;
            nowyY = organizm->pozY + y;
        } while (miejsceZajete(organizm->pozX + x, organizm->pozY + y));


        if (nowyX > szerokosc || nowyX < 1 || nowyY > wysokosc || nowyY < 1) {
            return false;
        }

        nowyOrganizm->przypiszWspolrzedne(nowyX, nowyY);
        dodajOrganizm(nowyOrganizm);
        return true;
    }
    return false;
}


void Swiat::zabijMartwe() {
    // A kto umarł, ten nie żyje
    organizmy.erase(
            std::remove_if(
                    organizmy.begin(),
                    organizmy.end(),
                    [](Organizm* organizm) -> bool {
                        return !organizm->zyje;
                    }
            ),
            organizmy.end()
    );
}


Organizm *Swiat::dajOgranizmNaPolu(int x, int y) {
    for (auto organizm=0; organizm < iloscOrganizmow(); organizm++) {
        if (organizmy[organizm]->pozY == y && organizmy[organizm]->pozX == x) {
            return organizmy[organizm];
        }
    }
    return nullptr;
}
