#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nota1, nota2, media = 0;
	int i = 1;
	for(i =1; i <=4; i++){
		printf("Digite as notas: \n");
		scanf("%f%f", &nota1, &nota2);
		media= (nota1 + nota2) / 2;
		printf("\nA nota do %d aluno eh: %.2f \n", i, media);
		printf("\n");
	}
	return 0;
}
