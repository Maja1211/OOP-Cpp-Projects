

#include "Polje.h"

bool Polje::operator==(const Polje &polje1) const {
    if(this->vratiRed()==polje1.vratiRed() && this->vratiKolonu()==polje1.vratiKolonu()){
        return true;
    }else{
        return false;
    }
}
