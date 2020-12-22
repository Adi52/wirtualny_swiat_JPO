#include <iostream>


#include "include/Swiat.h"
#include "include/Wyswietlanie.h"

using namespace std;






int main() {



    int szerokoscPlanszy;
    int wysokoscPlanszy;
    cout << "Adrian Bielinski 182605" << endl;
    cout << "Podaj szeroksc planszy: ";
    cin >> szerokoscPlanszy;
    cout << "Podaj wysokosc planszy: ";
    cin >> wysokoscPlanszy;

    Swiat swiat(szerokoscPlanszy, wysokoscPlanszy);
    Wyswietlanie wyswietlanie(szerokoscPlanszy, wysokoscPlanszy);

    swiat.poczatkowyStanMapy(); // Generuje organizmy wpisane na stałe

    wyswietlanie.wyswietlRunde(1);
    swiat.rysujMape();

    wyswietlanie.wyswietlAkcje("No to jest nasza pierwsza akcja, chopaki zaczynamy!");
    wyswietlanie.wyswietlPodpis();

    return 0;
}