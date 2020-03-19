#include <stdio.h>
#include <stdlib.h>

int vetorVezes (int vetor[], int num) {
	int i, numApar = 0;
	
	while (i < 5) {
		if (vetor[i] == num) {
			numApar++;
		}
		i++;
	}
	
	return numApar;
}

int main() {
	int a[5] = {1, 10, 3, 10, 5};
	int num = 10;
	
	printf("O total de aparicoes eh %i", vetorVezes(a, num));
	
	return 0;
}
