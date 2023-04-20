/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArvoreBinaria.h
 * Author: Wilian
 *
 * Created on 24 de março de 2022, 19:35
 */

#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

class ArvoreBinaria {
public:
    ArvoreBinaria();
    ArvoreBinaria(const ArvoreBinaria& orig);
    virtual ~ArvoreBinaria();
     
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

