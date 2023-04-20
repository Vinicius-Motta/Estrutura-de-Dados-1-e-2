#include "cProdutos.h"
#include <iostream>

using namespace std;

cProdutos::cProdutos() {
}

cProdutos::cProdutos(const cProdutos& orig) {
}

cProdutos::~cProdutos() {
}

void cProdutos::cadastro(){

    for(int i=0; i<=5; i++){
        cout<<"Digite o nome de seu produto: "<<endl;
        cin>>this->ListaProdutos[i].nome;
        cout<<"Digite o código do produto: "<<endl;
        cin>>this->ListaProdutos[i].codigo;
        cout<<"Digite o preço do produto: "<<endl;
        cin>>this->ListaProdutos[i].preco;

    }
}
void cProdutos::consultaProdutos(){
    int procurarCod=0;
    for(int i=0; i<=5; i++){
        cout<<"O nome de seu produto é: "<<ListaProdutos[i].nome<< endl;
        cout<<"O código do produto é: "<<ListaProdutos[i].codigo<< endl << endl;
    }
        cout<<"Informe um código de um produto para ver seu preço"<<endl;
        cin>> procurarCod;
        this->pesquisar(procurarCod);
}
void cProdutos::pesquisar(int procurarCod){
    for(int i=0; i<=5; i++){
        if(procurarCod==this->ListaProdutos[i].codigo){
            cout<<"O preço do produto é: "<<ListaProdutos[i].preco<<endl;
        }
    }
}

    


