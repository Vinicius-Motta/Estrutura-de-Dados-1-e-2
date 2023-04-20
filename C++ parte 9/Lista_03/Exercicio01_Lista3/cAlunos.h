#ifndef CALUNOS_H
#define CALUNOS_H


class cAlunos {
public:
    struct DadosAlunos{
    char nome[40];
    long int matricula;
    float n1, n2;
    
};
    DadosAlunos ListaAlunos[3];
    cAlunos();
    cAlunos(const cAlunos& orig);
    virtual ~cAlunos();
    void lerDados();
    void imprimeDados();
private:

};

#endif /* CALUNOS_H */

