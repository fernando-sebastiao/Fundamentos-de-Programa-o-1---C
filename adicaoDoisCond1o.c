#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int n1, n2, soma;
 printf("Digite os valores: \n");
 scanf("%d %d", &n1, &n2);
 soma = n1 +n2;
 if(soma<10){
             printf("O resultado nao pode ser apresntado!\n1");
 }
 else
 printf("A soma dos dois numeros eh: %d\n", soma); 
  system("PAUSE");	
  return 0;
}
