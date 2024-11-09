#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


void Escrever(); // prototipo da funcao
int main(){
	setlocale(LC_ALL, "");
	int a = 3, b = 12;
	printf("Continuação de uma boa comunicação \n");
	Escrever();
	printf("A soma do número %d e %d é igual a: %d", a, b, a+b);
	return 0;
}

//definir funcao
void Escrever(){
	printf("Bem vindo ao nosso sistema, boa continuação!\n");
}

