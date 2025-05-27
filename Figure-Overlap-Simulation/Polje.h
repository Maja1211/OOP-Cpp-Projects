

#ifndef UNTITLED3_POLJE_H
#define UNTITLED3_POLJE_H
#include <iostream>
using namespace std;
#include <string>
#include "Greska.h"
class Polje {
private:
    char kolona;
    int red;
    bool pogodjeno;
public:
    Polje(char kolona, int red):pogodjeno(false){
        if (red < 1 || red > 10 || kolona < 'A' || kolona > 'J') {
            throw GreskaOpseg();
        }
        this->kolona=kolona;
        this->red=red;
    }
    char vratiKolonu() const{
        return this->kolona;
    }
    int vratiRed() const{
        return this->red;
    }
    Polje& dohvatiPolje(int kolona, int red) const{
        Polje* polje=new Polje(kolona+kolona,red+red);
        return *polje;
    }
    bool operator==(const Polje& polje1) const;
    bool naPogodjeno(){
        this->pogodjeno=true;
    }
    bool pogodjenoPolje() const{
        return pogodjeno;
    }


};


#endif
