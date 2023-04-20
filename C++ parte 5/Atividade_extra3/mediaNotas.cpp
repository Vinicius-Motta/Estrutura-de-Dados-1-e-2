#include "mediaNotas.h"
#include <cstdlib>
#include <iostream>

using namespace std;

mediaNotas::mediaNotas() {
}

mediaNotas::mediaNotas(const mediaNotas& orig) {
}

mediaNotas::~mediaNotas() {
}

void mediaNotas::lerDados(){
    float n1 = 0.0, n2 = 0.0, n3 = 0.0, media = 0.0;
    
    cout <<"Digite primeira nota"<<endl;
    cin>>n1;
    cout <<"Digite a segunda nota"<<endl;
    cin>>n2;
    cout <<"Digite a terceira nota"<<endl;
    cin>>n3;
    this->calcMedia(&n1, &n2, &n3, &media);
    cout << "A média é: " << media;
}

void mediaNotas::calcMedia(float *A, float *B, float *C, float *media){
    *media = (*A+*B+*C)/3;
    //cout << "A média é: " << media;
    
}

