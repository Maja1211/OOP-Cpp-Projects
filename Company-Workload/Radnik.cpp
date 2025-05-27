

#include "Radnik.h"

Radnik::Radnik(int plataPoSatu, int sati) {
    this->plataPoSatu=plataPoSatu;
    this->sati=sati;
}

int Radnik::operator*() const {
    return sati;
}

int Radnik::operator+() const {
    return (plataPoSatu*sati);
}