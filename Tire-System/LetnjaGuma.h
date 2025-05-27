
#ifndef UNTITLED_LETNJAGUMA_H
#define UNTITLED_LETNJAGUMA_H
#include "Guma.h"

class LetnjaGuma:public Guma {
public:
    LetnjaGuma(double sirina, double visina, double precnik, double dubina, double cijena, const Vreme& vrijeme):
    Guma(sirina,visina,precnik,dubina,cijena,vrijeme){}
    char vratiOznaku() const{
        return 'L';
    }
    bool zadovoljavajucaDubina() const{
        if(vratiDubinu()>=1.6){
            return true;
        }else{
            return false;
        }
    }


};


#endif
