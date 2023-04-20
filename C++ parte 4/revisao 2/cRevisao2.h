#ifndef CREVISAO2_H
#define CREVISAO2_H

class cRevisao2 {
public:
    
    struct pessoas{
        char nome[40];
        int cpf;
    };
    pessoas cadPessoas[1];
    cRevisao2();
    cRevisao2(const cRevisao2& orig);
    virtual ~cRevisao2();
    void lerDados();
    void ordBolha(int i);
    int pesqBin(int i, int cpfBin);
private:

};

#endif /* CREVISAO2_H */

