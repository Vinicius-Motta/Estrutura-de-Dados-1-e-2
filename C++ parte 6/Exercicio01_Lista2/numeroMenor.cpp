#include "numeroMenor.h"
#include <iostream>

using namespace std;


numeroMenor::numeroMenor() {
}

numeroMenor::numeroMenor(const numeroMenor& orig) {
}

numeroMenor::~numeroMenor() {
}
void numeroMenor::lerDados(){
    int n1, n2;
    
    cout << "digite o primeiro número" << endl;
    cin >> n1;
    cout << "digite o segundo número" << endl;
    cin >> n2;
    cout <<"O menor número é: "<< this->menorNum(n1, n2);
}

int numeroMenor::menorNum(int n1,int n2){
    if (n1 < n2){
        return n1;
    }
    else
        return n2;
    
}

