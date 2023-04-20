#include "cCalculadora.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cCalculadora::cCalculadora() {
}

cCalculadora::cCalculadora(const cCalculadora& orig) {
}

cCalculadora::~cCalculadora() {
}

void cCalculadora::lerDados(){
    
    float vetDados[2], vetOp[3];

    cin>>vetDados[0];

    cin>>vetDados[1];

    this->funcoes(vetDados, vetOp);

    cout<< vetOp[0] << endl << vetOp[1]<< endl << vetOp[2];

}



void cCalculadora::funcoes(float vet[], float vetOp[]){

    vetOp[0]=vet[0]+vet[1];

    vetOp[1]=vet[0]-vet[1];

    vetOp[2]=vet[0]*vet[1];

}

