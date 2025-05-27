

#ifndef UNTITLED_GUMA_H
#define UNTITLED_GUMA_H
#include "Vreme.h"

class Guma {
private:
    double sirina;
    double visina;
    double precnik;
    double dubina;
    double cijena;
    Vreme vrijeme;
public:
    Guma(double sirina, double visina, double precnik, double dubina, double cijena, const Vreme& vrijeme) : sirina(sirina), visina(visina),
    precnik(precnik), dubina(dubina), cijena(cijena), vrijeme(vrijeme) {}
    double vratiSirinu() const{
        return this->sirina;
    }
    double VratiVisinu() const{
        return this->visina;
    }
    double vratiPrecnik() const{
        return this->precnik;
    }
    double vratiDubinu() const{
        return this->dubina;
    }
    double vratiCijenu() const{
        return this->cijena;
    }
    Vreme vratiVreme() const{
        return this->vrijeme;
    }
    void operator--();
    virtual char vratiOznaku() const=0;
    virtual bool zadovoljavajucaDubina() const=0;
    bool operator==(const Guma& guma1) const;
    Guma(const Guma& g)=delete;
    Guma& operator=(const Guma& g)=delete;
    friend ostream& operator<<(ostream& os, Guma& guma){
        return os<<guma.vratiSirinu()<<'/'<<guma.VratiVisinu()<<"R/"<<guma.vratiPrecnik()<<'-'<<guma.vratiOznaku()<<'@'<<guma.vratiVreme()<<"=="<<guma.vratiCijenu()<<endl;
    }

};


#endif
