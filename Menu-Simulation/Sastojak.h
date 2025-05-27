#include <iostream>
#include <string>

#ifndef UNTITLED1_SASTOJAK_H
#define UNTITLED1_SASTOJAK_H
using namespace std;

class Sastojak {
public:
    enum Vrsta{SLAN, SLAD, NEUT};

private:
    string ime;
    float cena;

public:
    Sastojak(const string& ime, float cena): ime(ime), cena(cena){}
    virtual Vrsta vrstaSastojka() const=0;
    virtual ~Sastojak(){}

    friend ostream& operator<<(ostream& os, const Sastojak& s){
        return os<<s.ime<<'-'<<s.cena<<"/kg";
    }

    double konacnaCena(float kolicina) const{
        return this->cena*kolicina/1000;
    }





};


#endif //UNTITLED1_SASTOJAK_H
