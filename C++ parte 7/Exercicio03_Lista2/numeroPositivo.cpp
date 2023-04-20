#include "numeroPositivo.h"
#include <iostream>

using namespace std;

numeroPositivo::numeroPositivo() {
}

numeroPositivo::numeroPositivo(const numeroPositivo& orig) {
}

numeroPositivo::~numeroPositivo() {
}

void numeroPositivo::lerDados(){
    int num=0;
    cout<<"Digite um número"<<endl;
    cout << "Se o retorno for 1 = POSITIVO, 0 = 0 e -1= NEGATIVO" << endl;
    cin>>num;
    cout<<"O numero correspondente é: "<<this->positivoNegativo(num);
}
int numeroPositivo::positivoNegativo(int num){
    if(num<0){
        return -1;
    }
    else if(num>0){
        return 1;
    }
    else if(num==0){
        return 0;
    }
}
