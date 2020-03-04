#include <stdio.h>
#include <stdlib.h>

int main() {
	int sumL4, sumC2, sumDiaP, sumDiaS, sumTudo;
	int i, j;
	int m[5][5] = {1, 2, 3, 4, 5,
				   1, 2, 3, 4, 5,
				   1, 2, 3, 4, 5,
				   1, 2, 3, 4, 5,
				   1, 2, 3, 4, 5};
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == 4) {
				sumL4 += m[i][j];
			}			
		}
		sumC2 += m[i][2];
	}
	
	printf("Soma Linha 4: %i\n", sumL4);
	printf("Soma Coluna 2: %i\n", sumC2);
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j) {
				sumDiaP += m[i][j];
			}
		}
	}
	
	printf("Soma Diag Principal: %i\n", sumDiaP);
	
	for (i = 5; i > 0; i--) {
		for (j = 5; j > 0; j--) {
			if (i == j) {
				sumDiaS += m[i][j];
			}
		}
	}
	
	printf("Soma Diag Secundario: %i\n", sumDiaS);

	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			sumTudo += m[i][j];
		}
	}
	
	printf("Soma Tudo: %i", sumTudo);
	
	return 0;
	
}


