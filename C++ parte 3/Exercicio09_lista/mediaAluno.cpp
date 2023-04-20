#include <iostream>
#include "mediaAluno.h"

using namespace std;

mediaAluno::mediaAluno() {
}

mediaAluno::mediaAluno(const mediaAluno& orig) {
}

mediaAluno::~mediaAluno() {
}

void mediaAluno::lerDados(){
    cout << "digite a primeira nota: ";
    cin >> this->n1;
    cout << "digite a segunda nota: ";
    cin >> this->n2;
    cout << "digite a terceira nota: ";
    cin >> this->n3;   
}

void mediaAluno::calcMedia(){
    float media=0.0;
    media= (this->n1+this->n2+this->n3)/3;
    cout << "A média é: " << media << endl;
    this->situacaoAluno(media);
}

void mediaAluno::situacaoAluno(float media){
    
    if(media >= 6)
        cout << "Aluno Aprovado!";
    else
        cout << "Aluno Reprovado!";
    
}

