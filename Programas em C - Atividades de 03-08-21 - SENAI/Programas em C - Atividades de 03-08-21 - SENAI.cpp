#include <stdio.h>

int main() {
	
	float km = 0;
	float litros = 0;
	
	for(int i=1; i>0; i++) {
		
		printf("\nInforme o numero de quilometros rodados: ");
		scanf("%f", &km);
		
		printf("\nInforme a quantidade de litros de gasolina consumidos: ");
		scanf("%f", &litros);
		
		float rendimento = km / litros;
		
		printf("\nO consumo de km / L foi de: %.3f\n", rendimento);
		printf("\n--------------------------------------------\n");
		
	}
	
	return(0);
	
}
