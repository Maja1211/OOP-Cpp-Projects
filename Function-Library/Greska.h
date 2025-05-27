

#ifndef UNTITLED1_GRESKA_H
#define UNTITLED1_GRESKA_H


#include <iostream>
#include <string>
#include <exception>
using namespace std;
class GPogresnaPozicija:public exception {
public:
    const char* what() const noexcept override{
        return "Pozicija je izvan opsega!";
    }
};


#endif
