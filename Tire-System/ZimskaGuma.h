

#ifndef UNTITLED_ZIMSKAGUMA_H
#define UNTITLED_ZIMSKAGUMA_H

#include "Guma.h"
class ZimskaGuma : public Guma{
public:
    ZimskaGuma(double sirina, double visina, double precnik, double dubina, double cijena, const Vreme& vrijeme):
            Guma(sirina,visina,precnik,dubina,cijena,vrijeme){}
    char vratiOznaku() const{
        return 'Z';
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
