#include "Sastojak.h"

#ifndef UNTITLED1_SLADAK_H
#define UNTITLED1_SLADAK_H


class Sladak: public Sastojak {

public:
    Sladak(const string& ime, float cena): Sastojak(ime, cena) {}

    Vrsta vrstaSastojka() const {
        return SLAD;
    }

};


#endif //UNTITLED1_SLADAK_H
