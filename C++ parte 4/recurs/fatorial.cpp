#include "fatorial.h"
#include <cstdlib>
#include <iostream>

using namespace std;

fatorial::fatorial() {
}

fatorial::fatorial(const fatorial& orig) {
}

fatorial::~fatorial() {
}

void fatorial::lerDados(){
    int a;
    cout << "Por favor, digite um número para ser calculado seu fatorial\n";
    cin >> a;
    cout << "O fatorial de "<< a << " é: " << this->fator(a);
}

int fatorial::fator(int a){
    if (a > 1)
        return (a * fator(a-1));
    else
        return (1);
    
    
}

