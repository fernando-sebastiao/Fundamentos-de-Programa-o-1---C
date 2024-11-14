#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int numero, contador =  0;
	
	do {
		
		printf("Digite o número: \n");
		scanf("%d", &numero);
		if(numero < 0){
			return 1;
		}
		
		contador++;
		
		
	} while(numero > 0);
	printf("\n A quantidade de números digitados é: %d\n\n", contador);
	system("PAUSE");
	return 0;
}
