

#ifndef FILA_H
#define FILA_H

class Fila {
public:
    Fila();
    Fila(const Fila& orig);
    virtual ~Fila();
    struct nodo{
        struct nodo *ant;
	int elem;
	struct nodo *prox;
    } *inicio, *aux, *fim;
    
    bool vazio(struct nodo *campo);
    void insere(void);
    void remover(void);
    void listar(void);
    void menu(void);
    void bubbleSort(void);
private:

};

#endif /* FILA_H */

