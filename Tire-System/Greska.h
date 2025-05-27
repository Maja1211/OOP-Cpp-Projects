

#ifndef UNTITLED_GRESKA_H
#define UNTITLED_GRESKA_H

#include <iostream>
#include <string>
#include <exception>
using namespace std;
class GPogresanIndeks:public exception {
public:
    const char* what() const noexcept override{
        return "Indeks je izvan opsega.";
    }
};


#endif
