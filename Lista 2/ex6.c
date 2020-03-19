#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0, j = 0, k = 0, vet1[5], vet2[5];
	
	while (i < 5) {
		printf("Digite a nota %i: ", i);
		scanf("%i", &vet1[i]);		
		i++;
	}

	i = 0;

	while (i < 5) {
		printf("Digite a nota %i: ", i);
		scanf("%i", &vet2[i]);		
		i++;
	}
	
	system("cls");
	
	while (j < 5) {
		printf("Soma %i: %i\n", j, vet1[j] + vet2[j]);
		j++;
	}
	
	j = 0;
	
	while (j < 5) {
		printf("Diferenca %i: %i\n", j, vet1[j] - vet2[j]);
		j++;
	}
	
	j = 0;
	
	while (j < 5) {
		printf("Produto %i: %i\n", j, vet1[j] * vet2[j]);
		j++;
	}
	
	j = 0;
	
	while (j < 5) {
		printf("Divisao %i: %i\n", j, vet1[j] / vet2[j]);
		j++;
	}
	
	return 0;
}
