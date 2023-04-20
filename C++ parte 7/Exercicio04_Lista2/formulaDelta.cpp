#include "formulaDelta.h"
#include <iostream>
#include <math.h>

using namespace std;

formulaDelta::formulaDelta() {
}

formulaDelta::formulaDelta(const formulaDelta& orig) {
}

formulaDelta::~formulaDelta() {
}

void formulaDelta::lerDados(){
    double a, b, c;
    
    cout << "Digite um valor para 'a'" << endl;
    cin >> a;
    cout << "Digite um valor para 'b'" << endl;
    cin >> b;
    cout << "Digite um valor para 'c'" << endl;
    cin >> c;
    cout << this->calcularDelta(a,b,c);
}

double formulaDelta::calcularDelta( double a, double b, double c){
    double delta=0;
    b= pow(b,2);
    delta=b-4*a*c;
    return delta;
}

