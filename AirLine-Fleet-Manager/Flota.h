#include <iostream>
#include <string>
#include "Avion.h"
#include "Pilot.h"
#ifndef UNTITLED21_FLOTA_H
#define UNTITLED21_FLOTA_H


class Flota {
private:
    string imeFlote;
    Avion* avioni[100];
    int broj;

public:
    Flota(const string& imeFlote);

    void dodajAvione(Avion* avion);

    int dohvatiBrojAviona() const;

    int dohvatiBrojPutnika() const;

    Avion* const* dohvatiAvione();



    void pisi() const {  cout << "Flota: " << imeFlote << endl;
    for (int i = 0; i < broj; i++) {
        avioni[i]->pisi();
        cout << endl;
    }
    }
};


#endif
