#include<stdio.h>
#include<stdlib.h>

int main(){
	char nome[10];
	char sexo;
	int idade= 0, i;
	i = 0;
	
	while(i<=4) {
		
		printf("Digite o sexo: ");
		scanf("%c", &sexo);
		
		printf("Digite o nome: ") ;
		scanf("%s", &nome);
		
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		if(sexo == "M" && idade>=18)
		{
			printf("O nome eh %s, e o sexo eh %c, e a idade eh %d \n", nome, sexo, idade);
		}
		
		printf("\n");
		
		i++;
	}
	
	return 0;
}
