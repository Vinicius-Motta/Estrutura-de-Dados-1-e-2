/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cCalculadora.h
 * Author: Wilian
 *
 * Created on 3 de janeiro de 2022, 08:24
 */

#ifndef CCALCULADORA_H
#define CCALCULADORA_H

class cCalculadora {
public:
    cCalculadora();
    cCalculadora(const cCalculadora& orig);
    virtual ~cCalculadora();
    void lerDados();
    void funcoes(float vet[2], float vetOp[3]);
private:

};

#endif /* CCALCULADORA_H */

