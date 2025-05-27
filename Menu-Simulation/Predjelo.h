#include "Jelo.h"

#ifndef INC_2017_ISPIT_OOP1_PREDJELO_H
#define INC_2017_ISPIT_OOP1_PREDJELO_H


class Predjelo: public Jelo {
public:
    Predjelo(string ime):Jelo(ime){}
    char vrstaJela() const{
        return 'P';
    }
    bool adekvatanSastojak(Sastojak* s) const{
        if(s->vrstaSastojka()==Sastojak::Vrsta::SLAD || s->vrstaSastojka()==Sastojak::Vrsta::NEUT){
            return false;
        }else{
            return true;
        }
    }
    float izracunajCenu() const override {
        if(sat>=9 && sat<=12){
            float rezCena=Jelo::izracunajCenu()*(100-procenat)/100;
            return rezCena;
        }else{
            return Jelo::izracunajCenu();
        }


    }

};


#endif //INC_2017_ISPIT_OOP1_PREDJELO_H
