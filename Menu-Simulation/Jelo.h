#include "Lista.h"

#ifndef UNTITLED1_JELO_H
#define UNTITLED1_JELO_H


class Jelo {
private:
    string ime;
    Lista<Sastojak*> lista;
protected:
    float procenat;
    int sat;
public:
    Jelo( string ime): ime(ime), procenat(0), sat(0){}
    void postaviProcenat(float procenat){
        this->procenat=procenat;

    }
    void postaviSat(int sat){
        this->sat=sat;
    }
    virtual bool adekvatanSastojak(Sastojak* s) const = 0;
    void dodajSastojak(Sastojak* sastojak1, int kolicina){
        if(adekvatanSastojak(sastojak1)){
            lista.dodajNovi(sastojak1, kolicina);
        }
        else{
            throw GPogresnaVrsta();
        }
    }
    virtual char vrstaJela() const = 0;
    virtual float izracunajCenu() const {
        float cena=0.0;
        for(lista.postaviTekuciNaPrvi(); lista.daLiPostoji(); lista.pstaviNaSled()){
            cena+=lista.dohvatiPodatak()->konacnaCena(lista.vratiVrednost());
        }
        return cena;
    }
    virtual ~Jelo(){
        for(lista.postaviTekuciNaPrvi(); lista.daLiPostoji(); lista.pstaviNaSled()){
            delete lista.dohvatiPodatak(); //lista.dohvatiPodatak() je zapravo Sastojak*, to je podatak tipa T
        }
    }
    friend ostream& operator<<(ostream& os, const Jelo& jelo){
        os<<jelo.ime<<':'<<jelo.izracunajCenu()<<endl;
        for(jelo.lista.postaviTekuciNaPrvi();jelo.lista.daLiPostoji();jelo.lista.pstaviNaSled()){
            os<<*jelo.lista.dohvatiPodatak()<<':'<<jelo.lista.vratiVrednost()<<endl; //* zato sto u operatorskoj funkciji << u okviru klase sastojak imamo referencu,
            // lista.dohvatiPodatak() je tipa Sastojak*, deferenciramo zato sto operator << prihvata referencu
        }
        return os;
    }

};


#endif //UNTITLED1_JELO_H
