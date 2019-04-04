#include <iostream>
#include <iomanip> 
#include <algorithm>
#include "estudante.h"
bool way_sort(Estudante &i, Estudante &j) { return i.calcular_rsg() > j.calcular_rsg(); }
int main(){
    struct Estudante alunos[10];
    int maior_rsg[3] = {};
    for(int i=0; i<10; i++){
        std::cin >> alunos[i].matricula;
        std::cin >> alunos[i].nome;
        for(int j =0; j <5; j++){
            std::cin >> alunos[i].notas[j];
        }
        
    }
    std::sort(std::begin(alunos),std::end(alunos),way_sort);
    for(int i=0; i<3;i++){
        std::cout << alunos[i].matricula << " " << alunos[i].nome << " " << std::setprecision(2) << std::fixed << alunos[i].calcular_rsg()<<"\n";    
    }
    return 0;
}