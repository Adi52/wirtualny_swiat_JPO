//
// Created by abiel on 21.12.2020.
//

#include "../../../include/organizmy/rosliny/Trawa.h"

Trawa::Trawa() {
    znak = "🥦";
}

Organizm *Trawa::dziecko() {
    return new Trawa();
}

