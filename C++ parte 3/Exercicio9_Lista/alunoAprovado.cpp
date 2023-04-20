#include "alunoAprovado.h"
#include <iostream>

using namespace std;

alunoAprovado::alunoAprovado() {
}

alunoAprovado::alunoAprovado(const alunoAprovado& orig) {
}

alunoAprovado::~alunoAprovado() {
}

void alunoAprovado::lerDados(){

    float n1 = 0.0, n2 = 0.0, n3 = 0.0;
    cout <<"Digite n1"<<endl;
    cin >> n1;
    cout <<"Digite n2"<<endl;
    cin >> n2;
    cout << "Digite n3"<<endl;
    cin >> n3;
    cout << this->calcMedia(n1, n2, n3);
}
   
float alunoAprovado::calcMedia(float n1,float n2,float n3){
    media = (n1 + n2 + n3)/3;
    return media;
}
/*
void alunoAprovado::aprovacao( float media){
    if( media >= 6){
        cout <<this->calcMedia(media) "Aluno Aprovado";
    }
    if (media < 6){
        cout <<this->calcMedia(media) "Aluno reprovado";
    }
}*/



