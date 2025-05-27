

#ifndef UNTITLED4_TABELA_H
#define UNTITLED4_TABELA_H
#include <iostream>
#include <string>
using namespace std;
#include "Lista.h"


class Tabela {
private:
    string naziv;
    Lista<string> naziviKolona;
public:
    Tabela(const string& naziv, const Lista<string>& naziviKolona): naziv(naziv), naziviKolona(naziviKolona){}
    const string& vratiNaziv() const{
        return this->naziv;
    }
    const Lista<string>& vratiListuKolona() const{
        return this->naziviKolona;
    }
    bool sadrziKolonu(const string& kolona) const;
    bool sadrziSveKolone(const Lista<string>& listaKolona2) const;

};


#endif
