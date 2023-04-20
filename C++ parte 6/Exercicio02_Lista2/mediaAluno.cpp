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
    cout <<"Digite primeira nota"<<endl;
    cin>>n1;
    cout <<"Digite a segunda nota"<<endl;
    cin>>n2;
    cout <<"Digite a terceira nota"<<endl;
    cin>>n3;
    cout<<"Digite tipo de média que você deseja calcular(A ou P)"<<endl;
    cin>>tipoMedia;
    cout<<this->calcMedia(n1, n2, n3, tipoMedia);
}
float mediaAluno::calcMedia(float n1, float n2, float n3, char tipoMedia){
    float media = 0.0;
    if ((tipoMedia == 'A') || (tipoMedia == 'a')) {
        media = (n1+n2+n3)/3;
        cout<<"A média aritmética é:"<<endl;
        return media;
    }
    if ((tipoMedia == 'P') || (tipoMedia == 'p')){
        media = ((n1*2)+(n2*3)+(n3*5))/10;
        cout<<"A média ponderada é:"<<endl;
        return media;
    }
}

