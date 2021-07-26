#include <stdio.h>

int dec(int x) {
	return (x * 10);
}

int cent(int x) {
	return (x * 100);
}

int mili(int x) {
	return (x * 1000);
}

int main() {
	int metros;
	
	printf("Informe um valor em metros: ");
	scanf("%d", &metros);
	
	printf("%d metros eh igual a %d decimetros \n", metros, dec(metros));
	printf("%d metros eh igual a %d centimetros \n", metros, cent(metros));
	printf("%d metros eh igual a %d milimetros \n", metros, mili(metros));
	return(0);
}
