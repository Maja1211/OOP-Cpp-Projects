

#ifndef UNTITLED4_NAREDBASELEKCIJE_H
#define UNTITLED4_NAREDBASELEKCIJE_H
#include "Naredba.h"
#include "SelektorKolona.h"
#include "Greska.h"
class NaredbaSelekcije : public Naredba{
private:
    SelektorKolona selektorkolona;
public:
    NaredbaSelekcije(const Tabela& tabela, const SelektorKolona& selektorkolona)
            : Naredba(tabela), selektorkolona(selektorkolona) {
        if (!tabela.sadrziSveKolone(selektorkolona.dohvatiSelektovaneKolone())) {
            throw GNemaKolona();
        }
    }
    const Selektor& dohvatiSelektor() const override {
        return this->selektorkolona ;
    }

    string tekstualniopis() const override {
        return "SELECT " + selektorkolona.TekstualniOpis() + " FROM " + tabela.vratiNaziv();
    }

};


#endif
