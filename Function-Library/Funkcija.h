

#ifndef UNTITLED1_FUNKCIJA_H
#define UNTITLED1_FUNKCIJA_H
#include "Lista.h"
#include "Parametar.h"
#include "Argument.h"
class Funkcija {
private:
    string ime;
    Lista<Parametar> lista;
public:
    Funkcija(string ime):ime(ime){}
    int dohvatiBrParametara() const{
        return lista.vratiBrCvorova();
    }
    Parametar dohvatiPodatak(int indeks) const{
        return lista[indeks];
    }
    const string& vratiIme() const{
        return this->ime;
    }
    void dodajParametar(const Parametar& novi){
        lista+=novi;
    }
    friend ostream& operator<<(ostream& os, const Funkcija& funkcija){
        os<<funkcija.vratiIme()<<'(';
        for(int i=0;i<funkcija.dohvatiBrParametara();i++){
            if(i<funkcija.dohvatiBrParametara()-1){
                os<<funkcija.dohvatiPodatak(i)<<", ";
            }else{
                os<<funkcija.dohvatiPodatak(i);
            }
        }
        os<<')'<<endl;
        return os;
    }

};


#endif
