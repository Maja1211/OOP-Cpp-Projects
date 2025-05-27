

#include "Kosarkas.h"

Kosarkas::Kosarkas(const std::string &ime, int godine, Kosarkas::Pozicija p){
    this->ime=ime;
    this->godine=godine;
    this->p=p;

}
string Kosarkas::pozicije[]={"PG", "SG", "SF", "PF", "C"};


const string &Kosarkas::vratiIme() const {
    return ime;
}

int Kosarkas::vratiGodine() const {
    return godine;
}

 Kosarkas::Pozicija Kosarkas::vratiPoziciju() const   {
    return p;
}

void Kosarkas::promeniPoziciju(Pozicija pozicija) {
    this->p=pozicija;

}