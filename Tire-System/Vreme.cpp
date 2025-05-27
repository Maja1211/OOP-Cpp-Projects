

#include "Vreme.h"

bool Vreme::operator==(const Vreme &vreme1) const {
    if(this->vratiMinute()==vreme1.vratiMinute() && this->vratiSate()==vreme1.vratiSate() && this->vratiDane()==vreme1.vratiDane() &&
    this->vratiMesece()==vreme1.vratiMesece() && this->vratiGodine()== vreme1.vratiGodine()){
        return true;
    }else{
        return false;
    }
}

bool Vreme::operator<(const Vreme &vreme1) const {
    if(this->vratiGodine()<vreme1.vratiGodine() || (this->vratiGodine()==vreme1.vratiGodine() && this->vratiMesece()<vreme1.vratiMesece()) ||
            (this->vratiGodine()==vreme1.vratiGodine() && this->vratiMesece()==vreme1.vratiMesece() && this->vratiDane()<vreme1.vratiDane()) ||
            (this->vratiGodine()==vreme1.vratiGodine() && this->vratiMesece()==vreme1.vratiMesece() && this->vratiDane()==vreme1.vratiDane() && this->vratiSate()<vreme1.vratiSate()) ||
            (this->vratiGodine()==vreme1.vratiGodine() && this->vratiMesece()==vreme1.vratiMesece() && this->vratiDane()==vreme1.vratiDane() && this->vratiSate()==vreme1.vratiSate() &&
            this->vratiMinute()<vreme1.vratiMinute())){
        return true;
    }else{
        return false;
    }
}

Vreme &Vreme::operator+=(int min) {
    minuti+=min;
    sati+=minuti/60;
    minuti%=60;
    dani+=sati/24;
    sati%=24;
    while(dani> brojDanaUMjesecu(meseci)){
        dani-= brojDanaUMjesecu(meseci);
        meseci++;
        if(meseci>12){
            meseci=1;
            godina++;
        }
    }
    if(dani==0){
        meseci--;
        if(meseci==0){
            meseci=12;
            godina--;
        }
        dani= brojDanaUMjesecu(meseci);
    }
    if(meseci>12){
        godina+=meseci/12;
        meseci%=12;
        if(meseci==0) meseci=12;
    }
}

int Vreme::brojDanaUMjesecu(int mjesec) {
   if(mjesec==1 || mjesec==3 || mjesec==5 || mjesec==7 || mjesec==8 || mjesec==10 || mjesec==12){
       return 31;
   }
   if(mjesec==4 || mjesec==6 || mjesec==9 || mjesec==11){
       return 30;
   }
   if(mjesec==2){
       if(this->godina%400==0 || (this->godina%4==0 && this->godina%100 != 0)){
           return 29;
       }else{
           return 28;
       }
       if(mjesec<1 || mjesec>12){
           return -1;
       }
   }
}
