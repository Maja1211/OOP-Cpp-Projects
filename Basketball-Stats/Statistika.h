

#ifndef UNTITLED25_STATISTIKA_H
#define UNTITLED25_STATISTIKA_H
#include "Kosarkas.h"

class Statistika {
private:
    Kosarkas* kosarkas;
    int brPokusaja1;
    int brPokusaja2;
    int brPokusaja3;
    int brPogodaka1;
    int brPogodaka2;
    int brPogodaka3;
    int brSkokovaNapad;
    int brSkokovaOdbrana;
    int brAsistencija;

public:

    Statistika(Kosarkas* kosarkas, int pokusaj1, int pokusaj2, int pokusaj3, int pogodak1, int pogodak2,
                           int pogodak3, int skokNapad, int skokOdbrana, int asistencije):kosarkas(kosarkas), brPokusaja1(pokusaj1), brPokusaja2(pokusaj2),
                           brPokusaja3(pokusaj3), brPogodaka1(pogodak1), brPogodaka2(pogodak2),brPogodaka3(pogodak3),brSkokovaNapad(skokNapad),
                           brSkokovaOdbrana(skokOdbrana), brAsistencija(asistencije){}


    void uvecajBrPokusaja1(int br=1);
    void uvecajBrPokusaja2(int br=1);
    void uvecajBrPokusaja3(int br=1);
    void uvecajBrPogodaka1(int br=1);
    void uvecajBrPogodaka2(int br=1);
    void uvecajBrPogodaka3(int br=1);
    void uvecajBrSkokovaNapad(int br=1);
    void uvecajBrSkokovaOdbrana(int br=1);
    void uvecajAsistencija(int br=1);
    const Kosarkas* vratiKosarkasa() const;
    int vratiBrPokusaja1() const;
    int vratiBrPokusaja2() const;
    int vratiBrPokusaja3() const;
    int vratiBrPogodaka1() const;
    int vratiBrPogodaka2() const;
    int vratiBrPogodaka3() const;
    int vratiBrSkokovaNapad() const;
    int vratiBrSkokovaOdbrana() const;
    int sviPoeni() const;
    int sviSkokovi() const;
    int dohvatiAsistencije() const;
    friend ostream& operator<<(ostream& os, const Statistika& statistika){
        const Kosarkas* kosarkas=statistika.vratiKosarkasa();
        os<<*kosarkas<<" #PTS:"<<statistika.sviPoeni()
        <<" #RB:"<<statistika.sviSkokovi()<<" #AS:"<<statistika.dohvatiAsistencije()<<endl;
        return os;
    }

    ~Statistika(){}
};


#endif //UNTITLED25_STATISTIKA_H
