#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano_nascimento, ano_atual, idade, ano2030, idade_dias, idade_mes;

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: \n");
    scanf("%d", &ano_atual);

    
    if (ano_atual < ano_nascimento) {
        printf("Erro: O ano atual nao pode ser menor que o ano de nascimento.\n");
        return 1;
    }

    idade = ano_atual - ano_nascimento;
    ano2030 = 2030 - ano_nascimento;
    idade_dias = idade * 365;
    

    idade_mes = idade * 12;

    printf("A sua idade atual: %d anos\n", idade);
    printf("A sua idade em 2030: %d anos\n", ano2030);
    printf("A sua idade em dias (aproximadamente): %d dias\n", idade_dias);
    printf("A sua idade em meses (aproximadamente): %d meses\n", idade_mes);

    system("PAUSE");	
    return 0;
}
