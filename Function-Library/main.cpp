#include <iostream>
#include "Parametar.h"
#include "Funkcija.h"
#include "Lista.h"
#include "Biblioteka.h"
#include "Argument.h"
int main() {
    try{
    Parametar p1(Parametar::Tip::INT, "k");
    Parametar p2(Parametar::Tip::INT, "p");
    Parametar p3(Parametar::Tip::FLOAT, "a");
    Parametar p4(Parametar::Tip::FLOAT, "s");
    Parametar p5(Parametar::Tip::STRING, "d");
    Parametar p6(Parametar::Tip::STRING, "v");

    Funkcija funkc1("funkc1");
    funkc1.dodajParametar(p1);
    funkc1.dodajParametar(p2);
    funkc1.dodajParametar(p3);

    Funkcija funkc2("funkc2");
    funkc2.dodajParametar(p4);
    funkc2.dodajParametar(p5);

    Funkcija funkc3("funkc3");
    funkc3.dodajParametar(p6);

    Biblioteka biblioteka;
    biblioteka.dodajFunkciju(funkc1);
    biblioteka.dodajFunkciju(funkc2);
    biblioteka.dodajFunkciju(funkc3);

    if(p1==p2){
        cout<<"Parametri p1 i p2 su jednaki."<<endl;
    }else{
        cout<<"Parametri p1 i p2 nisu jednaki."<<endl;
    }

    cout<<"Prvi parametar je:"<<p1<<endl;
    cout<<"Biblioteka:"<<endl<<biblioteka;
    cout<<"Na poziciji 1 u biblioteci je funkcija: "<<biblioteka.dohvatiPodatak(1);
    cout<<"Na poziciji 5 u biblioteci je funkcija: "<<biblioteka.dohvatiPodatak(5);
    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }
}
