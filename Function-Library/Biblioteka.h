#include "Funkcija.h"


#ifndef UNTITLED1_BIBLIOTEKA_H
#define UNTITLED1_BIBLIOTEKA_H


class Biblioteka {
private:
    Lista<Funkcija> listaFunkcija;
public:
    Biblioteka()=default;
    void dodajFunkciju(Funkcija& funkcija){
        listaFunkcija+=funkcija;
    }
    Funkcija dohvatiPodatak(int indeks) const {
        return listaFunkcija[indeks];
    }
    friend ostream& operator<<(ostream& os, const Biblioteka& biblioteka){
        for(int i=0;i<biblioteka.listaFunkcija.vratiBrCvorova();i++){
            os<<biblioteka.dohvatiPodatak(i);
        }
        return os;
    }


};


#endif //UNTITLED1_BIBLIOTEKA_H
