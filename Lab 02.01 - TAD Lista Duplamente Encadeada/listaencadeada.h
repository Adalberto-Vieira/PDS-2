#ifndef LISTAENCADEADA_H_
#define LISTAENCADEADA_H_

/*
  usem a struct 'node_t' para criar o atributo nó da lista. Notem que ela possui um campo inteiro
  e um ponteiro para o próximo nó. A lista deve conter referências para o primeiro
  e último nós. A lista deve conter métodos para:
   (a) insere_elemento(int). Insere um elemento no fim da lista.
   (b) insere_primeiro(int). Insere um elemento no inicio da lista.
   (c) get_iesimo(int). Retorna um elemento na posição i.
   (d) remover_elemento(). Remove um elemento no fim da lista.
   (e) remover_primeiro(). Remove o primeiro elemento da lista.
   (f) inserir_iesimo(int, int). Insere um elemento na posicão i.
   (g) remover_iesimo(int). Remove um elemento na posição i
   (h) tamanho(). Retorna o tamanho da lista.
*/
class ListaEncadeada {
    public:
        struct node_t{
        	int elemento;
        	node_t *proximo;
            node_t *anterior;
        };
        ListaEncadeada();
        node_t * get_start();
        node_t * get_end();
        int get_lenght();
        void set_start(node_t *elem);
        void set_end(node_t *elem);
        void insere_elemento(int elem);
        void insere_primeiro(int elem);
        int get_iesimo(int pos);
        void remover_elemento();
        void remover_primeiro();
        void inserir_iesimo(int elem, int pos);
        void remover_iesimo(int pos);
        int tamanho();
        void aumenta();
        void diminui();
    private:
        node_t *start;
        node_t *end;
        int length=0;
   
};

#endif /* LISTAENCADEADA_H_ */
