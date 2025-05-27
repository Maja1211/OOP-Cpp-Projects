

#ifndef UNTITLED4_NAREDBA_H
#define UNTITLED4_NAREDBA_H
#include "Tabela.h"
#include "Selektor.h"
class Naredba {
protected:
    Tabela tabela;
public:
    Naredba(const Tabela& tabela) : tabela(tabela) {}
    virtual ~Naredba() {}

    virtual string tekstualniopis() const = 0;
    Naredba(const Naredba& naredba) = delete;
    Naredba& operator=(const Naredba& naredba) = delete;
    string operator()() const{
        return tekstualniopis();
    }
    virtual const Selektor& dohvatiSelektor() const=0;

};


#endif
