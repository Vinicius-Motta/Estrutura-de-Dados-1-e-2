#include "Fila.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Fila::Fila() {
}

Fila::Fila(const Fila& orig) {
}

Fila::~Fila() {
}

void Fila::lerDados(){
    int numElementos;
    
    cout << "Digite a quantidade de elementos\n";
    cin >> numElementos;
    int vFila[numElementos];
    this->menu(numElementos, vFila);
}

void Fila::menu(int numElementos, int vFila[]){
    int opc = 0, fim = 0;
    
    while(true){
        cout << "Digite 1 para inserir PUSH\n";
        cout << "Digite 2 para inserir POP\n";
        cout << "Digite 3 para imprimir\n";
        cin >> opc;
    }
   
}

