

#ifndef UNTITLED28_FIRMA_H
#define UNTITLED28_FIRMA_H

#include "Posao.h"
class Firma {
private:
    string naziv;
    int provizija;
    struct Node{
        Radnik radnik;
        Node* next=nullptr;
        Node(Radnik radnik): radnik(radnik),next(nullptr){}
    };
    Node* head=nullptr;
    Node* tail=nullptr;
public:
    Firma(const string& naziv, int provizija);
    Firma& operator+=(const Radnik& r);
    ~Firma();
    Firma(const Firma& firma)=delete;
    Firma& operator=(const Firma& firma)=delete;
    int operator*(const Posao& posao) const;
    int operator+(const Posao& posao) const;
    friend ostream& operator<<(ostream& os, const Firma& firma){
        return os<<firma.vratiNaziv()<<'('<<firma.vratiBrRadnika()<<','<<firma.vratiSumuDnevnica()<<':'<<firma.vratiSumuSati()<<"h)"<<endl;
    }
    int vratiBrRadnika() const;
    int vratiSumuDnevnica() const;
    int vratiSumuSati() const;
    const string& vratiNaziv() const;


};


#endif //UNTITLED28_FIRMA_H
