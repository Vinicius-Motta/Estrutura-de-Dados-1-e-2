#include <cstdlib>

#include "cAlunos.h"

using namespace std;


int main(int argc, char** argv) {
    
    cAlunos *obj1 = new cAlunos();
    obj1->lerDados();
    obj1->imprimeDados();

    return 0;
}

