/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maiorNumero.h
 * Author: Wilian
 *
 * Created on 30 de setembro de 2021, 08:30
 */

#ifndef MAIORNUMERO_H
#define MAIORNUMERO_H

class maiorNumero {
public:
    maiorNumero();
    maiorNumero(const maiorNumero& orig);
    virtual ~maiorNumero();
    void lerDados();
    int maiorNum(int num1, int num2, int num3, int maior);
private:

};

#endif /* MAIORNUMERO_H */

