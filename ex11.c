#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0, j = 0, posL, posC, maior = 0; 
	int matriz[7][5] = { 1, 2, 3, 4, 5,
						 1, 2, 3, 4, 5,
						 1, 2, 3, 4, 5,
						 1, 2, 10, 4, 5,
						 1, 2, 22, 4, 5,
						 1, 2, 3, 4, 5,
						 1, 2, 3, 4, 5 };
						
	
	for (i =0; i < 7; i++) {
		for(j = 0; j < 5; j++) {
			if (matriz[i][j] > maior) {
				posL = i;
				posC = j;
				maior = matriz[i][j];
			}	
		}
	}
	
	printf("Posicao: [%i][%i]\nValor: %i", posL, posC, maior);
	
	return 0;
}
