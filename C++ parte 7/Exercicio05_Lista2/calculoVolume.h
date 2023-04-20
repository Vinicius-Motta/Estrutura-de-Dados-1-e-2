/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calculoVolume.h
 * Author: Wilian
 *
 * Created on 6 de outubro de 2021, 14:44
 */

#ifndef CALCULOVOLUME_H
#define CALCULOVOLUME_H

class calculoVolume {
public:
    calculoVolume();
    calculoVolume(const calculoVolume& orig);
    virtual ~calculoVolume();
    void lerDados();
    double calcVolume(double r);
private:

};

#endif /* CALCULOVOLUME_H */

