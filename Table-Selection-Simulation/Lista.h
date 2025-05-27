

#ifndef UNTITLED4_LISTA_H
#define UNTITLED4_LISTA_H

#include <iostream>
using namespace std;
#include <string>
#include "Greska.h"
#include <sstream>
template<typename T>
class Lista {
private:
    void kopiraj(const Lista& lista);
    void premjesti(Lista&& lista);
    void brisi();
    struct Node{
        T podatak;
        Node* next;
        Node(const T& podatak): podatak(podatak), next(nullptr){}
    };
    Node* head=nullptr;
    Node* tail=nullptr;
    int broj=0;
    Node* tekuci=nullptr;
public:
    Lista()=default;
    ~Lista(){
        brisi();
    }
    Lista(const Lista& lista){
        kopiraj(lista);
    }
    Lista(Lista&& lista){
        premjesti(lista);
    }
    Lista& operator=(const Lista& lista){
        if(this!=&lista){
            brisi();
            kopiraj(lista);
        }
        return *this;
    }
    Lista& operator=(Lista&& lista){
        if(this!=&lista){
            brisi();
            premjesti(lista);
        }
        return *this;
    }
    string to_string(const T& vrijednost) const;
    Lista& operator+=(T podatak1);
    Lista& operator+=(const Lista<T>& lista);
    int vratiBrCvorova() const{
        return this->broj;
    }
    void postaviTekuciNaPrvi(){
        this->tekuci=head;
    }
    void postaviNaSled(){
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
    bool daLiJePrazna() const {
        return head == nullptr;
    }
    bool sadrziPodatak(const T& podatak) const;
    string dohvatiTekstualniOpis(const string& separator) const;
};
template<typename T>
string Lista<T>::dohvatiTekstualniOpis(const string& separator) const  {
    string opis;
    Node* pom = head;
    while (pom != nullptr) {
        opis += to_string(pom->podatak);
        if (pom->next != nullptr) {
            opis += separator;
        }
        pom = pom->next;
    }
    return opis;
}
template <typename T>
string Lista<T>:: to_string(const T& vrijednost)const {
    stringstream ss;
    ss << vrijednost;
    return ss.str();
}
template<typename T>
Lista<T>& Lista<T>::operator+=(const Lista<T> &lista)  {
    Node* pom = lista.head;
    while (pom != nullptr) {
        *this += pom->podatak;
        pom = pom->next;
    }
    return *this;
}
template<typename T>
bool Lista<T>::sadrziPodatak(const T &podatak) const {
    Node* pom = head;
    while (pom != nullptr) {
        if (pom->podatak == podatak) {
            return true;
        }
        pom = pom->next;
    }
    return false;
}

template<typename T>
Lista<T>& Lista<T>::operator+=(T podatak1) {
    Node* novi=new Node(podatak1);
    if(head==nullptr){
        head=novi;
    }else{
        tail->next=novi;
    }
    tail=novi;
    broj++;
    return *this;
}
template<typename T>
void Lista<T>::brisi(){
    while(head){
        Node* pom=head;
        head=head->next;
        delete pom;
    }
    tail=nullptr;
    broj=0;
}
template<typename T>
void Lista<T>::kopiraj(const Lista<T>& lista){
    broj =0;
    for(Node*pom=lista.head;pom;pom=pom->next){
        this->operator+=(pom->podatak);
    }
}
template<typename T>
void Lista<T>::premjesti(Lista<T> &&lista) {
    this->broj = lista.broj;
    this->head = lista.head;
    this->tail = lista.tail;
    lista.tail = lista.head = nullptr;
    lista.broj=0;
}


#endif
