

#ifndef INC_2017_ISPIT_OOP1_DEZERT_H
#define INC_2017_ISPIT_OOP1_DEZERT_H
#include "Jelo.h"

class Dezert:public Jelo {
public:
    Dezert(string ime): Jelo(ime){}
    char vrstaJela() const{
        return 'D';
    }
    bool adekvatanSastojak(Sastojak* s) const{
        if(s->vrstaSastojka()==Sastojak::Vrsta::SLAN){
            return false;
        }else{
            return true;
        }
    }

    };


#endif //INC_2017_ISPIT_OOP1_DEZERT_H
