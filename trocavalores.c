#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n1, n2, troca;
  printf("Digite o primeiro valor de n1: \n");
  scanf("%d", &n1);
  printf("Digite o segundo valor de n2: \n");
  scanf("%d", &n2);
  troca = n1;
  n1= n2;
  n2= troca;
  printf("\n n1= %d e n2= %d \n", n1, n2);
  
  system("PAUSE");	
  return 0;
}
