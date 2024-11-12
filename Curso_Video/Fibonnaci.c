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
//    // Entrada do número
//    printf("Digite o valor de n para calcular o enésimo termo da sequência de Fibonacci: ");
//    scanf("%d", &n);
//
//    if (n < 0) {
//        printf("A sequência de Fibonacci não é definida para números negativos.\n");
//    } else if (n == 0) {
//        printf("O 0º termo da sequência de Fibonacci é 0.\n");
//    } else if (n == 1) {
//        printf("O 1º termo da sequência de Fibonacci é 1.\n");
//    } else {
//        for (int i = 2; i <= n; i++) {
//            c = a + b;
//            a = b;
//            b = c;
//        }
//        printf("O %dº termo da sequência de Fibonacci é %llu.\n", n, b);
//    }
//
//    return 0;
//}

