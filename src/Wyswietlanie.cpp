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



void Wyswietlanie::wyswietlAkcje(std::string akcja) {
    int dlugoscAkcji = akcja.length();

    cout << "\n╔";
    for (auto i=0; i<dlugoscAkcji + 9; i++) {
        cout << "═";
    }
    cout << "╗\n";
    cout << "║ Akcja: " << akcja << " ║\n";
    cout << "╚";
    for (auto i=0; i<dlugoscAkcji + 9; i++) {
        cout << "═";
    }
    cout << "╝\n";
}


void Wyswietlanie::wyswietlRunde(int runda) {
    char zero = (char) ((runda < 10) ? '0' : '\0'); // Sprawdza czy dodawać 0 przed numerem rundy (aby ładnie wyświeltało ramkę)

    cout << "╔═══════╗\n";
    cout << "║ RUNDA ║\n";
    cout << "║ 💸 "<< zero << runda<<" ║\n";
    cout << "╚═══════╝";
}


void Wyswietlanie::wyswietlPodpis() {
    cout << "╔════════════════════╗\n";
    cout << "║  Adrian Bielinski  ║\n";
    cout << "║    🏆 182605 🏆    ║\n";
    cout << "╚════════════════════╝\n";
}






