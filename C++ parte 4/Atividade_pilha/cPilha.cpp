
#include "cPilha.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cPilha::cPilha() {
}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}
void cPilha::lerDados(){

    //Alocação Estática
    int qtd_elementos;
    cout<<"Digite a quantidade de elementos";
    cin>>qtd_elementos;
    int pilha[qtd_elementos];
    this->menu(qtd_elementos, pilha);

}

void cPilha::menu(int qtd_elementos, int pilha[]){

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

int cPilha::push(int topo, int qtd_elementos, int pilha[]){
    
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

int cPilha::pop(int topo){
    
    if(topo < 0)
        cout<<"A pilha está vazia"<<endl;
    else
        topo--;
 
    return topo;
}


void cPilha::imprimir(int topo, int pilha[]){

    for(int i=0; i<topo; i++)
        cout<<pilha[i]<<endl;

}

