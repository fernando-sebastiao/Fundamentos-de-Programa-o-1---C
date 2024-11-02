#include <stdio.h>
#include <stdbool.h>

bool ehTriangular(int numero) {
    int i, soma = 0;

    for (i = 1; i < numero; i++) {
        soma += i;
        if (soma == numero) {
            return true;
        }
    }
    return false;
}

int main() {
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
