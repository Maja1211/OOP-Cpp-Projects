
#include <iostream>
#include <string>
#ifndef UNTITLED21_PILOT_H
#define UNTITLED21_PILOT_H

using namespace std;

class Pilot {
private:
    string ime;
    int satiLeta;
    bool naLetu;

public:
    Pilot(const string& imePilota, int trenutniSat = 0);
    const string& dohvatiIme() const;
    string dohvatiStatusLeta() const;
    bool povecavanjeSatiLeta(int sati);
    void stanjeLeta(bool daLiLeti);
    ~Pilot() {}
    void pisi() const;






};


#endif
