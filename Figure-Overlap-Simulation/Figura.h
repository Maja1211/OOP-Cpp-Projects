

#ifndef UNTITLED3_FIGURA_H
#define UNTITLED3_FIGURA_H
#include "Lista.h"
#include "Polje.h"
class Figura:public Lista<Polje> {
protected:
    Polje centar;
    Lista<Polje> listaPolja;
public:
    Figura(Polje centar):centar(centar), Lista<Polje>() {}
    const Lista<Polje>& vratiListu() const{
        return this->listaPolja;
    }
    bool gadjanje(Polje polje1);
    virtual Figura* kopija() const=0;
    virtual char vratiOznaku() const=0;
    bool cijelaPogodjena() const;
    bool operator&(const Figura& figura1);
    bool operator==(const Figura& figura1) const;




};


#endif
