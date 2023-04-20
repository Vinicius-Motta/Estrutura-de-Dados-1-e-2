/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arvoreBinaria.cpp
 * Author: Wilian
 * 
 * Created on 19 de março de 2022, 08:41
 */

#include "ArvoreBinaria.h"
#include <cstdlib>
#include "iostream"
#include <stddef.h>


using namespace std;

arvoreBinaria::arvoreBinaria() {
    this->raiz=NULL;
}

arvoreBinaria::arvoreBinaria(const arvoreBinaria& orig) {
}

arvoreBinaria::~arvoreBinaria() {
}

bool arvoreBinaria::vazio() {
    return this->raiz == NULL;
}

void arvoreBinaria::insere (int valor) {
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

void arvoreBinaria :: listar (No *inicio) {
    if (inicio != NULL) {
        this->listar (inicio->esquerdo);   
        cout << inicio->valor << " ";
        this->listar (inicio->direito);
    }
}

