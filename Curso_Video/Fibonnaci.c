#include<stdio.h>

int main(){
	
	int numero, i, a = 1, b = 0, c;
	
	printf("Digite o numero: \n");
	scanf("%d", &numero);
	
	if(numero <= 0){
		printf("Nao pode se calculado o fibonacci de um numero negativo!");
	}
	
	for(i = 1; i <= numero; i++){
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
	}
	
	return 0;
	system("PAUSE");
}

//#include <stdio.h>
//
//int main() {
//    int n;
//    unsigned long long a = 0, b = 1, c;
//
//    // Entrada do n�mero
//    printf("Digite o valor de n para calcular o en�simo termo da sequ�ncia de Fibonacci: ");
//    scanf("%d", &n);
//
//    if (n < 0) {
//        printf("A sequ�ncia de Fibonacci n�o � definida para n�meros negativos.\n");
//    } else if (n == 0) {
//        printf("O 0� termo da sequ�ncia de Fibonacci � 0.\n");
//    } else if (n == 1) {
//        printf("O 1� termo da sequ�ncia de Fibonacci � 1.\n");
//    } else {
//        for (int i = 2; i <= n; i++) {
//            c = a + b;
//            a = b;
//            b = c;
//        }
//        printf("O %d� termo da sequ�ncia de Fibonacci � %llu.\n", n, b);
//    }
//
//    return 0;
//}

