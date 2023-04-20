
#include <cstdlib>

#include "cProdutos.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cProdutos *obj1 = new cProdutos();
    obj1->cadastro();
    obj1->consultaProdutos();

    return 0;
}

