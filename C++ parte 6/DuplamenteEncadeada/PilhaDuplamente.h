#ifndef PILHADUPLAMENTE_H
#define PILHADUPLAMENTE_H

class PilhaDuplamente {
public:
    PilhaDuplamente();
    PilhaDuplamente(const PilhaDuplamente& orig);
    virtual ~PilhaDuplamente();
    struct nodo{
	int elem;
	struct nodo *ant;
    } *topo, *aux;
    
    bool vazio(struct nodo *campo);
    void insere(void);
    void remover(void);
    void listar(void);
    void menu(void);
    void bubbleSort(void);
private:

};

#endif /* PILHADUPLAMENTE_H */

