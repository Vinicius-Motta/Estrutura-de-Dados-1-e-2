#include "mediaAluno.h"
#include <iostream>

using namespace std;

mediaAluno::mediaAluno() {
}

mediaAluno::mediaAluno(const mediaAluno& orig) {
}

mediaAluno::~mediaAluno() {
}
void mediaAluno::lerDados(){
    
    float n1 = 0.0, n2 = 0.0, n3 = 0.0;
    char tipoMedia;
    
    cout<<"Digite n1"<<endl;
    cin>>n1;
    cout<<"Digite n2"<<endl;
    cin>>n2;
    cout<<"Digite n3"<<endl;
    cin>>n3;
    cout<<"Digite o tipo da media( A, P ou H)"<<endl;
    cin>>tipoMedia;
    
    cout << this->calcMedia(n1, n2, n3, tipoMedia);
    
}

float mediaAluno::calcMedia(float n1, float n2, float n3, char tipoMedia){

    float media =0.0;
    if((tipoMedia == 'A')||(tipoMedia == 'a'))
        media = (n1+n2+n3)/3;
    if((tipoMedia == 'P')||(tipoMedia == 'p'))
        media = (((n1*5)+(n2*3)+(n3*2))/10);
    if((tipoMedia == 'H')||(tipoMedia == 'h'))
        media = 3/((1/n1) + (1/n2) +(1/n3));
    
    return media;
}

