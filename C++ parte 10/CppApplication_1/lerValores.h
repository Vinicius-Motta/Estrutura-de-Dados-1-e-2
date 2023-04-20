#ifndef LERVALORES_H
#define LERVALORES_H

class lerValores {
public:
    lerValores();
    lerValores(const lerValores& orig);
    virtual ~lerValores();
    void lerDados();
    void calcular(float *A,float *B,float *C,float *soma,float *subtracao,float *multiplicacao);
private:

};

#endif /* LERVALORES_H */

