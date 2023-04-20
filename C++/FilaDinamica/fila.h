#ifndef FILA_H
#define FILA_H

class fila {
public:
    fila();
    fila(const fila& orig);
    virtual ~fila();
        struct nodo{
	int elem;
	struct nodo *prox;
    } *inicio, *aux, *fim;
    
    bool vazio(struct nodo *campo);
    void insere(void);
    void remover(void);
    void listar(void);
    void menu(void);
private:

};

#endif /* FILA_H */

