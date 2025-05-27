

#ifndef UNTITLED28_RADNIK_H
#define UNTITLED28_RADNIK_H
#include <iostream>
#include <string>
using namespace std;

class Radnik {
private:
    int plataPoSatu;
    int sati;
public:
    Radnik(int plataPoSatu, int sati);
    int operator*() const;
    int operator+() const;
};


#endif //UNTITLED28_RADNIK_H
