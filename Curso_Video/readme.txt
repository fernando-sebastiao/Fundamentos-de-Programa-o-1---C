//Função para poder verificar o tamanho de um tipo de dados: sizeof()//

exemplo: 
printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int));
printf("Tamanho de armazenamento para o tipo short: %d \n", sizeof(short));

// %*C // => indica que tera um caractere no momento de inserir os dados(maioritariamente números)

exemplo: 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int dia, mes, ano;
	
	printf("Digite uma data no formato dd/mm/aa: ");
	scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
	printf("\nDia: %d \n", dia);
	printf("\nMes: %d \n", mes);
	
	return 0;
}



