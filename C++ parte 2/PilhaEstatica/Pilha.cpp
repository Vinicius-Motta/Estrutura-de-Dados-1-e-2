#include "pilha.h"
#include <iostream>

using namespace std;

Pilha::Pilha() {
}

Pilha::Pilha(const Pilha& orig) {
}

Pilha::~Pilha() {
}

void Pilha::lerDados(){

    int qtd_elementos;
    cout<<"Digite a quantidade de elementos";
    cin>>qtd_elementos;
    int pilha[qtd_elementos];
    this->menu(qtd_elementos, pilha);

}

void Pilha::menu(int qtd_elementos, int pilha[]){

    int opcao=0, topo=0;
    while(true){
    
        cout<<"Digite 1 para inserir PUSH"<<endl;
        cout<<"Digite 2 para remover POP"<<endl;
        cout<<"Digite 3 para imprimir"<<endl;
        cin>>opcao;
        
        switch(opcao){
             case 1: topo = this->push(topo, qtd_elementos, pilha);
                     break;
             case 2: topo = this->pop(topo);
                     break;
             case 3: this->imprimir(topo, pilha);
                     break;
             default: break;              
    
         }
    }
}

int Pilha::push(int topo, int qtd_elementos, int pilha[]){
    
    int valor=0;
    
    if(topo == qtd_elementos)
        cout<<"é necessário remover um elemento"<<endl;
    else{
        cout<<"Digite um elemento a ser inserido na pilha"<<endl;
        cin>>valor;
        pilha[topo]=valor;
        topo++;
    }  
    return topo;

}

int Pilha::pop(int topo){
    
    if(topo < 0)
        cout<<"A pilha está vazia"<<endl;
    else
        topo--;
 
    return topo;
}


void Pilha::imprimir(int topo, int pilha[]){

    for(int i=0; i<topo; i++)
        cout<<pilha[i]<<endl;

}

