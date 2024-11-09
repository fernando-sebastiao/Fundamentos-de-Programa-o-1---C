#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	  int cont;
	  float nota, media, total = 0;
	  char cod;
	  total = 0;
	  cod = 'C';
	  while(cod!= 'F'){
	  	for(cont = 1; cont <= 4; cont++){
	  		printf("Digite a %d nota: ", cont);
	  		scanf("%f", &nota);
	  		total += nota;
		  }
	  media = total / 4;
	  printf("\nA media final eh: %.2f \n\n", media);
	  total = 0;
	  nota = 0;
	  printf("Deseja calcular mais a media de um aluno? Pressione qualquer tecla para prosseguir, ou a tecla 'F' para finalizar!\n");
	  cod = getche();
	  printf("\n");
	  }
	 
	system("PAUSE");
	return 0;
}
