#include "cRevisao.h"
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;


cRevisao::cRevisao() {
}

cRevisao::cRevisao(const cRevisao& orig) {
}

cRevisao::~cRevisao() {
}

void cRevisao::lerDados(){
    int CpfBusca;
    for (int i=0; i<=1;i++){
        cout << "Digite seu nome: ";
        cin >> this->cadPessoas[i].nome;
        cout << "Digite seu cpf: ";
        cin >> this->cadPessoas[i].cpf;
        cout <<"Digite sua idade: ";
        cin >> this->cadPessoas[i].idade;
        cout << "Digite seu peso: ";
        cin >> this->cadPessoas[i].peso;
    }
    
    cout << "\nDigite um cpf para ver os dados referentes a pessoa: " << endl;
    cin >> CpfBusca;
    this->MostrarDados(CpfBusca);
}

void cRevisao::MostrarDados(int CpfBusca){
    int contador=0; 
    do{
        if(CpfBusca==cadPessoas[contador].cpf)
            cout <<"CPF encontrado";
        else
            contador++;    
    }while ((CpfBusca!=cadPessoas[contador].cpf)&&(contador<2));
    cout<< "CPF não encontrado";
        
}
