
#include <cstdlib>

#include "mediaAluno.h"

using namespace std;


int main(int argc, char** argv) {
    
    mediaAluno *obj = new mediaAluno();
    obj->lerDados();
    obj->calcMedia();
    

    return 0;
}

