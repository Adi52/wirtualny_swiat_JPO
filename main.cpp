#include <iostream>
#include <ctime>


#include "include/Swiat.h"
#include "include/Wyswietlanie.h"

using namespace std;






int main() {
    char temp = 'x';

    srand(time(NULL));



    int szerokoscPlanszy;
    int wysokoscPlanszy;
    cout << "Adrian Bielinski 182605" << endl;
    cout << "Podaj szeroksc planszy: ";
    cin >> szerokoscPlanszy;
    cout << "Podaj wysokosc planszy: ";
    cin >> wysokoscPlanszy;

    Swiat swiat(szerokoscPlanszy, wysokoscPlanszy);

    swiat.poczatkowyStanMapy(); // Generuje organizmy wpisane na stałe
    cin.get(temp);
    while(temp == '\n') {
        swiat.wykonajTure();

        cout << endl << "Naciśnij enter aby wykonać następną turę";
        cout << endl << "Aby wyjść wpisz 'q'" << endl;
        cin.get(temp);
    }




    return 0;
}