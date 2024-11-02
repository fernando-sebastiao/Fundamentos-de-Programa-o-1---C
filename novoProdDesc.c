#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float preco, novopreco;
  printf("Digite o preco do produto: \n");
  scanf("%f", &preco);
  novopreco = (preco + (1-10/100))/100;
  printf("O novo preco do produto eh: %.3f\n", novopreco);
  system("PAUSE");	
  return 0;
}
