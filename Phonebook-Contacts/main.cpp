#include <iostream>
#include "Broj.h"
#include "Kontakt.h"

int main() {
    Broj broj1("381", "62", "4445556");
    Broj broj2("382", "65", "333444");
    Broj broj3("382", "66", "111222");
    Broj broj4("387", "66", "487242");
    Broj broj5("387", "64", "1117772");
    Broj broj6("381", "63", "656274");

    Kontakt kontakt1("Ana", broj1);
    Kontakt kontakt2("Valentina", broj3);
    Kontakt kontakt3("Maja", broj5);

    kontakt1+=(broj2);

    if(broj3==broj4){
        exit(1);
    }else{
        kontakt2+=broj4;
    }

    if(kontakt3(broj6)){
        exit(1);
    }else{
        kontakt3+=broj6;
    }

    cout<<kontakt1<<endl;
    cout<<kontakt2<<endl;
    cout<<kontakt3;



}
