#include <stdio.h>

int main() {
	int X, Y, Z;

	//Impressão da matriz resultante
	printf("Tabuada dos numeros de 1 a 9\n");
	
	for (X=0 ; X<10 ; X++) {
		
		for (Y=0 ; Y<10 ; Y++) {
			
			Z = X * Y;
			printf("\n");
			printf(" %d * %d = %d", X, Y, Z);
			
		}
		
		printf("\n");
		
	}
	
	return(0);
}
