#ifndef CCPF_H
#define CCPF_H

class cCpf {
public:
      struct cadPessoas{
        char nome[50], sexo[50];
        float peso, altura;
        long int cpf;
        }pessoas[3];
    cCpf();
    cCpf(const cCpf& orig);
    virtual ~cCpf();
    void cadastro();
    void pesqSeq (int i, long int cpfBin);
    int pesqBin(int i, long int cpfBin);
    void ordBolha(int i);
private:

};

#endif /* CCPF_H */

