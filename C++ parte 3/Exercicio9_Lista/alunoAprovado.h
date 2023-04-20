/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   alunoAprovado.h
 * Author: Wilian
 *
 * Created on 27 de setembro de 2021, 15:47
 */

#ifndef ALUNOAPROVADO_H
#define ALUNOAPROVADO_H

class alunoAprovado {
public:
    alunoAprovado();
    alunoAprovado(const alunoAprovado& orig);
    virtual ~alunoAprovado();
    void lerDados ();
    float calcMedia();
    void aprovacao();
private:

};

#endif /* ALUNOAPROVADO_H */

