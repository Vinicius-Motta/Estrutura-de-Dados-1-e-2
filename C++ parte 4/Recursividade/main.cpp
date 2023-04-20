#include <cstdlib>
#include <iostream>

using namespace std;

int fatorial(int a){
        if (a>1)
            return (a * fatorial(a-1));
        else
            return(1);
    }

int main(int argc, char** argv) {
    int numero;
    cout << "Digite um número: \n";
    cin >> numero;
    cout << numero << "! = " << fatorial(numero)<< endl;
    return 0;
}

