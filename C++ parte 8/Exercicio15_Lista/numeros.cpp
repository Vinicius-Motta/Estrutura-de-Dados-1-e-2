#include <iostream>
#include "numeros.h"

using namespace std;

numeros::numeros() {
}

numeros::numeros(const numeros& orig) {
}

numeros::~numeros() {
}

void numeros::lerDados(){
    int num=0;

    cout<<"Informe um número: "<<endl;
    cin>>num;
    this->classificarParImpar(num);
}
void numeros::classificarParImpar(int num){
    if((num%2==0)&&(num>0)){
        cout<<"O numero digitado é PAR e POSITIVO "<<endl;
    }
    else if((num%2!=0)&&(num<0)){
        cout<<"O numero digitado é ÍMPAR e NEGATIVO "<<endl;

    }
    else if((num%2!=0)&&(num>0)){
        cout<<"O numero digitado é ÍMPAR e POSITIVO "<<endl;
    }
    else{
        cout<<"O numero digitado é PAR e NEGATIVO "<<endl;
    }
}

