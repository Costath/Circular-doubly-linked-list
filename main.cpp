/*

Autor: Thales Costa
Disciplina: ED1
Professor: Irineu
Maio/2017

*/

#include "Lista Enc Circular.h"

int main() {
setlocale(LC_ALL, "");
	
	system("title Lista encadeada simples");
	
	int funcao, elemento;
	Lista* L;
	L = inicializar();
	
	menu:
	
	printf("==Lista encadeada simples==\n\n");
	printf("Selecione a função desejada:\n");
	printf("1 - Insere inicio\n");
	printf("2 - Insere fim\n");
	printf("3 - Remove inicio\n");
	printf("4 - Remove fim\n");
	printf("5 - Remove elemento\n");
	printf("6 - Imprime frente fim\n");
	printf("7 - Imprime reverso\n");
	printf("0 - Sair\n\n");
	
	scanf("%d", &funcao);
	
	switch(funcao){			//Direciona para a função requisitada no menu acima.
		case(1):		//Insere no inicio da lista o elemento informado.
			printf("\nInforme o elemento inteiro a ser inserido no inicio: ");
			scanf("%d", &elemento);
			
			L = insere_Inicio(L, elemento);
			
			system("cls");
		break;
		case(2):		//Insere no fim da lista o elemento informado.
			printf("\nInforme o elemento inteiro a ser inserido no fim: ");
			scanf("%d", &elemento);
			
			L = insere_Fim(L, elemento);
			
			system("cls");
		break;
		case(3):		//Retira o primeiro elemento da lista.
			if(L != NULL){
				
				L = retira_Inicio(L, &elemento);
				
				printf("O elemento %d foi retirado.\n", elemento);
				system("cls");
			}else{
				
				printf("\nA lista já se encontra vazia.\n");
				system("pause");
				system("cls");
			}
		break;
		case(4):		//Retira o último elemento da lista.
			if(L != NULL){
				
				L = retira_Fim(L, &elemento);
				
				printf("O elemento %d foi retirado.\n", elemento);
				system("cls");
			}else{
				
				printf("\nA lista já se encontra vazia.\n");
				system("pause");
				system("cls");
			}
		break;
		case(5):		//Mostra os elementos da lista.
			if(L != NULL){
				
				mostra_Tudo(L);
			}else{
				
				printf("\nA lista está vazia.\n");
			}
			
			system("pause");
			system("cls");
		break;
		case(6):		//Mostra o primeiro elemento da lista.
			if(L != NULL){
				
				printf("\nO primeiro elemento da lista é: %d\n", mostra_Inicio(L));
			}else{
				
				printf("\nA lista está vazia.\n");
			}
			
			system("pause");
			system("cls");
		break;
		case(7):		//Mostra o último elemento da lista.
			if(L != NULL){
				
				printf("\nO último elemento da lista é: %d\n", mostra_Fim(L));
			}else{
				
				printf("\nA lista está vazia.\n");
			}
			
			system("pause");
			system("cls");
			
		break;
		case(0):		//Libera a memória alocada, caso tenha alguma, e encerra o programa.
			libera(L);
				
			printf("\nObrigado!\n");
			
			return 0;
		break;
	}
	
	goto menu;		//Mantém no menu enquanto não for selecionada a opção "sair".
	
}
