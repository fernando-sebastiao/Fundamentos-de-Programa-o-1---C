#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int numero, i, valor, maior = 0;
	
	printf("Digite o numero de repetições!: ");
	scanf("%d", &numero);
	
	if(numero<= 0){
		printf("\n Digite um número positivo!\n");
		return 0;
	}
	
	for(i = 1; i <= numero;  i++){
		printf("Digite o %d valor: \n", i);
		scanf("%d", &valor);
		if(valor > maior){
			maior = valor;
		}
		
	}
	printf("\nO maior elemento é %d", maior);
	return 0;
	system("PAUSE");
}
