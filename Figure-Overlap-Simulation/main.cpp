#include <iostream>
#include "Jedrilica.h"
int main() {
    try{
        Lista<Jedrilica> listaJedrilica;
        listaJedrilica.operator+=(Jedrilica(Polje('C', 5)));
        listaJedrilica.operator+=(Jedrilica(Polje('F', 7)));
        listaJedrilica.operator+=(Jedrilica(Polje('B', 3)));
        listaJedrilica.operator+=(Jedrilica(Polje('I', 9)));
        for (int i = 0; i < listaJedrilica.vratiBrPodataka(); i++) {
            for (int j = i + 1; j < listaJedrilica.vratiBrPodataka(); j++) {
                if (listaJedrilica[i].operator&(listaJedrilica[j])) {
                    cout << "Jedrilica " << i + 1 << " i Jedrilica " << j + 1 << " se preklapaju." << endl;
                }
            }
        }
    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }
}
