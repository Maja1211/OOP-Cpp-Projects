

#ifndef UNTITLED28_POSAO_H
#define UNTITLED28_POSAO_H
#include "Radnik.h"

class Posao {
private:
    string naziv;
    int satiJedanRadnik;
    int maksBudzet;
public:
    Posao(const string& naziv, int satiJedanRadnik, int maksBudzet);
    int operator*() const;
    int operator+() const;
    const string& vratiNaziv() const;

    friend ostream& operator<<(ostream& os,Posao posao){
        return os<<posao.vratiNaziv()<<' '<<+posao<<':'<<*posao<<endl;

    }


};


#endif //UNTITLED28_POSAO_H
