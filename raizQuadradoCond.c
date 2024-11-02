#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float condicao(int n){
    if(n>0){
       return sqrt(n);
    }
    else
    return pow(n, 2);
}

int main(int argc, char *argv[])
{
    int n;
    float resultado;
    printf("Digite o valor: \n");
    scanf("%d", &n);
    resultado = condicao(n);
    printf("%.1f \n", resultado);
  
  system("PAUSE");	
  return 0;
}
