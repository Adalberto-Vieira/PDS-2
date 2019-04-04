#include "circunferencia.h"
#include <cmath>
    const double PI=3.14;
    
    Circunferencia::Circunferencia(double xc, double yc, double raio){
        this->xc=xc;
        this->yc=yc;
        this->raio=raio;
    }
    
    bool Circunferencia::possui_intersecao(Circunferencia  &c){
        double center_distance = sqrt((pow(this->xc-c.xc,2)+pow(this->yc-c.yc,2)));
        if(this->raio+c.raio<center_distance){
            return false;
        }else{
            return true;    
        }
    }
    
    double Circunferencia::calcular_area(){
        return pow(this->raio,2)*PI; 
    }