#include <stdio.h>


main()
{
	
	int x= 1;
	int y= 0 ;
	int z= 0 ;
	int cont;
	int i;
	scanf("%d",&i);
	if(i<=0)
	{printf("Só numeros maiores que zero");
	}
	else
	{
	
   for(cont=0 ; cont<i; cont++)
	{
	    	z = x + y ;
	    	printf("%d," , z);
	    	
	    	x=y ;
	    	y=z ;
	}
		printf("fim.");
	}

}
