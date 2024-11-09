#include<stdio.h>
#include<stdlib.h>

int main(){
	int contador = 0;
	float valor, media, total;
	total = 0;
	printf("Digite um valor (-1 para encerrar): ");
	scanf("%f", &valor);
	if(valor == -1.0){
		exit(1);
	}
	do {
		
		total+= valor;
		contador++;
		
		printf("Digite um valor (-1 para encerrar): ");
		scanf("%f", &valor);
		
	} while(valor!= -1);
	
	media = total / contador;
	if(media < 10.0){
		printf("\nO aluno deve ir a recurso com a media %.2f \n", media);
		printf("\n------------------------------------\n");
	}
	else if(media == 10){
	printf("\nO aluno aprovou mais tem se esforcar mais \n");
	printf("\n------------------------------------\n");
	}

	else if(media > 10){
		printf("\nO aluno aprovou com a media %.2f. \n", media);
		printf("\n------------------------------------\n");
	}
	
	printf("\nA media final eh: %.2f \n", media);
	return 0;
}
