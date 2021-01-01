//
// Created by abiel on 21.12.2020.
//

#include "../../include/Swiat.h"
#include "../../include/organizmy/Zwierze.h"

Zwierze::Zwierze() {
    znak = 'z';

}

void Zwierze::akcja() {
    // Poruszanie się zwierzęcia
    int x, y;
    if (swiat->wolneWokol(this->pozX, this->pozY)) {

        do {
            int kierunek = swiat->losujKierunek();
            x = 0;
            y = 0;

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
        } while (swiat->miejsceZajete(this->pozX + x, this->pozY + y));



        swiat->idz(this, x, y);
    }
}

