#include <iostream>
#include "Firma.h"
int main() {
    Firma firma("Firma123", 5);

    Radnik radnik1(1000,8);
    Radnik radnik2(1200,8);
    Radnik radnik3(1100,7);
    Radnik radnik4(1500,7);
    Radnik radnik5(1300,8);

    Posao posao("Posao123", 300, 50000);

    firma+=radnik1;
    firma+=radnik2;
    firma+=radnik3;
    firma+=radnik4;
    firma+=radnik5;

    cout<<firma;
    cout<<"Ponuda firme:"<<firma+posao<<endl;
    cout<<"Broj dana potrebnih firmi da uradi celokupan posao angazujuci sve radnike: "<<firma*posao<<endl;
    cout<<"Radnik1 dnevno radi:"<<*radnik1<<" sati, "<<"a njegova dnevnica je: "<<+radnik1<<'.'<<endl;
    cout<<posao;














}

