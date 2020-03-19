#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

int main() {
	int i, j;
	int matriz[M][N];
	float nNulos, grauEspar;
	
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf("Digite o valor de [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
			if (matriz[i][j] == 0) {
				nNulos++;
			}
		}
	}
	
	grauEspar = nNulos / (M * N);
	
	printf("O grau de esparsidade eh: %f", grauEspar);
	
	
	
	return 0;
}
