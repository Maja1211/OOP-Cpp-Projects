#include <iostream>
#include <string>
#include "Pilot.h"
#ifndef UNTITLED21_AVION_H
#define UNTITLED21_AVION_H

using namespace std;

class Avion {
private:
    string ime;
    Pilot* kapetan;
    Pilot* kopilot;
    int maxPutnika;

public:
    Avion(const string& imeAviona, int maksPutn);

    bool postaviKapetana(Pilot* pilot);

    void postaviKopilota(Pilot* pilot);

   const string& dohvatiIme() const;

    int dohvatiMaxPutnika() const;

    ~Avion() {}

    void pisi() const;


};


#endif
