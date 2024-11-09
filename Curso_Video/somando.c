#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);
	printf("Digite o segundo numero: \n");
	scanf("%d", &b);
	printf("\n");
	printf("A soma de %d com %d eh %d \n", a, b, a+b);
	
	//testando o sizeof
		printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int));
		printf("Tamanho de armazenamento para o tipo short: %d \n", sizeof(short));
	return 0;
}
