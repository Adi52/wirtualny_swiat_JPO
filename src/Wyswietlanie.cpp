//
// Created by abiel on 22.12.2020.
//
#include <iostream>


#include "../include/Wyswietlanie.h"

using namespace std;

Wyswietlanie::Wyswietlanie(int _wysokosc, int _szerokosc) {
    wysokosc = _wysokosc;
    szerokosc = _szerokosc;
}



void Wyswietlanie::wyswietlAkcje(vector<string> komunikaty) {


    cout << "\n╔";
    for (auto i=0; i<40; i++) {
        cout << "═";
    }
    cout << "╗\n";
    cout << "║               ⚔ Akcja ⚔:               ║";
    cout << "\n╚";
    for (auto i=0; i<40; i++) {
        cout << "═";
    }
    cout << "╝";

    int counter = 0;

    for (auto komunikat : komunikaty) {
        if (counter % 20 == 0) {
            cout << "\n ";
        }
        cout << komunikat;
        counter++;

        if (komunikat.length() == 12) {
            cout << " ";
        } else {
            cout << "   ";
        }

    }
    cout << "\n\n";
}

void Wyswietlanie::wyswietlAkcjeSpecjalne(vector<string> komunikatySpecjalne) {
    cout << "\n╔";
    for (auto i=0; i<40; i++) {
        cout << "═";
    }
    cout << "╗\n";
    cout << "║          ⚔ Akcja specjalna ⚔:          ║";
    cout << "\n╚";
    for (auto i=0; i<40; i++) {
        cout << "═";
    }
    cout << "╝";

    for (auto komunikat : komunikatySpecjalne) {
        cout << "\n" << komunikat;
    }
    cout << "\n\n";
}


void Wyswietlanie::wyswietlRunde(int runda) {
    string zeroD = ((runda < 10) ? "0" : "\0"); // Sprawdza czy dodawać 0 przed numerem rundy (aby ładnie wyświeltało ramkę)
    string zeroS = ((runda < 100) ? "0" : "\0"); // Sprawdza czy dodawać 0 przed numerem rundy (aby ładnie wyświeltało ramkę)


    cout << "╔═════════╗\n";
    cout << "║  RUNDA  ║\n";
    cout << "║ 💸 "<< zeroD << zeroS << runda<<"  ║\n";
    cout << "╚═════════╝";
}


void Wyswietlanie::wyswietlPodpis() {
    cout << "╔════════════════════╗\n";
    cout << "║  Adrian Bielinski  ║\n";
    cout << "║    🏆 182605 🏆    ║\n";
    cout << "╚════════════════════╝\n";
}




