#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool ehTriangular(int numero) {
    int i;

    for (i = 1; i < numero; i++) {

        if (numero == i * (i+1) * (i+2)) {
           return true;
        }
    }
    return false;
}

int main() {
	setlocale(LC_ALL, "");
    int numero;

    printf("Digite um numero: ");
    
    scanf("%d", &numero);

    if (ehTriangular(numero)) {
        printf("O numero %d eh triangular.\n", numero);
    } else {
        printf("O numero %d nao eh triangular.\n", numero);
    }
    system("PAUSE");
    return 0;
}


//#include <stdio.h>
//#include <stdbool.h>
//#include <locale.h>
//
//// Fun��o para verificar se um n�mero � triangular
//bool ehTriangular(int numero) {
//    int i, soma = 0;
//
//    for (i = 1; soma < numero; i++) {
//        soma += i;
//        if (soma == numero) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//	setlocale(LC_ALL, "");
//    int numero;
//
//    // Entrada do n�mero
//    printf("Digite um n�mero: ");
//    scanf("%d", &numero);
//
//    // Verifica��o se o n�mero � triangular
//    if (ehTriangular(numero)) {
//        printf("O n�mero %d � triangular.\n", numero);
//    } else {
//        printf("O n�mero %d n�o � triangular.\n", numero);
//    }
//
//    return 0;
//}

