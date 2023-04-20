#ifndef CPESSOAS_H
#define CPESSOAS_H

class cPessoas {
public:
    
    struct pessoas{
        char nome[40], sexo;
        float altura, peso;
        int cpf;
    };
    
    pessoas vetPessoas[6];
    
    cPessoas();
    cPessoas(const cPessoas& orig);
    virtual ~cPessoas();
    void lerDados();
    float localizaCalcIMC(int cpfBusca, int contador);
private:

};

#endif /* CPESSOAS_H */

