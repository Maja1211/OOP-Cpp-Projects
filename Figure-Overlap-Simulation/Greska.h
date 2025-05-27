

#ifndef UNTITLED3_GRESKA_H
#define UNTITLED3_GRESKA_H

#include <exception>
#include <string>
using namespace std;
#include <iostream>
class GreskaOpseg:public exception {
public:
    const char* what() const noexcept override{
        return "Vrsta ili kolona su van opsega.";

    }

};

class GPogresnaPozicija:public exception{
public:
    const char* what() const noexcept override{
        return "Pozicija je van opsega, pa podatak na toj poziciji ne postoji.";

}

};




#endif
