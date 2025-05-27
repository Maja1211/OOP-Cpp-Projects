

#ifndef UNTITLED25_KOSARKAS_H
#define UNTITLED25_KOSARKAS_H
#include <iostream>
#include <string>

using namespace std;

class Kosarkas {
public:
    enum Pozicija{PG,SG,SF,PF,C};


private:
    static string pozicije[];
    string ime;
    int godine;
    Pozicija p;

public:
    Kosarkas(const string& ime, int godine, Pozicija p);
    const string& vratiIme() const;
    int vratiGodine() const;
    Pozicija vratiPoziciju() const;
    void promeniPoziciju(Pozicija pozicija);
    Kosarkas(const Kosarkas& k)=delete;
    Kosarkas& operator=(const Kosarkas& k)=delete;
    friend ostream& operator<<(ostream& os, const Kosarkas& k ){
        os<<k.vratiIme()<<" ("<<k.vratiGodine()<<"):"<<pozicije[k.vratiPoziciju()];
        return os;
    }
    ~Kosarkas(){}

};


#endif //UNTITLED25_KOSARKAS_H
