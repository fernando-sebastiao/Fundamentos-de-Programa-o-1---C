#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero = 14;
void escreverValor();
int main(){
	setlocale(LC_ALL, "");
	printf("O número é %d \n", numero);
	escreverValor();
	return 0;
}

void escreverValor(){
	int dobro = numero * 2;
	printf("O dobro de %d é: %d \n", numero, dobro);
}

