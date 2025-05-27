

#ifndef UNTITLED27_KONTAKT_H
#define UNTITLED27_KONTAKT_H


#include "Broj.h"

class Kontakt {
private:
    string ime;
    struct Node{
        Broj br;
        Node* next;
        Node(Broj& b): br(b), next(nullptr) {}

    };
    Node* head=nullptr;
    Node* tail=nullptr;

public:
    Kontakt(const string& ime, Broj b);
    const string& vratiIme() const;
    Kontakt& operator+=(Broj b);
    bool operator()(const Broj& broj);
    friend ostream& operator<<(ostream& os, const Kontakt& k){
        os<<k.vratiIme()<<" (";
        for(Node* pom=k.head; pom!=nullptr; pom=pom->next){
            if(pom->next!=nullptr){
                os<<pom->br<<',';
            }
            else{
                os<<pom->br;
            }
        }
        os<<')'<<endl;
        return os;
    }
    ~Kontakt();
};








#endif
