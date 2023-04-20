#include "pilhaEstudoStatic.h"
#include <cstdlib>
#include <iostream>

using namespace std;

pilhaEstudoStatic::pilhaEstudoStatic() {
}

pilhaEstudoStatic::pilhaEstudoStatic(const pilhaEstudoStatic& orig) {
}

pilhaEstudoStatic::~pilhaEstudoStatic() {
}

void pilhaEstudoStatic::lerDados(){
    int qtdElem;
    cout<<"Digite a quantidade de elementos" << endl;
    cin >> qtdElem;
    int vPilha[qtdElem];
    this->menu(qtdElem, vPilha);
}

void pilhaEstudoStatic::menu(int qtdElem, int pilha[]){
    int opc=0, topo=0;
    while(true){
        
        cout << "Digite 1 para inserir PUSH " << endl;
        cout << "Digite 2 para retirar POP " << endl;
        cout << "Digite 3 para imprimir " << endl;
        cin >> opc;
        
        switch(opc){
            case 1: topo = this->push(topo, qtdElem, pilha);
                break;
            case 2: topo = this->pop(topo);
                break;
            case 3:this->imprimir(topo, pilha);
                break;
            default: break;
        }
    }  
}

int pilhaEstudoStatic::push(int topo, int qtdElem,int pilha[]){
    int valor=0;
    
    if(topo == qtdElem)
        cout << "É necessário remover um elemento";
    else {
        cout<<"Digite um elemento a ser inserido na pilha " << endl;
        cin >> valor;
        pilha[topo]=valor;
        topo++;
    }
    return topo;
    
    
}
