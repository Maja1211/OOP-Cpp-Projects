

#include "Flota.h"

Flota::Flota(const string &imeFlote) {
    this->imeFlote=imeFlote;
    this->broj=0;
}
void Flota::dodajAvione(Avion *avion) {
    if (broj < 100) {
        avioni[broj] = avion;
        broj++;
    }
}
int Flota::dohvatiBrojAviona() const {
    return this->broj;
}
int Flota::dohvatiBrojPutnika() const {
    int maxBrojPutnika = 0;
    for (int i = 0; i < broj; i++) {
        if (avioni[i]->dohvatiMaxPutnika() > maxBrojPutnika) {
            maxBrojPutnika = avioni[i]->dohvatiMaxPutnika();
        }
    }
    return maxBrojPutnika;
}
Avion* const* Flota::dohvatiAvione() {
    return this->avioni;
}
