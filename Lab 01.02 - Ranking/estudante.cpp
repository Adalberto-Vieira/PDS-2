#include "estudante.h"

    float Estudante::calcular_rsg(){
        float rsg = 0;
        int count = 0;
        for(float nota: this->notas){
            rsg += nota;
            count++;
        }
        return rsg/count;
    }