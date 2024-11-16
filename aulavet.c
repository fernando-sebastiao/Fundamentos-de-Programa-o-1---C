	#include <stdio.h>
	#include <stdlib.h>
	
	int maiorvalor(int valores[]){
		int i = 0, max = 0;
		for(i = 0; i < 10; i++){
			if(valores[i] > max){
				max = valores[i];
			}
		}
		return max;
	}
		
	int main() {
		int valores[10], i, max;
		
		for(i= 0; i < 10 ; i++){
			printf("Digite o %d valor:", i+1);
			scanf("%i", &valores[i]);
		}
		
		printf("\t----------------------------------\n");
		printf("\t -----------Os valores:----------- \n");
		
		for( i=0; i < 10; i++) {
			printf("\t o %d valor eh: %d \n", i+1, valores[i]);
			max	= maiorvalor(valores);
		}
		printf("\n O maior valor eh: \n %d \n", max);
		system("PAUSE");
		return 0;
	}
