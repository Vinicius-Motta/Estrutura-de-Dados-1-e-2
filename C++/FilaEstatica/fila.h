#ifndef FILA_H
#define FILA_H

class fila {
public:
    fila();
    fila(const fila& orig);
    virtual ~fila();
    void lerDados();
    void menu(int QuantElementos, int fila[]);
    int push(int fim, int QuantElementos, int fila[]);
    int pop(int fim, int fila[]);
    void imprimir(int fim, int fila[]);
private:

};

#endif /* FILA_H */

