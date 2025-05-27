#include "Kontakt.h"

Kontakt::Kontakt(const std::string &ime,Broj b) {
    this->ime=ime;
    Node* n=new Node(b);
    this->head=n;
    this->tail=n;
}

const string& Kontakt::vratiIme() const {
    return ime;
}
Kontakt& Kontakt::operator+=(Broj b) {
    Node* n=new Node(b);
    if(head==nullptr){
        head=n;
    }else{
        tail->next=n;
    }
    tail=n;
    return *this;
}

bool Kontakt::operator()(const Broj &broj) {
    for(Node* pom=head;pom!=nullptr;pom=pom->next){
        if(pom->br==broj){
            return true;
        }
    }
    return false;
}

Kontakt::~Kontakt() {
    while(head!=nullptr){
        Node* pom=head;
        head=head->next;
        delete pom;

    }
    tail= nullptr;
}
