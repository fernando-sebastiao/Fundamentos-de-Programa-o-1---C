#include<stdio.h>
#include<math.h>

float triangulo(float base, float altura){
      float area;
      area = (base*altura)/2;
      return area;
}

int main(){
    float base, altura, area;
    
    printf("Insira a base: \n");
    scanf("%f", &base);
    
    printf("Insira a altura: \n");
    scanf("%f", &altura);
    area = triangulo(base, altura);
    printf("A area do triangulo eh: %.2f\n", area);
    system("pause");
    return 0;
    }


