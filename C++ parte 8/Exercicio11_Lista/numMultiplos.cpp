#include "numMultiplos.h"

#include <iostream>

using namespace std;

numMultiplos::numMultiplos() {
}

numMultiplos::numMultiplos(const numMultiplos& orig) {
}

numMultiplos::~numMultiplos() {
}
void numM(){
    
    int n1, n2;
    cout <<"Digite o primeiro número"<<endl;
    cin >> n1;
    cout<< "Digite o segundo número"<<endl;
    cin >> n2;
    cout << this->verificar(n1,n2);
}
void numMultiplos::verificar(int n1,int n2){
    if(n1%n2==0)
    cout<<"Os números são multiplos";
    else
    cout<<"Os números não são multiplos";
}
