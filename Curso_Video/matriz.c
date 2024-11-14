#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//valores constantes
#define NUM_L 5
#define NUM_C 4

int main(){
	setlocale(LC_ALL, "");
	int linha, coluna, contador= 0;
	float notas[NUM_L][NUM_C] = {
		{12.2, 7.6, 13.45, 15.9},
			{12.2, 7.6, 13.45, 15.9},
				{12.2, 7.6, 13.45, 15.9},
					{12.2, 7.6, 13.45, 15.9},
						{12.2, 7.6, 13.45, 15.9}
//							{12.2, 7.6, 13.45, 15.9},
	}, soma = 0, total;
	printf("Exibindo o conteúdo da matriz declarada e inicializada: \n\n");
	
	for(linha = 0; linha < NUM_L; linha++){
		for(coluna = 0; coluna < NUM_C; coluna++){
			printf("%6.2f", notas[linha][coluna]);
			if(notas[linha][coluna] > 10.00){
				soma += notas[linha][coluna];
				contador++;
			}
		}
		printf("\n");
	}
	
	printf("O valor do elemento da 2ª linha, 3ª coluna é: %4.2f\n\n", notas[1][2]);
	
	total = soma/contador;
	printf("A media das notas dos alunos superior a 10 é: %4.2f\n", total);
	return 0;
	system("PAUSE");
}
