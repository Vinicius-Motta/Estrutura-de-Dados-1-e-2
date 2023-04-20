

#ifndef CPRODUTOS_H
#define CPRODUTOS_H

class cProdutos {
public:
    struct DadosProduto{
        char nome[40];
        int codigo;
        double preco;
    };
    DadosProduto ListaProdutos[6];
    
    cProdutos();
    cProdutos(const cProdutos& orig);
    virtual ~cProdutos();
    
    void cadastro();
    void consultaProdutos();
    void pesquisar(int procurarCod);

private:

};

#endif /* CPRODUTOS_H */

