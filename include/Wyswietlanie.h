//
// Created by abiel on 22.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_WYSWIETLANIE_H
#define WIRTUALNY_SWIAT_JPO_WYSWIETLANIE_H

#include <iostream>
#include <vector>

using namespace std;

class Wyswietlanie {
public:
    Wyswietlanie(int _wysokosc, int _szerokosc);

    int wysokosc;
    int szerokosc;

    void wyswietlAkcje(vector<string> komunikaty);
    void wyswietlPodpis();
    void wyswietlRunde(int);

};



#endif //WIRTUALNY_SWIAT_JPO_WYSWIETLANIE_H
