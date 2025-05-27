#include <iostream>
#include "Lista.h"
#include "Greska.h"
#include "Naredba.h"
#include "NaredbaSelekcije.h"
#include "SelektorKolona.h"
#include "Selektor.h"
#include "Tabela.h"

int main() {
    try {
        Lista<string> kolone;
        kolone += "Kolona1";
        kolone += "Kolona2";
        Tabela tabela("Tabela1", kolone);

        SelektorKolona selector(kolone);
        NaredbaSelekcije naredbaSelekcije(tabela, selector);
        cout << naredbaSelekcije.tekstualniopis() <<endl;
    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }
}

