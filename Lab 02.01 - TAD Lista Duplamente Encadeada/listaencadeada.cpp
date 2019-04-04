#include "listaencadeada.h"
#include <iostream>
    ListaEncadeada::ListaEncadeada(){
        ListaEncadeada::set_start(nullptr);
        ListaEncadeada::set_end(nullptr);
    };
    int ListaEncadeada::get_lenght(){
        return this->length;
    };
    ListaEncadeada::node_t * ListaEncadeada::get_start(){
        return this->start;
    }
    ListaEncadeada::node_t * ListaEncadeada::get_end(){
        return this->end;
    }
    void ListaEncadeada::set_start(node_t *start){
        this->start=start;
    }
    void ListaEncadeada::set_end(node_t * end){
        this->end=end;
    }
    void ListaEncadeada::insere_elemento(int elem){
        
        node_t *nodo = new node_t();
        nodo->elemento=elem;
        if(ListaEncadeada::get_start()==nullptr){
            ListaEncadeada::set_start(nodo);
            ListaEncadeada::set_end(nodo);
            nodo->proximo=nullptr;
            nodo->anterior=nullptr;
        }else{
            ListaEncadeada::get_end()->proximo=nodo;
            nodo->anterior = ListaEncadeada::get_end();
            ListaEncadeada::set_end(nodo);
            nodo->proximo=nullptr;
        }
        
        ListaEncadeada::aumenta();
    }
    void ListaEncadeada::insere_primeiro(int elem){
        node_t *nodo = new node_t();
        nodo->elemento=elem;
        
        if(ListaEncadeada::get_start()==nullptr){
            ListaEncadeada::set_start(nodo);
            ListaEncadeada::set_end(nodo);
            nodo->proximo=nullptr;
            nodo->anterior=nullptr;
        }else{
            ListaEncadeada::get_start()->anterior=nodo;
            nodo->proximo=ListaEncadeada::get_start();
            ListaEncadeada::set_start(nodo);
            nodo->anterior=nullptr;
        }
        
        ListaEncadeada::aumenta();
    }
    int ListaEncadeada::get_iesimo(int pos){
        node_t *elem;
        if((ListaEncadeada::tamanho()-pos)<pos){
            elem=ListaEncadeada::get_end();
            for(int i=ListaEncadeada::tamanho()-1;i>pos; i--){
                elem = elem->anterior;
            }
        }else{
            elem=ListaEncadeada::get_start();
            for(int i=pos-1;i>=0; i--){
                elem = elem->proximo;
            }
        }
        return elem->elemento;
    }
    void ListaEncadeada::remover_elemento(){
        if(ListaEncadeada::get_end()==ListaEncadeada::get_start()){
            delete ListaEncadeada::get_end();
            ListaEncadeada::set_end(nullptr);
            ListaEncadeada::set_start(nullptr);
        }else{
            node_t *temp=ListaEncadeada::get_end();
            ListaEncadeada::set_end(ListaEncadeada::get_end()->anterior);
            delete temp;
        }
        ListaEncadeada::diminui();
    }
    void ListaEncadeada::remover_primeiro(){
        if(ListaEncadeada::get_end()==ListaEncadeada::get_start()){
            delete ListaEncadeada::get_end();
            ListaEncadeada::set_end(nullptr);
            ListaEncadeada::set_start(nullptr);
        }else{
            node_t *temp=ListaEncadeada::get_start();
            ListaEncadeada::set_start(ListaEncadeada::get_start()->proximo);
            delete temp;
        }
        ListaEncadeada::diminui();
    }
    void ListaEncadeada::inserir_iesimo(int elem, int pos){
        node_t *atual;
        node_t *novo = new node_t();
        novo->elemento=elem;
        if(ListaEncadeada::tamanho()-pos<pos){
            atual=ListaEncadeada::get_end();
            for(int i=ListaEncadeada::tamanho()-1;i>pos; i--){
                atual = atual->anterior;
            }
        }else{
            atual=ListaEncadeada::get_start();
            for(int i=pos-1;i>=0; i--){
                atual = atual->proximo;
            }
        }
        if(atual->proximo==nullptr){
            novo->proximo=atual;
            atual->anterior->proximo=novo;
            novo->anterior=atual->anterior;
            atual->anterior=novo;
        }else if(atual->anterior==nullptr){
            novo->proximo=atual;
            atual->anterior=novo;
            novo->anterior=nullptr;
            ListaEncadeada::set_start(novo);
        }else{
            atual->anterior->proximo=novo;
            novo->anterior=atual->anterior;
            novo->proximo=atual;
            atual->anterior=novo;
        }
        ListaEncadeada::aumenta();
    }
    void ListaEncadeada::remover_iesimo(int pos){
        if(ListaEncadeada::get_end()==ListaEncadeada::get_start()){
            delete ListaEncadeada::get_end();
        }else{
            node_t *atual;
            if(ListaEncadeada::tamanho()-pos<pos){
                atual=ListaEncadeada::get_end();
                for(int i=ListaEncadeada::tamanho()-1;i>pos; i--){
                    atual = atual->anterior;
                }
            }else{
                atual=ListaEncadeada::get_start();
                for(int i=pos-1;i>=0; i--){
                    atual = atual->proximo;
                }
            }
            if(atual->proximo==nullptr){
                ListaEncadeada::set_end(atual->anterior);
                atual->anterior->proximo=nullptr;
            }else if(atual->anterior==nullptr){
                ListaEncadeada::set_start(atual->proximo);
                ListaEncadeada::get_start()->anterior=nullptr;
            }else{
                atual->anterior->proximo=atual->proximo;
                atual->proximo->anterior=atual->anterior;
            }
            delete atual;
        }
        ListaEncadeada::diminui();
    }
    int ListaEncadeada::tamanho(){
        return this->length;
    }
    void ListaEncadeada::aumenta(){
        this->length+=1;
    }
    void ListaEncadeada::diminui(){
        this->length-=1;
    }