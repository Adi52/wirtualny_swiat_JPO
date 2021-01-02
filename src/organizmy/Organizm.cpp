//
// Created by abiel on 21.12.2020.
//
#include <iostream>
#include "../../include/organizmy/Organizm.h"


using namespace std;

Organizm::Organizm() {
    sila = 0;
    inicjatywa = 0;
    pozX = 0;
    pozY = 0;

    zamrozony = false;
    naJakDlugoZamrozony = 3;
    zyje = false;
    znak = 'A';
}


void Organizm::umiescWSwiecie(Swiat *nowySwiat) {
    zyje = true;
    swiat = nowySwiat;
}


void Organizm::przypiszWspolrzedne(float x, float y) {
    this->pozX = x;
    this->pozY = y;
}
