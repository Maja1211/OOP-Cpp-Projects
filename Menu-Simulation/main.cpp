#include <iostream>
#include "Jelovnik.h"
#include "Jelo.h"
#include "Generator.h"
#include "GlavnoJelo.h"
#include "Predjelo.h"
#include "Dezert.h"
#include "Slan.h"
#include "Sladak.h"
#include "Neut.h"
#include "Greska.h"

int main() {

    Jelo* j1=new Predjelo("Sendvic");
    Jelo* j2=new GlavnoJelo("Gulas");
    Jelo* j3=new Dezert("Kolac");
    j1->postaviProcenat(10.3);
    j1->postaviSat(10);
    j2->postaviProcenat(3.5);
    j2->postaviSat(21);
    j3->postaviProcenat(12.8);
    j3->postaviSat(15);
try{
    j1->dodajSastojak(new Slan("Hleb", 50), 200);
    j1->dodajSastojak(new Slan("Sunka", 180), 500);

    j2->dodajSastojak(new Neut("Meso", 300), 600);
    j2->dodajSastojak(new Neut("Krompir", 1000), 900);

    j3->dodajSastojak(new Sladak("Cokolada", 300), 400);
    j3->dodajSastojak(new Sladak("Badem", 500), 600);

    Jelovnik mojJelovnik;
    mojJelovnik.dodajNovi(j1, 200).dodajNovi(j2,150).dodajNovi(j3,100);
    Generator mojGenerator(&mojJelovnik);

    mojGenerator.napraviDnevniMeni(9);
    cout<<mojGenerator<<endl;

}
catch(exception& e){
    cout<<e.what()<<endl;
}
delete j2;
delete j3;
delete j1;

}
