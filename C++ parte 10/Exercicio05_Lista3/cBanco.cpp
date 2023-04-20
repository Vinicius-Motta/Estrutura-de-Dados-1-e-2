#include "cBanco.h"
#include <iostream>

using namespace std;

cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}

void cBanco::cadastro(){
    int procurarCpf;

    for(int i=0; i<=2; i++){
        cout<<"Digite seu nome para ralizar o cadastro "<<endl;
        cin>>this->ListaCliente[i].nome;
        cout<<"Informe seu CPF: "<<endl;
        cin>>this->ListaCliente[i].cpf;
        cout<<"Faça um depósito inicial:"<<endl;
        cin>>this->ListaCliente[i].deposito;

    }
    cout << "Informe um CPF para realizar uma operação" << endl;
    cin >> procurarCpf;
    this->pesquisar(procurarCpf);
}

void cBanco::pesquisar(int procurarCpf){
    char operacao;
    float valor;
    for(int i=0; i<=2; i++){
        if(procurarCpf == this->ListaCliente[i].cpf){
            cout << "Informe a operação que deseja realizar saque ou depósito" << endl;
            cout << "Digite 'S' para saque e 'D' para depósito" << endl;
            cin >> operacao;
            if ((operacao == 'S')||(operacao=='s')){
                cout << "digite o valor da operação: ";
                cin >> valor;
                cout << ListaCliente[i].nome << endl;
                cout << ListaCliente[i].deposito - valor;
            }
            else if ((operacao == 'D')||(operacao=='d')){
                cout << "digite o valor da operação: ";
                cin >> valor;
                cout << this->ListaCliente[i].nome << endl;
                cout << this->ListaCliente[i].deposito + valor;
            }
        else
            cout << "CPF não encontrado";
            
        }
    }
}

