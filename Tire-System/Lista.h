
#include <iostream>
using namespace std;
#include <string>
#include "Greska.h"
#ifndef UNTITLED_LISTA_H
#define UNTITLED_LISTA_H

template <typename T>
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
    Node* head;
    Node* tail;
    int broj;
public:
    Lista(): head(nullptr), tail(nullptr), broj(0) {}
    ~Lista(){
        brisi();
    }
    Lista& dodajNovi(T podatak1);
    int vratiBrCvorova() const{
        return this->broj;
    }
    T operator[](int indeks) const;
    void izbaciElement(int indeks);
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

};
template<typename T>
Lista<T>& Lista<T>::dodajNovi(T podatak1) {
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
T Lista<T>::operator[](int indeks) const{
    if(indeks < 0 || indeks>=broj ){
        throw GPogresanIndeks();
    }
    Node*pom = head;
    for(int i=0;i<indeks;i++){
        pom=pom->next;
    }
    return pom->podatak;
}

template<typename T>
void Lista<T>::izbaciElement(int indeks) {
    if(indeks < 0 || indeks>=broj ){
        throw GPogresanIndeks();
    }
    if(indeks==0){
        Node* pom=head;
        head=head->next;
        delete pom;
        if (head == nullptr) {
            tail = nullptr;
        }
    }
    else{
    Node* pom=head;
    for(int i=0;i<indeks-1;i++){
        pom=pom->next;
    }
    Node*tmp=pom->next;
    pom->next=tmp->next;
    if(tmp==tail){
        tail=pom;
    }
    delete tmp;
    }
    broj--;
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
    this->broj =lista.broj;
    Node* pom=lista.head;
    while(pom){
        Node* novi= new Node(pom->podatak);
        if(head==nullptr){
            head=novi;
        }else{
            tail->next=novi;
        }
        tail=novi;
        pom=pom->next;
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
