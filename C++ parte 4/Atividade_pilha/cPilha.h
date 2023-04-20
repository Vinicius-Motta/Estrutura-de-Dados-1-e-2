#ifndef CPILHA_H
#define CPILHA_H

class cPilha {
public:
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    void lerDados();
    void menu(int qtd_elementos, int pilha[]);
    int push(int topo, int qtd_elementos, int pilha[]);
    int pop(int topo);
    void imprimir(int topo, int pilha[]);
private:

};

#endif /* CPILHA_H */

