#include <stdio.h>

int fatorial(int numero) {
    int i, resultado = 1;

    for (i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial nao eh definido para numeros negativos.\n");
    } else {
        printf("O fatorial de %d eh %d.\n", numero, fatorial(numero));
    }
    system("PAUSE");
    return 0;
}
