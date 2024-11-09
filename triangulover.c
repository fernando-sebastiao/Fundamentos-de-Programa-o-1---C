#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o comprimento do lado 1: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do lado 2: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do lado 3: ");
    scanf("%f", &lado3);

    /*
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triangulo eh Equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triangulo eh Isosceles.\n");
        } else {
            printf("O triangulo eh Escaleno.\n");
        }
    } else {
        printf("Os valores inseridos nao formam um triangulo.\n");
    }
    */
    system("PAUSE");
    return 0;
}

void Triangulo(float lado1, float lado2, float lado3){
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triangulo eh Equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triangulo eh Isosceles.\n");
        } else {
            printf("O triangulo eh Escaleno.\n");
        }
    } else {
        printf("Os valores inseridos nao formam um triangulo.\n");
    }
    }
