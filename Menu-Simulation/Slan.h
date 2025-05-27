#include "Sastojak.h"

#ifndef UNTITLED1_SLAN_H
#define UNTITLED1_SLAN_H


class Slan: public Sastojak {
public:
    Slan(const string& ime, float cena): Sastojak(ime, cena) {}
    Vrsta vrstaSastojka() const {
        return SLAN;
    }

};


#endif //UNTITLED1_SLAN_H
