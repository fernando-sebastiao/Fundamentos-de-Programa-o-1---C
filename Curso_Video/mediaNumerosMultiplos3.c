 #include<stdio.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL, "");
 	int i, numero, valor, soma, contador;
 	float media;
 	
 	printf("Digite o n�mero de vezes que ser� inserido os n�meros: \n");
 	scanf("%d", &numero);
 	for(i = 1; i <= numero; i++){
 		printf("Digite o %d valor: ", i);
 		scanf("%d", &valor);
 		if(valor % 3 == 0){
 			soma+= valor;
 			contador++;
		 }
	 }
	 
	 media = soma/contador;
	 printf("A m�dia dos n�meros multiplos de 3 eh: %2.2f", media);
 	return 0;
 	system("PAUSE");
 }
