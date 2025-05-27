

#include "Posao.h"

Posao::Posao(const std::string &naziv, int satiJedanRadnik, int maksBudzet) {
    this->naziv=naziv;
    this->satiJedanRadnik=satiJedanRadnik;
    this->maksBudzet=maksBudzet;
}

int Posao::operator*() const {
    return satiJedanRadnik;
}
 int Posao::operator+() const {
    return maksBudzet;
}
 const string& Posao::vratiNaziv() const {
    return this->naziv;
}