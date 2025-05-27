

#ifndef UNTITLED_GUMAZASVESEZONE_H
#define UNTITLED_GUMAZASVESEZONE_H

#include "Guma.h"
class GumaZaSveSezone:public Guma{
public:
    GumaZaSveSezone(double sirina, double visina, double precnik, double dubina, double cijena, const Vreme& vrijeme):
            Guma(sirina,visina,precnik,dubina,cijena,vrijeme){}
    char vratiOznaku() const{
        return 'A';
    }
    bool zadovoljavajucaDubina() const{
        if(vratiDubinu()>=4){
            return true;
        }else{
            return false;
        }
    }

};


#endif
