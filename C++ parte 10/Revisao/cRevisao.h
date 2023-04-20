
#ifndef CREVISAO_H
#define CREVISAO_H

class cRevisao {
public:
    
    struct Pessoas{
        char nome[40];
        int idade;
        float peso;
        int cpf;
    };
    
    Pessoas cadPessoas[1];
    cRevisao();
    cRevisao(const cRevisao& orig);
    virtual ~cRevisao();
    void lerDados();
    void MostrarDados(int CpfBusca);
private:

};

#endif /* CREVISAO_H */

