#include "MediaAluno.h"
#include <iostream>

using namespace std;

MediaAluno::MediaAluno() {
}

MediaAluno::MediaAluno(const MediaAluno& orig) {
}

MediaAluno::~MediaAluno() {
}
void MediaAluno::lerDados(){

    float n1 = 0.0, n2 = 0.0, n3 = 0.0, media = 0.0;
    cout <<"Digite a primeira nota"<<endl;
    cin>>n1;
    cout <<"Digite a segunda nota"<<endl;
    cin>>n2;
    cout <<"Digite a terceira nota"<<endl;
    cin>>n3;
    cout << this->calcMedia(n1, n2, n3, media);
}
float MediaAluno::calcMedia(float n1, float n2, float n3, float media){
    media = ((n1*2)+(n2*3)+(n3*5))/10;
    cout<<"A média é:"; 
    return media; 
}

