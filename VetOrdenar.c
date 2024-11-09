#include <stdio.h>
#include <stdlib.h>

int main() {
	int valores[10], i, max, dados[10], aux;
	
	for(i= 0; i < 10 ; i++){
		printf("Digite o %d valor:", i+1);
		scanf("%i", &valores[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(valores[i+1] > valores[i+1]){
			aux = valores[i+1];
			valores[i+1] = valores[i];
			valores[i] = aux;
		}
	}
	
	printf("\t----------------------------------\n");
	printf("\t -------Os valores Ordenados:-------- \n");
	
	for(i= 0; i < 10 ; i++){
		printf(" O %d valor eh: %d \n" , i , valores[i]);
	}

	system("PAUSE");
	return 0;
}


