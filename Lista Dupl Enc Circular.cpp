/*

Autor: Thales Costa
Disciplina: ED1
Professor: Irineu
Maio/2017

*/

#include "Lista Enc Circular.h"

Lista* inicializar(){
	
	return NULL;
}

Lista* insere_Inicio(Lista* L, int dado){		//Insere no inicio da lista o elemento informado e retorna o ponteiro criado.
	
	Lista* novo = (Lista*)malloc(sizeof(Lista));		//pronto 21/05
	novo->info = dado;

	if(L == NULL){
		novo->prox = novo;
		novo->ant = novo;
		
	}else/* if(L == L->prox)*/{
		novo->prox = L;
		L->prox = novo;
		
		novo->ant = L;
		L->ant = novo;
		
	}/*else{				//verificar se a segunda adição funciona de igual maneira às demais
		novo->prox = L;
		L->ant->prox = novo;
		
		novo->ant = L->ant;
		L->ant = novo;
		
	}*/
	
	return novo;
}

Lista* insere_Fim(Lista* L, int dado){		//Insere no fim da lista o elemento informado.
	
	Lista* novo = (Lista*)malloc(sizeof(Lista));		//pronto 21/05
	novo->info = dado;

	if(L == NULL){
		novo->prox = novo;
		novo->ant = novo;
		
		return  novo;
	}else/* if(L == L->prox)*/{
		novo->prox = L;
		novo->ant = L;
		
		L->prox = novo;
		L->ant = novo;
		
		return L;
	}/*else{						//verificar se a segunda adição funciona de igual maneira às demais
		novo->prox = L;
		novo->ant = L->ant;
		
		L->ant->prox = novo;
		L->ant = novo;
		
		return L;
	}*/
	
}

Lista* retira_Inicio(Lista* L, int* elemento){		//Retira o primeiro elemento da lista.
	
	if(L == NULL){		//pronto 21/05
		
		return NULL;
	}else if(L == L->prox){
		*elemento = L->info;
		free(L);
			
		return NULL;
	}else{
		*elemento = L->info;
		Lista* P;
		P = L->prox;
		
		P->ant = L->ant;
		L->ant->prox = P; 
		
		free(L);
		
		return P;
	}
	
}

Lista* retira_Fim(Lista* L, int* elemento){		//Retira o primeiro elemento da lista.
	
	if(L == NULL){		//pronto 21/05
		
		return NULL;
	}else if(L == L->prox){
		*elemento = L->info;
		free(L);
			
		return NULL;
	}else{
		*elemento = L->info;
		Lista* P = L->ant;
		
		P->ant->prox = L;
		L->ant = P->ant;
		
		free(P);
		
		return L;
	}
	
}

Lista* Remove_elemento(Lista* L, int elemento){		//Mostra os elementos da lista de forma recursiva.
	
/*	Lista* P = L;
		
	do{
		if(elemento == P->info){
			*found = true;

			if(P == P->prox){
				free(P);
				return NULL;
				
			}else{
				P->ant->prox = P->prox;
				P->prox->ant = P->ant;
				
			}
			
			free(P);
			return L;
		}
		P = P->prox;
	}while(P != L);
	
	*found = false;
	return L;*/
	
}

int mostra_Inicio(Lista* L){		//Retorna o primeiro elemento da lista.
	
	return L->prox->info;
}

int mostra_Fim(Lista* L){		//Retorna o último elemento da lista.
	
	return L->info;
}

void libera(Lista* L){		//Libera, com auxilio da função libera_aux, a memória alocada, caso tenha alguma.

	if(L != NULL){
		Lista* P = (Lista*)malloc(sizeof(Lista));
	
		P = L->prox;
		L->prox = NULL;
	
		libera_aux(P);
	}
	
}

void libera_aux(Lista* L){		//Libera, de forma recursiva, a memória alocada, caso tenha alguma.
	
	if(L != NULL){
		libera_aux(L->prox);
		free(L);
	}
	
}



