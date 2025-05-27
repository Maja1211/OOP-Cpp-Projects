

#include "Avion.h"

Avion::Avion(const string &imeAviona, int maksPutn) {
    this->ime=imeAviona;
    this->kapetan= nullptr;
    this->kopilot= nullptr;
    this->maxPutnika=maksPutn;
}
bool Avion::postaviKapetana(Pilot *pilot) {
    if (pilot && pilot->dohvatiStatusLeta() == "L" && pilot->dohvatiIme() == "Kapetan" && pilot->povecavanjeSatiLeta(100)) {
       this->kapetan = pilot;
        this->kapetan->stanjeLeta(true);
        return true;
    }
    return false;
}

void Avion::postaviKopilota(Pilot *pilot) {
    if (pilot) {
        this->kopilot = pilot;
        this->kopilot->stanjeLeta(true);
    }
}

const string& Avion::dohvatiIme() const {
    return this->ime;
}

int Avion::dohvatiMaxPutnika() const {
    return maxPutnika;
}

void Avion::pisi() const {
    cout << "AVION:" << ime << " - " << maxPutnika;
}