#include "fila.h"
#include <cstdlib>
#include <iostream>

using namespace std;

fila::fila() {
}

fila::fila(const fila& orig) {
}

fila::~fila() {
}

void fila::lerDados(){
    int QuantElementos;
    int fila[QuantElementos];
    cout << "Digite a quantidade de elementos que você deseja inserir em sua fila: "<<endl;
    cin >> QuantElementos;
    this->menu(QuantElementos, fila);
    
}

void fila::menu(int QuantElementos, int fila[]){
    int opcao=0, fim=0;
    
    while(true){
        cout << "Digite 1 para inserir PUSH"<<endl;
        cout << "Digite 2 para remover POP"<<endl;
        cout << "Digite 3 para imprimir"<<endl;
        cin >> opcao;
        
        switch (opcao){
            case 1:
                fim = this->push(fim, QuantElementos, fila);
                break;
            case 2:
                fim = this->pop(fim, fila);
                break;
            case 3:
                this->imprimir(fim, fila);
                break;
            default:
                break;
                
        }
    }
}

int fila::push(int fim, int QuantElementos, int fila[]){
    int valor=0;
    
    if(fim == QuantElementos){
        cout << "É necessário remover um elemento!"<<endl;
    }
    else{
        cout << "Digite um elemento a ser inserido:"<<endl;
        cin >> valor;
        fila[fim] = valor;
        fim++;
    }
    return fim;
}

int fila::pop(int fim, int fila[]){
    int i;
    
    for(i=0; i<fim; i++){
        fila[i] = fila[i+1]; 
    }
    fim--;
    return fim;
}

void fila::imprimir(int fim, int fila[]){
    for(int i=0; i<fim; i++){
        cout << fila[i] <<endl;
    }
}

