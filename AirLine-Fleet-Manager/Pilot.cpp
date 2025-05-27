
#include "Pilot.h"

Pilot::Pilot(const string &imePilota, int trenutniSat) {
    this->ime=imePilota;
    this->satiLeta=trenutniSat;
    this->naLetu=false;
}

const string& Pilot::dohvatiIme() const {
    return this->ime;
}
string Pilot::dohvatiStatusLeta() const {
    return this->naLetu ? "L" : "N";
}
bool Pilot::povecavanjeSatiLeta(int sati) {
    if (sati >= 0) {
        satiLeta += sati;
        return true;
    }
    return false;
}
void Pilot::stanjeLeta(bool daLiLeti) {
    this->naLetu = daLiLeti;
}
void Pilot::pisi() const {
    cout << ime << "(" << satiLeta << ")-" << dohvatiStatusLeta() << endl;
}