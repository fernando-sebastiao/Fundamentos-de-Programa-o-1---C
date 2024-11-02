#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ano_nascimento, ano_atual, idade, ano2030, idade_dias, idade_mes;
  printf("Digite o ano de nascimento: \n");
                 scanf("%d", &ano_nascimento);
  
  printf("Digite o ano atual: \n");
                  scanf("%d", &ano_atual);
  
  idade = ano_atual - ano_nascimento;
  ano2030= 2030-ano_nascimento;
  idade_dias= idade * 365;
  idade_mes= 31 * idade;
  printf("A sua idade atual: %d\n", idade);
  printf("A sua idade em 2030: %d\n", ano2030);
  printf("A sua idade em dias: %d\n", idade_dias);
  printf("A sua idade em mes: %d\n", idade_mes);
                                            
  system("PAUSE");	
  return 0;
}
