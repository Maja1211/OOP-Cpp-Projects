

#ifndef INC_2017_ISPIT_OOP1_GLAVNOJELO_H
#define INC_2017_ISPIT_OOP1_GLAVNOJELO_H
#include "Jelo.h"

class GlavnoJelo:public Jelo {
public:
    GlavnoJelo(string ime): Jelo(ime){}
    char vrstaJela() const{
        return 'G';
    }
    bool adekvatanSastojak(Sastojak* s) const{
        if(s->vrstaSastojka()==Sastojak::Vrsta::SLAD || s->vrstaSastojka()==Sastojak::Vrsta::SLAN){
            return false;
        }else{
            return true;
        }
    }
    float izracunajCenu() const override {
        if(sat>=20 && sat<=23){
            float rezCena=Jelo::izracunajCenu()*(100+procenat)/100;
            return rezCena;
        }else{
            return Jelo::izracunajCenu();
        }


    }


};


#endif //INC_2017_ISPIT_OOP1_GLAVNOJELO_H
