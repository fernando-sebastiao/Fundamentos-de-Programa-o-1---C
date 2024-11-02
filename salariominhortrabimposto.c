#include <stdio.h>

int main() {
    float salario_minimo, horas_trabalhadas;
    float valor_hora, salario_bruto, imposto, salario_liquido;


    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

   
    valor_hora = salario_minimo * 0.10;

  
    salario_bruto = horas_trabalhadas * valor_hora;


    imposto = salario_bruto * 0.03;


    salario_liquido = salario_bruto - imposto;


    printf("Salario bruto: %.2fkz\n", salario_bruto);
    printf("Imposto (3%%):  %.2fkz\n", imposto);
    printf("Salario a receber:  %.2fkz\n", salario_liquido);
    system("PAUSE");
    return 0;
    
}
