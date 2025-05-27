

#ifndef UNTITLED1_LISTA_H
#define UNTITLED1_LISTA_H

#include <iostream>
using namespace std;
#include "Greska.h"
#include <string>

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
public:
    Lista()=default;
    ~Lista(){
        brisi();
    }
    Lista& operator+=(T podatak1);
    int vratiBrCvorova() const{
        return this->broj;
    }
   const T& operator[](int indeks) const;
    T& operator[](int indeks);
   // void promeniPodatak(T novaVrijednost, int indeks);
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
const T& Lista<T>::operator[](int indeks) const{
    if(indeks < 0 || indeks>=broj ) throw GPogresnaPozicija();
    Node*pom = head;
    for(int i=0;i<indeks;i++){
        pom=pom->next;
    }
    return pom->podatak;
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
template<typename T>
T& Lista<T>::operator[](int indeks) {
    if(indeks < 0 || indeks>=broj ) throw GPogresnaPozicija();
    Node*pom = head;
    for(int i=0;i<indeks;i++){
        pom=pom->next;
    }
    return pom->podatak;
}
/*template<typename T>
void Lista<T>::promeniPodatak(T novaVrijednost, int indeks) {
    Node* trazeniCvor=this->operator[](indeks);
    trazeniCvor->podatak=novaVrijednost;
}*/




#endif
