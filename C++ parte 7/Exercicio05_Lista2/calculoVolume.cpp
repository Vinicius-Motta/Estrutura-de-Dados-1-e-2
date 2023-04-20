#include "calculoVolume.h"
#include <iostream>
#include <math.h>

using namespace std;

calculoVolume::calculoVolume() {
}

calculoVolume::calculoVolume(const calculoVolume& orig) {
}

calculoVolume::~calculoVolume() {
}

void calculoVolume::lerDados(){
    double r = 0;
    cout << "DIgite o valor do raio: ";
    cin >> r;
    cout << this->calcVolume(r);
      
}

double calculoVolume::calcVolume(double r){
    double pi=3.14, v = 0;
    
    r= pow(r,3);
    v=4*pi*r/3;
    cout << "O volume da esfera é: ";
    return v;
            
    
}

