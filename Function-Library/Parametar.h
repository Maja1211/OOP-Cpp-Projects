
#ifndef UNTITLED1_PARAMETAR_H
#define UNTITLED1_PARAMETAR_H

#include <iostream>
using namespace std;
#include <string>
class Parametar {
public:
    enum Tip{ INT, FLOAT, STRING };
private:
    Tip tip;
    string ime;
    static string str_tip[];
protected:
    virtual void pisi(ostream& os)const{
        os<<str_tip[tip]<<' '<<ime;
    }
public:
    Parametar(Tip tip, const string& ime): tip(tip),ime(ime) {}
    virtual ~Parametar(){}
    bool operator==(const Parametar& parametar1) const;
    friend ostream& operator<<(ostream& os,const Parametar& parametar){
        parametar.pisi(os);
        return os;
    }



};


#endif
