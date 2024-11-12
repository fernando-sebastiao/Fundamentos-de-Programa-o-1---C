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
//// Função para verificar se um número é triangular
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
//    // Entrada do número
//    printf("Digite um número: ");
//    scanf("%d", &numero);
//
//    // Verificação se o número é triangular
//    if (ehTriangular(numero)) {
//        printf("O número %d é triangular.\n", numero);
//    } else {
//        printf("O número %d não é triangular.\n", numero);
//    }
//
//    return 0;
//}

