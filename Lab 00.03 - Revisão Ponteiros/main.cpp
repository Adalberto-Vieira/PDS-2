#include <iostream>


int main(){
    long value1=200000;
    long value2;
    //Declare a variável long ptr como um ponteiro para um objeto do tipo long.
    long *ptr;
    // Atribua o endereço da variável value1 à variável ponteiro long ptr
    ptr = &value1;
    //imprima o valor do objeto apontado por long_ptr
    std::cout<<*ptr<<" ";
    //Atribua o valor do objeto apontado por long ptr à variável value2
    value2 = *ptr;
    //Imprima o valor de value2
    std::cout<<value2<<" ";
    //Imprima o endereço de value1
    std::cout<<&value1<<" ";
    //Imprima o endereço armazenado em long_ptr
    std::cout<<ptr<<" ";
    //Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
    ptr==&value1 ? std::cout <<"1"<<" " :  std::cout << "0"<<" "; 
    //Declare um array do tipo unsigned int chamado values com cinco elementos e inicialize os elementos para os inteiros pares de 2 a 10. 
    unsigned int v []= {2, 4, 6, 8, 10};
    //Declare um ponteiro vptr que aponta para um objeto do tipo unsigned int.
    unsigned int *vptr;
    //imprimir os elementos do array values usando notação de array subscrito.
    for(int i =0; i<5; i++){std::cout<<v[i]<<" ";}
    //Escreva duas instruções separadas que atribuem o endereço inicial do array values à variável ponteiro v ptr.
    vptr = &v[0];
    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento.
    for(int i =0; i<5; i++){std::cout<<*vptr<<" ";vptr++;}
    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento com o nome de array como o ponteiro.
    for(int i =0; i<5; i++){std::cout<<*(v + i)<<" ";}vptr=&v[0];
    //imprimir os elementos do array values utilizando subscritos no ponteiro para o array.
    for(int i =0; i<5; i++){std::cout<<vptr[i]<<" ";}
    //imprimir o quinto elemento de values utilizando a notação de subscrito de array,
    std::cout<< v[4]<<" ";
    //a notação de ponteiro/deslocamento com o nome de array como o ponteiro, 
    std::cout << *(v+4)<<" ";
    //a notação de subscrito de ponteiro,
    std::cout<<vptr[4] << " ";
    // //a notação de ponteiro/deslocamento.
    std::cout<<*(vptr+4)<<" ";
    // Mostre que endereço é referenciado por vptr + 3, e que valor é armazenado nessa localização.
    std::cout<<(vptr+3)<<" "<<*(vptr+3)<<" ";vptr=&v[4];
    //Supondo que vptr aponte para values[4], que endereço é referenciado por vptr -= 4? Que valor é armazenado nessa localização?
    std::cout<<(vptr-4)<<" "<<*(vptr-4);



    
    return 0;
}