

#ifndef UNTITLED1_ARGUMENT_H
#define UNTITLED1_ARGUMENT_H
#include "Parametar.h"

class Argument:public Parametar {
private:
    int vrijednost;
public:
    Argument(Tip tip, const string& ime, int vrijednost): Parametar(tip,ime), vrijednost(vrijednost){}
    int vratiVrijednost() const{
        return this->vrijednost;
    }
    friend ostream& operator<<(ostream& os,const Argument& argument){
        argument.pisi(os);
        os<<'='<<argument.vratiVrijednost()<<endl;
        return os;
    }
};


#endif
