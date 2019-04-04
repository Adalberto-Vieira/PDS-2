#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H
    typedef struct Circunferencia{
        double xc;
        double yc;
        double raio;
        Circunferencia(double xc, double yc, double raio);
        double calcular_area();
        bool possui_intersecao(Circunferencia  &c);
        
    }Circunferencia;
#endif