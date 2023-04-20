#include "lerValores.h"
#include <iostream>
#include <cstdlib>

using namespace std;


lerValores::lerValores() {
}

lerValores::lerValores(const lerValores& orig) {
}

lerValores::~lerValores() {
}

void lerValores::lerDados(){
    float a, b ,c, soma, subtracao, multiplicacao;
    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "Digite o terceiro valor: ";
    cin >> c;
    this->calcular(&a, &b, &c, &soma, &subtracao, &multiplicacao);
    cout << "A soma entre os numeros é: " << soma << endl;
    cout << "A subtração entre os numeros é: "<< subtracao << endl;
    cout << "A multiplicação entre os numeros é: " << multiplicacao;
}

void lerValores::calcular(float *A,float *B,float *C,float *soma,float *subtracao,float *multiplicacao){
    *soma = *A+*B+*C;
    *subtracao = *A-*B-*C;
    *multiplicacao = *A**B**C;
        
}

