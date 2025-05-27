#include <iostream>

using namespace std;

#ifndef UNTITLED1_GRESKA_H
#define UNTITLED1_GRESKA_H


class GNemaTekuci {
public:
    friend ostream& operator<<(ostream& os,const GNemaTekuci& g){
        return os<<"Ne postoji tekuci element!"<<endl;
    }

};

class GPogresnaVrsta {
public:
    friend ostream& operator<<(ostream& os, const GPogresnaVrsta& g){
        return os<<"Pogresna vrsta sastojka!"<<endl;
    }
};


#endif //UNTITLED1_GRESKA_H
