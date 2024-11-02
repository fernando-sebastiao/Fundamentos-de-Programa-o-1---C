#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadradosoma (int n1, int n2){
    int soma;
    soma = pow(n1, 2) + pow(n2, 2);
    return soma;
}

int main(int argc, char *argv[])
{
  int n1, n2, soma;
  printf("Digite o primeiro numero: \n");
  scanf("%d", &n1);
  printf("Digite o segundo numero: \n");
  scanf("%d", &n2);
  soma = quadradosoma(n1, n2);
  printf("O quadrado da soma dos dois numeros eh: %d\n", soma);
  system("PAUSE");	
  return 0;
}
