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
    int dlugoscAkcji = 0;
    for (auto komunikat : komunikaty) {
        if (komunikat.length() > dlugoscAkcji) {
            dlugoscAkcji = komunikat.length();
        }
    }


    cout << "\n╔";
    for (auto i=0; i<40; i++) {
        cout << "═";
    }
    cout << "╗\n";
    cout << "║ Akcja: ";
    for (auto i=0; i<31; i++) {
        cout << " ";
    }
    cout << " ║\n";

    for (auto komunikat : komunikaty) {
        cout << "║ " << komunikat;
        if (komunikat.length() == 25) {
            for (auto i=0; i<17; i++) {
                cout << "a";
            }
            cout << "║\n";
        } else {
            for (auto i=0; i<14; i++) {
                cout << " ";
            }
            cout << "║\n";
        }
    }

    cout << "╚";
    for (auto i=0; i<40; i++) {
        cout << "═";
    }
    cout << "╝\n";
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




