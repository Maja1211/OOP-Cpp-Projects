

#include "Tabela.h"

bool Tabela::sadrziKolonu(const string &kolona) const {
    return naziviKolona.sadrziPodatak(kolona);
}

bool Tabela::sadrziSveKolone(const Lista<string> &listaKolona2) const {
    Lista<string> pom = listaKolona2;
    pom.postaviTekuciNaPrvi();
    while (pom.daLiPostoji()) {
        if (!naziviKolona.sadrziPodatak(pom.dohvatiPodatak())) {
            return false;
        }
        pom.postaviNaSled();
    }
    return true;

}




