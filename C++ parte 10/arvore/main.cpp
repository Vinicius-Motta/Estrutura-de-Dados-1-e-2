/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Wilian
 *
 * Created on 24 de março de 2022, 19:34
 */

#include <cstdlib>
#include <iostream>

#include "ArvoreBinaria.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ArvoreBinaria *obj = new ArvoreBinaria();
   
    obj->insere(5);
    obj->insere(7);
    obj->insere(9);
    obj->insere(14);
    obj->insere(16);
   
    
    obj->listar(obj->raiz);

    return 0;
}

