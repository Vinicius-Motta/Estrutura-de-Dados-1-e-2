#ifndef PILHAESTUDOSTATIC_H
#define PILHAESTUDOSTATIC_H

class pilhaEstudoStatic {
public:
    pilhaEstudoStatic();
    pilhaEstudoStatic(const pilhaEstudoStatic& orig);
    virtual ~pilhaEstudoStatic();
    void lerDados();
    void menu(int qtdElem, int vPilha[]);
    int push();
    int pop();
    void imprimir();
private:

};

#endif /* PILHAESTUDOSTATIC_H */

