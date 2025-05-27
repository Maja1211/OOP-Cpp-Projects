

#include "Parametar.h"

string Parametar::str_tip[]={"INT", "FLOAT", "STRING "};

bool Parametar::operator==(const Parametar &parametar1) const {
    if(this->tip==parametar1.tip){
        return true;
    }else{
        return false;
    }
}
