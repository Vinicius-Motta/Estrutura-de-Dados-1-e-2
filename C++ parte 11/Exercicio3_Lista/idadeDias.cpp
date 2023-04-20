#include "idadeDias.h"
#include<iostream>
using namespace std;
idadeDias::idadeDias() {
}

idadeDias::idadeDias(const idadeDias& orig) {
}

idadeDias::~idadeDias() {
}
void idadeDias::lerDados(){
    int meses, anos, dias;
    cout << "Informe sua idade em anos"<< endl;
    cin >> anos;
    cout << "Informe sua idade em meses"<< endl;
    cin >> meses;
    cout << "Informe sue idade em dias"<< endl;
    cin >> dias;
    cout << this->lerIdade(dias, meses, anos);
}
int idadeDias::lerIdade(int dias, int meses, int anos){
    dias += (anos * 365) + (meses * 30);
    return dias;
}