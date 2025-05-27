#include <iostream>
#include "Lista.h"
#include "Guma.h"
#include "LetnjaGuma.h"
#include "ZimskaGuma.h"
#include "GumaZaSveSezone.h"
#include "Vreme.h"
#include "Greska.h"
int main() {
    try{
        Vreme vrijeme1(12, 30, 25, 7, 2023);
        Vreme vrijeme2(23, 55,31,12,2003);
        cout<<vrijeme1<<endl<<vrijeme2<<endl;
        if(vrijeme2<vrijeme1){
            cout<<"Drugo vrijeme je prije prvog vremena."<<endl;
        }
        if(vrijeme1==vrijeme2){
            cout<<"Vremena su jednaka."<<endl;
        }else{
            cout<<"Vremena nisu jednaka."<<endl;
        }

        vrijeme1+=15;
        vrijeme2+=65;

        cout<<"Nakon dodavanja minuta prvo i drugo vrijeme su sada respektivno: "<<endl<<vrijeme1<<endl<<vrijeme2<<endl;
        Guma* guma1=new LetnjaGuma (200, 50, 15, 10, 12000, vrijeme1);
        Guma* guma2=new ZimskaGuma(200, 50, 15, 10, 12000, vrijeme2);
        Guma* guma3=new GumaZaSveSezone(200, 50, 15, 10, 12000, vrijeme1);
        --(*guma1);
        cout<<"Dubina sare za letnju gumu je sada:"<<guma1->vratiDubinu()<<endl;
        cout<<"Guma 1:"<<*guma1<<"Guma 2:"<<*guma2<<"Guma 3:"<<*guma3;
        if(guma1->zadovoljavajucaDubina()){
            cout<<"Guma ima zadovoljavajucu dubinu sare."<<endl;
        }
        if(*guma1==*guma2){
            cout<<"Gume su identicne."<<endl;
        }
        Lista<Guma*> gume;
        gume.dodajNovi(guma1);
        gume.dodajNovi(guma2);
        gume.dodajNovi(guma3);
        cout<<"Broj elemenata liste je:"<<gume.vratiBrCvorova()<<endl;
        for (int i = 0; i <gume.vratiBrCvorova(); i++) {
            cout << "Element na indeksu " << i << ": " << *gume.operator[](i);
        }
        gume.izbaciElement(1);
        cout<<"Nakon izbacivanja broj elemenata u listi je: "<<gume.vratiBrCvorova()<<endl;

        cout<<"Sada izbaci element na poziciji 5:"<<endl;
        gume.izbaciElement(5);

    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }
}
