#include <iostream>
#include <string>
#include "Pilot.h"
#include "Avion.h"
#include "Flota.h"

using namespace std;

int main(){
    Pilot pilot1("Pilot1", 200);
    Pilot pilot2("Pilot2", 50);
    Pilot pilot3("Kapetan", 0);

    Avion avion1("Avion1", 150);
    Avion avion2("Avion2", 200);

    Flota flota("Flota 1");

    avion1.postaviKapetana(&pilot3);
    avion1.postaviKopilota(&pilot2);
    avion2.postaviKapetana(&pilot1);

    flota.dodajAvione(&avion1);
    flota.dodajAvione(&avion2);

    flota.pisi();
    int brojAviona = flota.dohvatiBrojAviona();


    cout << "Ukupan broj aviona: " << brojAviona << endl;

    int maxPutnika = 0;
    Avion* maxPutnikaAviona = nullptr;

    for (int i = 0; i < flota.dohvatiBrojAviona(); i++) {
       Avion* trenutniAvion = flota.dohvatiAvione()[i];
        if (trenutniAvion->dohvatiMaxPutnika() > maxPutnika) {
            maxPutnika = trenutniAvion->dohvatiMaxPutnika();
            maxPutnikaAviona = trenutniAvion;
        }
    }

    if (maxPutnikaAviona) {
        cout << "Avion sa najvecim brojem putnika: ";
        maxPutnikaAviona->pisi();
        cout << endl;
    } else {
        cout << "Nema aviona u floti." << endl;
    }



    return 0;
    }



