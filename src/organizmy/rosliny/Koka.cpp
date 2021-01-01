//
// Created by abiel on 23.12.2020.
//
#include "../../../include/organizmy/rosliny/Koka.h"

Koka::Koka() {
    znak = "🌿";
}

Organizm *Koka::dziecko() {
    return new Koka();
}

