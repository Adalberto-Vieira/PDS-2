#include <iostream>
#include "listaencadeada.h"
int main(){
    std::cout << "Use o main para testar seu código" << std::endl;
    ListaEncadeada l;
    l.insere_elemento(20);
    //std::cout << l.get_iesimo(3);
    l.insere_elemento(4);
    l.insere_elemento(5);
    l.insere_elemento(3);
    l.remover_iesimo(0);
    l.remover_iesimo(0);
    l.remover_iesimo(0);
    //std::cout << l.get_iesimo(1);
    std::cout << "insert sucess";
    
   // std::cout<<element1<<element2<<element3<<element4;
    return 0;
}