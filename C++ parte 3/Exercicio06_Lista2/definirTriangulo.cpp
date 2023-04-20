#include "definirTriangulo.h"
#include <iostream>

using namespace std;

definirTriangulo::definirTriangulo() {
}

definirTriangulo::definirTriangulo(const definirTriangulo& orig) {
}

definirTriangulo::~definirTriangulo() {
}

void definirTriangulo::lerDados(){
    double x, y, z;
    
    cout << "Digite o valor do primeiro lado do triângulo: ";
    cin >> x;
    cout << "Digite o valor do segundo lado do triângulo: ";
    cin >> y;
    cout << "Digite o valor do terceiro lado do triângulo: ";
    cin >> z;
    this->tipoTriangulo(x, y, z);   
}

void definirTriangulo::tipoTriangulo(double x,double y ,double z){
    if ((x<(y+z))&&(y<(x+z))&&(z<(x+y))){
        if ((x==y)&&(y==z))
            cout << "Triângulo Equilátero";
        else
            if ((x!=y)&&(x!=z)&&(y!=z))
                cout << "Triângulo Escaleno";
            else
                cout << "Triângulo isósceles";
    }
    else
        cout << "Impossível formar Triângulo";
    
}

