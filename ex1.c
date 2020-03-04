#include <stdio.h>
#include <stdlib.h>

int main() {
	int vetor[15] = {1, 9, 8, 7, 120, 10, 30, 97, 2, 1, 1, 1, 3, 1, 6};
	int i, posicao;
	int numMaior = 0;
	
	for (i = 0; i < 15; i++) {			
		if (vetor[i] > numMaior) {
			numMaior = vetor[i];
			posicao = i;
		}
	}
	
	printf("O maior numero do vetor eh %i e ele esta na posicao %i", numMaior, posicao);
	
	return 0;
}
