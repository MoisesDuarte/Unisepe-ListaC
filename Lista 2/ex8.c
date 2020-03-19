#include <stdio.h>
#include <stdlib.h>

int main() {
	const vetTam = 20;
	int i = 0, x[vetTam], y[vetTam], pe;
	
	while (i < vetTam) {
		printf("Digite o valor de x[%i]: ", i);
		scanf("%i", &x[i]);
		printf("Digite o valor de y[%i]: ", i);
		scanf("%i", &y[i]);
		i++;
	}
	
	i = 0;
	
	while (i < vetTam) {
		pe += x[i] * y[i];
		i++;
	}
	
	printf("Produto Escalar: %i", pe);
	
	return 0;
}
