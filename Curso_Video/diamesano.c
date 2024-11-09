#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int dia, mes, ano;
	
	// %*c => permite inserir um caractere no meio de numeros!
	printf("Digite uma data no formato dd/mm/aa: ");
	scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
	printf("\nDia: %d \n", dia);
	printf("\nMes: %d \n", mes);
	printf("\nAno: %d \n", ano);
	return 0;
}
