//
// Created by Win 10 on 23.12.2023..
//

#ifndef INC_2017_ISPIT_OOP1_GENERATOR_H
#define INC_2017_ISPIT_OOP1_GENERATOR_H


#include "Jelovnik.h"
#include <random>



class Generator {
private:
    Jelovnik* jelovnik;
    float cena;
    Jelo* nizJela[3];
public:
    Generator(Jelovnik* jelovnik): jelovnik(jelovnik){}

    void napraviDnevniMeni(int sat){
        this->cena=0;
        char oznakaJela='P';
        for(int i=0;i<3;i++){
            while(1){
                int br=rand()/(double)(RAND_MAX+1.)*jelovnik->vratiBrCvorova();
                for(jelovnik->postaviTekuciNaPrvi();--br>=0 && jelovnik->daLiPostoji();jelovnik->pstaviNaSled());
                Jelo* jelo=jelovnik->dohvatiPodatak();
                int brPorcija=jelovnik->vratiVrednost();
                if(jelo->vrstaJela()==oznakaJela && brPorcija>0){
                    brPorcija--;
                    nizJela[i]=jelo;
                    jelo->postaviSat(sat);
                    cena=cena+jelo->izracunajCenu();
                    if(oznakaJela=='P'){
                        oznakaJela='G';

                    }else{
                        oznakaJela='D';
                    }
                    break;
                }
            }
        }
    }
    friend ostream& operator<<(ostream& it, const Generator& generator){
        it<<generator.cena<<endl;
        it<<*generator.nizJela[0]<<endl<<*generator.nizJela[1]<<endl<<*generator.nizJela[2]<<endl;
        return it;
    }

};



#endif //INC_2017_ISPIT_OOP1_GENERATOR_H
