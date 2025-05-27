#include "Sastojak.h"
#include "Greska.h"
#ifndef UNTITLED1_LISTA_H
#define UNTITLED1_LISTA_H

template<typename T>  //dodajemo kada klasa sadrzi podatke nekog tipa, ali ne kaze kog tipa i kada imamo template klasu tijela metofa ne pisemo u cpp fajlu
class Lista {
private:
    struct Node{
        T podatak;
        int vrednost;
        Node* next;
        Node(T podatak, int vrednost): podatak(podatak), vrednost(vrednost), next(nullptr){}
    };
    Node* head=nullptr;
    Node* tail=nullptr;
    int brcvorova;
    mutable Node* tekuci; //imamo tekuci element liste sa mogucnoscu promjene njegove vrijednosti
public:
    Lista(){
        head=tail=tekuci=nullptr;
        brcvorova=0;
    }
    Lista(const Lista& l)=delete;
    Lista& operator=(const Lista& l)=delete;
    ~Lista(){
        while(head){
            Node* pom=head;
            head=head->next;
            delete pom;
        }
        tail=tekuci=nullptr;
    }
    Lista& dodajNovi(T podatak1, int vrednost1);
    int vratiBrCvorova() const{
        return this->brcvorova;
    }
    void postaviTekuciNaPrvi() const {
        tekuci=head;
    }
    void pstaviNaSled() const{  //posto je tekuci mutable mozemo staviti const na kraju settera
        if(tekuci!=nullptr){
            tekuci=tekuci->next;
        }
    }
    bool daLiPostoji() const {
        return tekuci!=nullptr;
    }
    T dohvatiPodatak() const {
        if(tekuci==nullptr) throw GNemaTekuci();
        return tekuci->podatak;

    }
    int vratiVrednost() const{
        if(tekuci==nullptr) throw GNemaTekuci();
        return tekuci->vrednost;
    }

};
//ovdje se pise tijelo metoda kada je klasa template
 template<typename T>
 Lista<T>& Lista<T>::dodajNovi(T podatak1, int vrednost1) {
     Node* novi=new Node(podatak1, vrednost1);
     if(head==nullptr){
         head=novi;
     }else{
         tail->next=novi;
     }
     tail=novi;
     brcvorova++;
     return *this;
 }


#endif //UNTITLED1_LISTA_H
