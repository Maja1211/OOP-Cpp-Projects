

#ifndef UNTITLED4_SELEKTOR_H
#define UNTITLED4_SELEKTOR_H

#include "Lista.h"
class Selektor {
private:
    int id;
    static int identifikator;
    Lista<string> selektovaneKolone;
public:
    Selektor(const Lista<string>& selektovaneKolone): selektovaneKolone(selektovaneKolone){
        id=identifikator++;
    }
    int dohvatiId() const { return id; }
    const Lista<string>& dohvatiSelektovaneKolone() const { return selektovaneKolone; }
    virtual string TekstualniOpis() const=0;
    bool operator==(const Selektor& selektor1) const {
        return this->TekstualniOpis() == selektor1.TekstualniOpis();
    }



};


#endif
