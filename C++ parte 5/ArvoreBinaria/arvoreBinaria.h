/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arvoreBinaria.h
 * Author: Wilian
 *
 * Created on 19 de março de 2022, 08:41
 */

#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

class arvoreBinaria {
public:
    arvoreBinaria();
    arvoreBinaria(const arvoreBinaria& orig);
    virtual ~arvoreBinaria();
    struct No{
        int valor;
        struct No *direito;
        struct No *esquerdo;
    }*raiz;
    
    bool vazio();
    void insere (int valor);
    void listar (No *no);
private:

};

#endif /* ARVOREBINARIA_H */

