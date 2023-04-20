#include "PilhaDuplamente.h"
#include <cstdlib>
#include <iostream>

using namespace std;

PilhaDuplamente::PilhaDuplamente() {
}

PilhaDuplamente::PilhaDuplamente(const PilhaDuplamente& orig) {
}

PilhaDuplamente::~PilhaDuplamente() {
}

bool PilhaDuplamente::vazio(struct nodo *campo){
	
	if ( campo == NULL ) 
		return true;
	else
		return false;
}

void PilhaDuplamente::insere(void)
{
	int x;

        cout<<"\nEntre com o numero a inserir: ";
        cin>>x;
	
	this->aux=(struct nodo *) malloc(sizeof(aux));
	this->aux->elem=x;
	 if(this->topo == 0){

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

void PilhaDuplamente::remover(void){
	if (!vazio(this->topo)){
	   this->aux=this->topo;
	   this->topo=this->topo->ant;
	   free(this->aux);
	   cout<<"\nRemovido com sucesso!";
	}
}

void PilhaDuplamente::listar(void){
        nodo *p;
	p = this->topo;
        while (!vazio(p->ant)){
           cout<<"\nITEM"<<p->elem;
           p = p->ant;
        }
        cout<<"\nITEM"<<p->elem<<"\n\n";

	
}

void PilhaDuplamente::menu(void){
	char op;
	int sair=0;

	topo=NULL;
	for (;sair==0;){
		cout<<"1 -> Insere na pilha\n2 -> Remove da pilha\n";
		cout<<"3 -> Listar pilha\n4 -> Ordena a fila\n5 -> Sai da pilha\n";
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
			case '5': sair=1; break;
                        default:  {
				  cout<<"Opção invalida! \n";
				  break;
				  }
		}
	}

}

void PilhaDuplamente::bubbleSort(void){
    int cont=0;
    int conttotal=0;
    nodo *aux2, *aux3;
    //int repeticao = (this->qtde_elementos)/2;
    aux3 = this->topo->ant;
    while(aux3->prox!=NULL){
        for(this->aux = this->topo; this->aux->prox!=NULL; this->aux=this->aux->ant ) {
            aux2=this->aux->ant;
            if(aux->elem > aux2->elem){
                int bck = this->aux->elem;
                this->aux->elem=aux2->elem;
                aux2->elem=bck;
            }
        }
    aux3=aux3->ant;
    }

}
