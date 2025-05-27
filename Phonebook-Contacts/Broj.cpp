


#include "Broj.h"
Broj::Broj(const std::string &kod, const std::string &pozivniBr, const std::string &korisnickiBr) {
    this->kod=kod;
    this->pozivniBr=pozivniBr;
    this->korisnickiBr=korisnickiBr;
}

bool Broj::operator==(const Broj &broj) {
    if(vratiKod()==broj.vratiKod() && vratiPozivniBr() == broj.vratiPozivniBr() && vratiKorisnickiBr() == broj.vratiKorisnickiBr()){
        return true;
    }
    else{
        return false;
    }
}

const string &Broj::vratiKod() const {
    return kod;
}
const string &Broj::vratiPozivniBr() const {
    return pozivniBr;
}

const string &Broj::vratiKorisnickiBr() const {
    return korisnickiBr;
}
