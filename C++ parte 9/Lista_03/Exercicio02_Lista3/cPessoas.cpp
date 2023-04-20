#include "cPessoas.h"
#include <iostream>
#include <cmath>

using namespace std;

cPessoas::cPessoas() {
}

cPessoas::cPessoas(const cPessoas& orig) {
}

cPessoas::~cPessoas() {
}

void cPessoas::lerDados(){
    
    char opcao;
    int contador=0, cpfBusca=0;
    
    do{
        cout << "Digite seu nome: " << endl;
        cin >> this->vetPessoas[contador].nome;
        cout << "Digite sua altura: " << endl;
        cin >> this->vetPessoas[contador].altura;
        cout << "Digite seu peso: " << endl;
        cin >> this->vetPessoas[contador].peso;
        cout << "Digite seu cpf: " << endl;
        cin >> this->vetPessoas[contador].cpf;
        cout << "Digite seu sexo: " << endl;
        cin >> this->vetPessoas[contador].sexo;
        contador++;
        
        cout << "Deseja continuar cadastrando? S para continuar" << endl;
        cin >> opcao;
        
    }while(((opcao == 'S')||(opcao == 's'))&&(contador<6));
    
    cout << "Digite um CPF para localizar e calcular o IMC" << endl;
    cin >> cpfBusca;
    cout << this->localizaCalcIMC(cpfBusca, contador);
    
}

float cPessoas::localizaCalcIMC(int cpfBusca, int contador ){
    float imc=0.0;
    for (int i=0; i<contador; i++){
        if(cpfBusca == this->vetPessoas[i].cpf)
            imc = (this->vetPessoas[i].peso /pow(this->vetPessoas[i].altura,2));
    }
    return imc;
    
    
    
}

