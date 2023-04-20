#include "cCpf.h"
#include <iostream>

using namespace std;

cCpf::cCpf() {
}

cCpf::cCpf(const cCpf& orig) {
}

cCpf::~cCpf() {
}

void cCpf::cadastro(){
    int i=0;
    char opc;


    do{
        cout<<"Informe seu nome: \n";
        cin>>this->pessoas[i].nome;
        cout<<"Informe a sua altura: \n";
        cin>>this->pessoas[i].altura;
        cout<<"Informe o seu peso: \n";
        cin>>this->pessoas[i].peso;
        cout<<"Informe seu CPF: \n";
        cin>>this->pessoas[i].cpf;
        cout<<"Informe seu sexo: \n";
        cin>>this->pessoas[i].sexo;
        cout<<"Você quer continuar o cadastro ?(DIGITE 'S'PARA COMTINUAR): \n";
        cin>>opc;
    i++;
    }while((opc == 's' || opc == 'S') && (i<3));
    
    this->ordBolha(i);

    long int cpfBin;
    cout<<"Informe um CPF para bucar:\n";
    cin>>cpfBin;
    if((this->pesqBin(i, cpfBin))!=-1){
        cout<< "CPF encontrado!";
    }
    else
        cout<<"CPF não encontrado!";
}
void cCpf::pesqSeq(int i, long int cpfBin){

    for(int c=0; c<i; c++){
        if (cpfBin == this->pessoas[c].cpf)
            cout<<"CPF encontrado!";
    }
}
int cCpf::pesqBin(int i, long int cpfBin){
    int inf, sup, meio;
    inf = 0;
    sup = i-1;
    while (inf <= sup){
        meio = ((inf + sup)/2);
        if (cpfBin == this->pessoas[meio].cpf)
            return meio;
        else if(cpfBin < this->pessoas[meio].cpf)
            sup = meio - 1;
        else 
            inf = meio + 1;
    }
    return -1;
}


void cCpf::ordBolha(int i){
    int cont, j;
    cadPessoas t;
    for (cont = i-1; cont>=1; cont--){
        for (j = 0; j < cont; j++){
            if (this->pessoas[j].cpf > this->pessoas[j+1].cpf){
                t = this->pessoas[j];
                this->pessoas[j] = this->pessoas[j+1];
                this->pessoas[j+1] = t;
            }
        }
    }
}

