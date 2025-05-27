#include "Sastojak.h"

#ifndef UNTITLED1_NEUT_H
#define UNTITLED1_NEUT_H


class Neut: public Sastojak {
public:
    Neut(const string& ime, float cena): Sastojak(ime, cena){}
    Vrsta vrstaSastojka() const {
        return NEUT;
    }

};


#endif //UNTITLED1_NEUT_H
