#include "Jelo.h"
#include "Lista.h"

#ifndef INC_2017_ISPIT_OOP1_JELOVNIK_H
#define INC_2017_ISPIT_OOP1_JELOVNIK_H


class Jelovnik:public Lista<Jelo*> {
public:
    Jelovnik():Lista<Jelo*>(){}

};


#endif
