#include "cAlunos.h"
#include <iostream>

using namespace std;

cAlunos::cAlunos() {
}

cAlunos::cAlunos(const cAlunos& orig) {
}

cAlunos::~cAlunos() {
}

void cAlunos::lerDados(){
    for (int i=0; i<=2; i++){
        cout << "digite o nome do aluno: " << endl;
        cin >> this->ListaAlunos[i].nome;
        cout << "digite a matrícula: " << endl;
        cin >> this->ListaAlunos[i].matricula;
        cout << "digite a primeira nota: "<< endl;
        cin >> this->ListaAlunos[i].n1;
        cout << "digite a segunda nota: "<< endl;
        cin >> this->ListaAlunos[i].n2;
    }
}

void cAlunos::imprimeDados(){
    for (int i=0; i<=2; i++){
        cout << this->ListaAlunos[i].nome << endl;
        cout << this->ListaAlunos[i].matricula << endl;
        cout << (this->ListaAlunos[i].n1+this->ListaAlunos[i].n2)/2 << endl << endl;  
    }
}

