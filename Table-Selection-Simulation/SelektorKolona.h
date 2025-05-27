

#ifndef UNTITLED4_SELEKTORKOLONA_H
#define UNTITLED4_SELEKTORKOLONA_H

#include "Selektor.h"
class SelektorKolona:public Selektor {
public:
    SelektorKolona(const Lista<string>& selektovaneKolone)
            : Selektor(selektovaneKolone) {}
    string TekstualniOpis() const{
        return dohvatiSelektovaneKolone().dohvatiTekstualniOpis(", ");
    }

};


#endif
