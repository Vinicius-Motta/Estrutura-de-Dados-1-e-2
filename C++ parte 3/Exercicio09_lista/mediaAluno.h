/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mediaAluno.h
 * Author: Wilian
 *
 * Created on 28 de setembro de 2021, 14:06
 */

#ifndef MEDIAALUNO_H
#define MEDIAALUNO_H

class mediaAluno {
public:
    
    float n1, n2, n3;
    
    mediaAluno();
    mediaAluno(const mediaAluno& orig);
    virtual ~mediaAluno();
    void lerDados();
    void calcMedia();
    void situacaoAluno(float media);
private:

};

#endif /* MEDIAALUNO_H */

