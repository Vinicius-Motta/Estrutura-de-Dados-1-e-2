#include "idadeAnos.h"
#include  <iostream>

using namespace std;


idadeAnos::idadeAnos() {
}

idadeAnos::idadeAnos(const idadeAnos& orig) {
}

idadeAnos::~idadeAnos() {
}

void idadeAnos::lerDados(){
    int dias;
    cout << "Informe sue idade em dias"<< endl;
    cin >> dias;
    cout << this->lerIdade(dias);
}
int idadeAnos::lerIdade(int dias, int meses, int anos){
    dias += (anos * 365) + (meses * 30);
    return dias;
}

