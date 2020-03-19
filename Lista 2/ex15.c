#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, pNulas, lNulas = 0, cNulas = 0;
	int a[3][4] = {0, 0, 0, 0,
				   1, 0, 0, 0,
				   0, 0, 0, 0};
				   
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (a[i][j] == 0) {
				pNulas++;
				if (pNulas == 4) {
					lNulas++;
				}
			}
		}
		pNulas = 0;	
	}
	
	pNulas = 0;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			if (a[j][i] == 0) {
				pNulas++;
				if (pNulas == 3) {
					cNulas++;
				}
			}
		}	
		pNulas = 0;
	}
	
	printf("Linhas Nulas: %i\n", lNulas);
	printf("Colunas Nulas: %i", cNulas);
	
	return 0;
}
