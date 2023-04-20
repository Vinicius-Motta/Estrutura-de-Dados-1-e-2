#include "fila.h"
#include <cstdlib>
#include <iostream>

using namespace std;

fila::fila() {
}

fila::fila(const fila& orig) {
}

fila::~fila() {
}

bool fila::vazio(struct nodo *inicio){
	
	if ( inicio == NULL ) 
		return true;
	else
		return false;
}

void fila::insere(void)
{
    int x;
    cout<<"Digite o elemento a inserir: ";
    cin>>x;
    this->aux= (struct nodo *) malloc (sizeof(this->aux));
    aux->elem=x;
    aux->prox=NULL;

    if (inicio == 0)
        inicio = aux;
    else{
        fim->prox=aux;
    }
    fim=aux;

     cout<<this->aux->elem<<" Inserido com sucesso!\n\n";
}

void fila::remover(void){
	if (!vazio(this->inicio)){
	   this->aux=this->inicio;
	   this->inicio=this->inicio->prox;
	   free(this->aux);
	   cout<<"\nRemovido com sucesso!";
	}
}

void fila::listar(void){
    nodo *p;
    p = this->inicio;
    while (!vazio(p->prox)){
        if(p->elem == 5)
        cout<<"\nITEM"<<p->elem;
        
        p = p->prox;
        
    }
    cout<<"\nITEM"<<p->elem<<"\n\n";
}

void fila::menu(void){
	char op;
	int sair=0;

	inicio=NULL;
	for (;sair==0;){
		cout<<"1 -> Insere na fila\n2 -> Remove da fila\n";
		cout<<"3 -> Listar fila\n4 -> Sair da fila\n";
		cout<<"\nDigite uma opção: ";
		cin>>op;
		switch (op)
		{
			case '1': insere(); 
                      break;
		  	case '2': remover(); 
                      break;
			case '3': listar(); 
                      break;
			case '4': sair=1; break;
			default:  {
				  cout<<"Opção invalida! \n";
				  break;
				  }
		}
	}

}

