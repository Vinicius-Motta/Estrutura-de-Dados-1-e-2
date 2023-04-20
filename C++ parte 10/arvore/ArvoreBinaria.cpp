/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArvoreBinaria.cpp
 * Author: Wilian
 * 
 * Created on 24 de março de 2022, 19:35
 */

#include "ArvoreBinaria.h"
#include <cstdlib>
#include <iostream>

using namespace std;

ArvoreBinaria::ArvoreBinaria() {
}

ArvoreBinaria::ArvoreBinaria(const ArvoreBinaria& orig) {
}

ArvoreBinaria::~ArvoreBinaria() {
}

bool ArvoreBinaria::vazio() {
    return this->raiz == NULL;
}

void ArvoreBinaria::insere (int valor) {
    No *tmp = this->raiz;
    No *ant = NULL;
    
    while (tmp != NULL){
        ant = tmp;
        if (tmp->valor < valor)
            tmp = tmp->direito;
        else
            tmp = tmp->esquerdo;
    }
    if (this->vazio()){
        this->raiz = ( No *) malloc( sizeof(No));
        this->raiz->valor = valor;
    }else 
        if(ant->valor < valor){
            ant->direito = ( No *) malloc( sizeof(No));
            ant->direito->valor = valor;
        }else{
            ant->esquerdo = ( No *) malloc( sizeof(No));
            ant->esquerdo->valor = valor;
        }
}

void ArvoreBinaria :: listar (No *inicio) {
    if (inicio != NULL) {
        this->listar (inicio->esquerdo);   
        cout << inicio->valor << " ";
        this->listar (inicio->direito);
    }
}


