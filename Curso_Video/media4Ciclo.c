#include<stdio.h>
#include<stdlib.h>

int main(){
	int contador;
	float nota, media, total;
	contador = 1;
	total = 0;
	do{
		printf("Digite a %d nota: \n", contador);
		scanf("%f", &nota);
		
		total=  total + nota;
		
		contador++;
	}while(contador<=4);
	media = total/4;
	printf("A media final eh: %.2f \n", media);
	return 0;
}
