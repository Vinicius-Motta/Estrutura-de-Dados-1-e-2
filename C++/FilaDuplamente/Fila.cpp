#include "Fila.h"
#include <cstdlib>
#include <iostream>

using namespace std;


Fila::Fila() {
}

Fila::Fila(const Fila& orig) {
}

Fila::~Fila() {
}

bool Fila::vazio(struct nodo *inicio){
	
	if ( inicio == NULL ) 
		return true;
	else
		return false;
}

void Fila::insere(void)
{
	int x;
    cout<<"Digite o elemento a inserir: ";
    cin>>x;
    this->aux= (struct nodo *) malloc (sizeof(this->aux));
    aux->elem=x;
    if(this->inicio == 0){

            this->aux->ant=NULL;

            this->aux->prox=NULL;

            this->inicio = aux;

        }   

        else{

            this->aux->prox=NULL;

            //this->aux->prox=this->inicio; Circular

            this->aux->ant=fim;

            this->fim->prox=this->aux;

          }

          this->fim=this->aux;
}

void Fila::remover(void){
	if (!vazio(this->inicio)){
	   this->aux=this->inicio;
	   this->inicio=this->inicio->prox;
	   free(this->aux);
	   cout<<"\nRemovido com sucesso!";
	}
}

void Fila::bubbleSort(){
    nodo *aux2, *aux3;
    aux3 = this->inicio->prox;
    while(aux3->prox!=NULL){
        for(this->aux = this->inicio; this->aux->prox!=NULL; this->aux=this->aux->prox ) {
            aux2=this->aux->prox;
            if(aux->elem > aux2->elem){
                int temp = this->aux->elem;
                this->aux->elem=aux2->elem;
                aux2->elem=temp;
            }
        }
        aux3=aux3->prox;
    }

}

void Fila::listar(void){
    nodo *p;
    p = this->inicio;
    while (!vazio(p->prox)){
        cout<<"\nITEM"<<p->elem;
        p = p->prox;
    }
    cout<<"\nITEM"<<p->elem<<"\n\n";
}

void Fila::menu(void){
	char op;
	int sair=0;

	inicio=NULL;
	for (;sair==0;){
		cout<<"1 -> Insere na fila\n2 -> Remove da fila\n";
		cout<<"3 -> Listar fila\n4 -> Ordenar\n5 -> Sair da fila\n";
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
                        case '4': bubbleSort();
                      break;
			case '5': sair=1;
                      break;
                        default:  {
                            cout<<"Opção invalida! \n";
                      break;
				  }
		}
	}

}

