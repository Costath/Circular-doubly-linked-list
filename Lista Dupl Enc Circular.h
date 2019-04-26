/*

Autor: Thales Costa
Disciplina: ED1
Professor: Irineu
Maio/2017

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct List {
	
	int info;
	List* prox;
	List* ant;
	
}typedef Lista;

Lista* inicializar();
Lista* insere_Inicio(Lista* L, int dado);
Lista* insere_Fim(Lista* L, int dado);
Lista* retira_Inicio(Lista* L, int* elemento);
Lista* retira_Fim(Lista* L, int* elemento);
void mostra_Tudo(Lista* L);
int mostra_Inicio(Lista* L);
int mostra_Fim(Lista* L);
void libera(Lista* L);
void libera_aux(Lista* L);
