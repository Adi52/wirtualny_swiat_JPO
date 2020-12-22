//
// Created by abiel on 22.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_WYSWIETLANIE_H
#define WIRTUALNY_SWIAT_JPO_WYSWIETLANIE_H

class Wyswietlanie {
public:
    Wyswietlanie(int, int);
    int wysokosc;
    int szerokosc;

    void wyswietlAkcje(std::string);
    void wyswietlPodpis();
    void wyswietlRunde(int);

};



#endif //WIRTUALNY_SWIAT_JPO_WYSWIETLANIE_H
