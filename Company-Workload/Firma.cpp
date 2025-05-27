

#include "Firma.h"

Firma::Firma(const std::string &naziv, int provizija) {
    this->naziv=naziv;
    this->provizija=provizija;
}

Firma& Firma::operator+=(const Radnik& r) {
    Node* novi= new Node(r);
    if(!head){
        head=novi;
        tail=novi;
    }else{
        tail->next=novi;
        tail=novi;
    }
    return *this;
}

Firma::~Firma() {
    while(head!=nullptr){
        Node* pom=head;
        head=head->next;
        delete pom;
    }
    tail=nullptr;

}

int Firma::operator*(const Posao& posao) const    {
    int ukupnoSati=0;
    for(Node* pom=head;pom!=nullptr;pom=pom->next){
        ukupnoSati+=*(pom->radnik);
    }
    if(*posao%ukupnoSati!=0){
        return *posao/ukupnoSati+1;
    }else{
        return *posao/ukupnoSati;
    }

}

int Firma::operator+(const Posao &posao) const {
    int sveDnevnice=0;
    for(Node* pom=head;pom!=nullptr;pom=pom->next){
        sveDnevnice+=pom->radnik.operator+();// ili sveDnevnice+=+pom->radnik;
    }
    sveDnevnice=sveDnevnice*this->operator*(posao);
    sveDnevnice+=sveDnevnice*provizija/100;
    return sveDnevnice;
}

int Firma::vratiBrRadnika() const {
    int brRadnika=0;
    for(Node* pom=head;pom!=nullptr;pom=pom->next){
        brRadnika++;
    }
    return brRadnika;
}

int Firma::vratiSumuDnevnica() const {
    int sumaDnevnica=0;
    for(Node* pom=head;pom!=nullptr;pom=pom->next){
        sumaDnevnica+=pom->radnik.operator+();
    }
    return sumaDnevnica;
}

int Firma::vratiSumuSati() const {
    int sumaSati=0;
    for(Node* pom=head;pom!=nullptr;pom=pom->next){
        sumaSati+=pom->radnik.operator*();
    }
    return sumaSati;
}

const string &Firma::vratiNaziv() const {
    return this->naziv;
}







