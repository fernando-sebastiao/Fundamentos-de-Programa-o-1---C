#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


void Escrever(); // prototipo da funcao
int main(){
	setlocale(LC_ALL, "");
	int a = 3, b = 12;
	printf("Continua��o de uma boa comunica��o \n");
	Escrever();
	printf("A soma do n�mero %d e %d � igual a: %d", a, b, a+b);
	return 0;
}

//definir funcao
void Escrever(){
	printf("Bem vindo ao nosso sistema, boa continua��o!\n");
}

