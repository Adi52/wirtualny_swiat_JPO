//
// Created by abiel on 21.12.2020.
//

#ifndef WIRTUALNY_SWIAT_JPO_ZWIERZE_H
#define WIRTUALNY_SWIAT_JPO_ZWIERZE_H

#include "./Organizm.h"


class Zwierze : public Organizm {
public:
    Zwierze();

    void akcja();
    void kolizja(Organizm *atakujacy, Organizm *stojacy);
    void dajPodwojnyRuch();

private:
    bool podwojnyRuch;
};



#endif //WIRTUALNY_SWIAT_JPO_ZWIERZE_H


// moje zwierzeta jeż, lis i jeden mój