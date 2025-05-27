

#ifndef UNTITLED4_GRESKA_H
#define UNTITLED4_GRESKA_H
#include <string>
#include <iostream>
using namespace std;
#include <exception>

class GNemaTekuci:public exception {
public:
    const char* what() const noexcept override{
        return "Ne postoji tekuci element.";

    }
};

class GNemaKolona:public exception {
public:
    const char* what() const noexcept override{
        return "Selektor koristi kolone koje se ne nalaze u tabeli.";

    }
};



#endif
