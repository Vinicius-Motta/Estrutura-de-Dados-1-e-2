#include "cRevisao2.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cRevisao2::cRevisao2() {
}

cRevisao2::cRevisao2(const cRevisao2& orig) {
}

cRevisao2::~cRevisao2() {
}

void cRevisao2::lerDados(){
    int i;
    int cpfBin;
    for(i=0; i<=1; i++){
        cout <<"Digite seu nome: ";
        cin >> this->cadPessoas[i].nome;
        cout << "Digite seu CPF: ";
        cin >> this->cadPessoas[i].cpf;
    }
    this->ordBolha(i);
    
    cout << "DIgite um cpf para buscar";
    cin >> cpfBin;
    if ((this->pesqBin(i, cpfBin))!=-1){
        cout << "Cpf encontrado";
    }
    else
        cout << "CPF não encontrado";
    
}

void cRevisao2::ordBolha(int i){
    
    int cont, j, t;
    
    for(cont=i-1;cont>=1;cont-- ){
        for(j=0; j<cont; j++){
            if(this->cadPessoas[j].cpf > this->cadPessoas[j+1].cpf){
                t = this->cadPessoas[j].cpf;
                this->cadPessoas[j].cpf = this->cadPessoas[j+1].cpf;
                this->cadPessoas[j+1].cpf = t;
            }
        }
    }
    
}

int cRevisao2::pesqBin(int i, int cpfBin){
    int inf=0,sup = i-1, meio;
    
    while(inf<=sup){
        meio = ((inf+sup)/2);
        if (cpfBin == this->cadPessoas[meio].cpf)
            return meio;
        else if(cpfBin <this->cadPessoas[meio].cpf)
            sup = meio-1;
        else
            inf = meio+1;
    }
    return -1;
}

