
#include <iostream>
using namespace std;
#include <string>
#ifndef UNTITLED_VREME_H
#define UNTITLED_VREME_H


class Vreme {
private:
    int sati;
    int minuti;
    int dani;
    int meseci;
    int godina;
public:
    Vreme(int sati,int minuti,int dani, int meseci,int godina):sati(sati), minuti(minuti), dani(dani),
    meseci(meseci), godina(godina) {}

    int vratiSate() const{
        return this->sati;
    }
    int vratiMinute() const{
        return this->minuti;
    }
    int vratiDane() const{
        return this->dani;
    }
    int vratiMesece() const{
        return this->meseci;
    }
    int vratiGodine() const{
        return this->godina;
    }
    bool operator==(const Vreme& vreme1) const;
    bool operator<(const Vreme& vreme1) const;
    Vreme& operator+=(int min);
    int brojDanaUMjesecu(int mjesec);
    friend ostream& operator<<(ostream& os, const Vreme& v){
        return os<<v.vratiSate()<<':'<<v.vratiMinute()<<'-'<<v.vratiDane()<<'.'<<v.vratiMesece()<<'.'<<v.vratiGodine()<<'.';
    }



};


#endif
