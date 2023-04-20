/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   numerosMult.h
 * Author: Wilian
 *
 * Created on 30 de setembro de 2021, 10:46
 */

#ifndef NUMEROSMULT_H
#define NUMEROSMULT_H

class numerosMult {
public:
    numerosMult();
    numerosMult(const numerosMult& orig);
    virtual ~numerosMult();
    void lerDados();
    void verificar(int n1,int n2);
private:

};

#endif /* NUMEROSMULT_H */

