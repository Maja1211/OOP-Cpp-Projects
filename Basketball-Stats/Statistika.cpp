#include "Statistika.h"


void Statistika::uvecajBrPokusaja1(int br) {
    this->brPokusaja1+=br;
}

void Statistika::uvecajBrPokusaja2(int br) {
    this->brPokusaja2+=br;
}

void Statistika::uvecajBrPokusaja3(int br) {
    this->brPokusaja3+=br;
}

void Statistika::uvecajBrPogodaka1(int br) {
    this->brPogodaka1+=br;
}

void Statistika::uvecajBrPogodaka2(int br) {
    this->brPogodaka2+=br;
}

void Statistika::uvecajBrPogodaka3(int br) {
    this->brPogodaka3+=br;
}

void Statistika::uvecajBrSkokovaNapad(int br) {
    this->brSkokovaNapad+=br;
}

void Statistika::uvecajBrSkokovaOdbrana(int br) {
    this->brSkokovaOdbrana+=br;
}

void Statistika::uvecajAsistencija(int br) {
    this->brAsistencija+=br;
}

const Kosarkas* Statistika::vratiKosarkasa() const {
    return this->kosarkas;
}

int Statistika::sviPoeni() const {
    return (this->vratiBrPogodaka1()+(this->vratiBrPogodaka2()*2)+(this->vratiBrPogodaka3()*3));
}

int Statistika::sviSkokovi() const {
    return this->vratiBrSkokovaNapad()+this->vratiBrSkokovaOdbrana();
}

int Statistika::dohvatiAsistencije() const {
    return this->brAsistencija;
}

int Statistika::vratiBrPokusaja1() const {
    return this->brPokusaja1;
}

int Statistika::vratiBrPokusaja2() const {
    return this->brPokusaja2;
}

int Statistika::vratiBrPokusaja3() const {
    return this->brPokusaja3;
}

int Statistika::vratiBrPogodaka1() const {
    return this->brPogodaka1;
}

int Statistika::vratiBrPogodaka2() const {
    return this->brPogodaka2;
}

int Statistika::vratiBrPogodaka3() const {
    return this->brPogodaka3;
}

int Statistika::vratiBrSkokovaNapad() const {
    return this->brSkokovaNapad;
}

int Statistika::vratiBrSkokovaOdbrana() const {
    return this->brSkokovaOdbrana;
}

