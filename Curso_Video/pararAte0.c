#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int numero, contador =  0;
	
	do {
		
		printf("Digite o n�mero: \n");
		scanf("%d", &numero);

			contador++;
	
		
	} while(numero > 0);
	
	printf("\n A quantidade de n�meros digitados �: %i \n\n", contador);
	
	system("PAUSE");
	return 0;
}
