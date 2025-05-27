

#include "Figura.h"

bool Figura::gadjanje(Polje polje1) {
    for(int i=0;i<listaPolja.vratiBrPodataka();i++){
        if(polje1==listaPolja[i] && !listaPolja[i].pogodjenoPolje()){
            listaPolja[i].naPogodjeno();
            return true;
        }
    }
    return false;
}

bool Figura::cijelaPogodjena() const {
    for(int i=0;i<listaPolja.vratiBrPodataka();i++){
        if(!listaPolja[i].pogodjenoPolje()){
            return false;
        }
    }
    return true;
}

bool Figura::operator&(const Figura &figura1) {
    for(int i=0;i<listaPolja.vratiBrPodataka();i++){
        if(this->listaPolja[i].operator==(figura1.listaPolja[i]) && this->listaPolja[i].pogodjenoPolje() && figura1.listaPolja[i].pogodjenoPolje()){
            return true;
        }
    }
    return false;
}

bool Figura::operator==(const Figura &figura1) const {
    if(this->vratiOznaku()==figura1.vratiOznaku()){
        return true;
    }else{
        return false;
    }
}
