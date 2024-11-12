#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 6

int main(){
	setlocale(LC_ALL, "");
	
	int numero[TAM];
	int i, aux, contador;
	printf("Entre com 6 números para preencher o array, e pressione enter após digitar cada um: \n");
	//Entrada dos dados
	for(i = 0; i < 6; i++){
		scanf("%d", &numero[i]);
	}
	
	printf("Ordem atual dos itens no array:\n");
	//Mostrando a ordem atual
	for(i = 0; i < 6; i++){
		printf("%4d", numero[i]);
	}
	//Algoritmo de ordenação Bubblesort:
	for(contador = 1; contador < TAM; contador++){
		for(i = 0; i < TAM - 1; i++){
			if(numero[i] > numero[i+1]){
				aux = numero[i];
				numero[i+1] = aux;
			} 
		}
	}
	
		printf("\n Elementos do array em ordem crescente:\n");
		for(i = 0; i < TAM; i++){
			printf("%4d", numero[i]);
	}
 	return 0;
}
