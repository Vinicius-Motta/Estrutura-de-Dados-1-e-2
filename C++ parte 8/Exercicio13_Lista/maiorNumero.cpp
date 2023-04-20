#include "maiorNumero.h"
#include <iostream>

using namespace std;

maiorNumero::maiorNumero() {
}

maiorNumero::maiorNumero(const maiorNumero& orig) {
}

maiorNumero::~maiorNumero() {
}

void maiorNumero::lerDados(){

    int n1=0, n2=0, n3=0, maior=0;
    cout<<"Informe o primeiro número"<<endl;
    cin>> n1;
    cout<<"Informe o segundo número"<<endl;
    cin>> n2;
    cout<<"Informe o terceiro número"<<endl;
    cin>> n3;
    cout<< this->maiorNum(n1, n2, n3, maior);
}
int maiorNumero::maiorNum(int n1, int n2, int n3, int maior){
    if((n1>n2) && (n1>n3)){
        cout << "O maior dos números digitados é: ";
        return n1;
    }
    else if((n2>n1) && (n2>n3)){
        cout<< "O maior número é: ";
        return n2;
    }
    else if((n3>n1) && (n3>n2)){
        cout<< "O maior número é: ";
        return n3;
     }
}
