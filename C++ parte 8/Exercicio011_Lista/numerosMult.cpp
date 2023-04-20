#include "numerosMult.h"
#include <iostream>

using namespace std;
numerosMult::numerosMult() {
}

numerosMult::numerosMult(const numerosMult& orig) {
}

numerosMult::~numerosMult() {
}

void numerosMult::lerDados(){
    int n1, n2;
    
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
    this->verificar(n1, n2);
    
}

void numerosMult::verificar(int n1,int n2){
    if ((n1>n2)&&(n1%n2==0) || ((n2>n1)&&(n2%n1==0)))
        cout << "Os numeros são multiplos"<< endl;
    else
        cout << "Os numeros não sao multiplos" << endl;
    
}

