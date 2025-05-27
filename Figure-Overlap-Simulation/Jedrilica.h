

#ifndef UNTITLED3_JEDRILICA_H
#define UNTITLED3_JEDRILICA_H

#include "Figura.h"
class Jedrilica:public Figura {
public:
    Jedrilica(Polje centar1): Figura(centar1){
        listaPolja.operator+=(centar1);
        listaPolja.operator+=(centar1.dohvatiPolje(1,0));
        listaPolja.operator+=(centar1.dohvatiPolje(1,1));
        listaPolja.operator+=(centar1.dohvatiPolje(-1,0));
        listaPolja.operator+=(centar1.dohvatiPolje(-1,1));
        listaPolja.operator+=(centar1.dohvatiPolje(1,-1));
        listaPolja.operator+=(centar1.dohvatiPolje(-1,-1));

    }
    Jedrilica* kopija() const{
        return new Jedrilica (*this);
    }

    char vratiOznaku() const override{
        return 'H';
    }



};


#endif
