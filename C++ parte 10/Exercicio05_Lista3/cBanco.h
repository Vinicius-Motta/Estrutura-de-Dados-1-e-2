#ifndef CBANCO_H
#define CBANCO_H

class cBanco {
public:
    
    struct DadosCliente{
        char nome[40];
        long int cpf;
        double deposito;
    };
    
    DadosCliente ListaCliente[3];
    
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    
    void cadastro();
    //void consultaProdutos();
    void pesquisar(int procurarCpf);
private:

};

#endif /* CBANCO_H */

