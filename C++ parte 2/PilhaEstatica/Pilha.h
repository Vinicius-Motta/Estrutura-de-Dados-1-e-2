#ifndef PILHA_H
#define PILHA_H

class Pilha {
public:
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();
    void lerDados();
    void menu(int QuantElementos, int pilha[]);
    int push(int topo, int QuantElementos, int pilha[]);
    int pop(int topo);
    void imprimir(int topo, int pilha[]);
private:

};

#endif /* PILHA_H */

