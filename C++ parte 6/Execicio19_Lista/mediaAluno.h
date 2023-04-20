/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mediaAluno.h
 * Author: Wilian
 *
 * Created on 27 de setembro de 2021, 15:14
 */

#ifndef MEDIAALUNO_H
#define MEDIAALUNO_H

class mediaAluno {
public:
    mediaAluno();
    mediaAluno(const mediaAluno& orig);
    virtual ~mediaAluno();
    
    void lerDados();
    float calcMedia(float n1, float n2, float n3, char tipoMedia);
private:

};

#endif /* MEDIAALUNO_H */

