#include <stdio.h>

int main() {
	
	int num;
	
	printf("Infome um numero: ");
	scanf("%d", &num);
	
	printf("\nO numero informado em octal eh: %o\n", num);
	
	printf("\nO numero informado em hexadecimal eh: %x", num);
	
	return (0);
}

