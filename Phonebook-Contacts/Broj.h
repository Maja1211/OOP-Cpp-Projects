
#ifndef UNTITLED27_BROJ_H
#define UNTITLED27_BROJ_H


#include <iostream>
#include <string>

using namespace std;

class Broj {
private:
    string kod;
    string pozivniBr;
    string korisnickiBr;
public:
    Broj(const string& kod, const string& pozivniBr, const string& korisnickiBr);
    bool operator==(const Broj& broj);
    const string& vratiKod() const;
    const string& vratiPozivniBr() const;
    const string& vratiKorisnickiBr() const;
    friend ostream& operator<<(ostream& os, const Broj& br){
        os << '+' << br.vratiKod() << ' ' << br.vratiPozivniBr() << ' ' << br.vratiKorisnickiBr();
        return os;
    }


};



#endif //UNTITLED27_BROJ_H
