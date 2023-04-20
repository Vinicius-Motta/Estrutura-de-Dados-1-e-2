/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Wilian
 *
 * Created on 19 de março de 2022, 08:41
 */

#include <cstdlib>
#include <iostream>
#include "arvoreBinaria.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int valor, quanty = 0;
    
    arvoreBinaria *arvore = new arvoreBinaria();
    cout<<"Digite a qtde de valores a serem adicionados na arvore"<<endl;
    cin>>quanty;
    cout<<"Digite os valores"<<endl;
    for(int i = 0; i < quanty; i++) {
        cin>>valor;
        arvore->insere(valor);
    }
    arvore->listar(arvore->raiz);

    return 0;
}

