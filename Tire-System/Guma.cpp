

#include "Guma.h"

void Guma::operator--() {
    if(this->dubina>=0.1){
        this->dubina-=0.1;
    }
}

bool Guma::operator==(const Guma &guma1) const {
    if(this->vratiSirinu()==guma1.vratiSirinu() && this->VratiVisinu()==guma1.VratiVisinu() && this->vratiPrecnik()== guma1.vratiPrecnik()
       && this->vratiOznaku()==guma1.vratiOznaku()){
        return true;
    }else{
        return false;
    }
}
