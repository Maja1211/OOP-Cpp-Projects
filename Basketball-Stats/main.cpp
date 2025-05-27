#include <iostream>
#include "Statistika.h"
#include "Kosarkas.h"
using namespace std;

int main() {
    Kosarkas kosarkas1("Pavle", 25, Kosarkas::PG);
    Kosarkas kosarkas2("Luka", 22, Kosarkas::SF);
    kosarkas2.promeniPoziciju(Kosarkas::C);
    cout<<kosarkas1<<endl<<kosarkas2<<endl;
    Statistika statistikaKosarkasa(&kosarkas1,6,8,6,5,5,3,10,12,7);
    statistikaKosarkasa.uvecajAsistencija(2);
    statistikaKosarkasa.uvecajBrSkokovaOdbrana();
    statistikaKosarkasa.uvecajBrSkokovaNapad();
    statistikaKosarkasa.uvecajBrPogodaka3(2);
    cout<<statistikaKosarkasa;












}
