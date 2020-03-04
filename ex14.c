#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, l = 0, c = 0, sl[5], sc[5];
	int m[5][5] = { 1, 2, 3, 4, 5,
					1, 2, 3, 4, 5,
					1, 2, 3, 4, 5,
					1, 2, 3, 4, 5,
					1, 2, 3, 4, 5 };
	
	// Limpando vetores
	for(i = 0; i < 5; i++) {
		sl[i] = 0;
		sc[i] = 0;
	}
	
	// Calculo
	for(i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			sl[l] += m[i][j]; 
			printf("[%i] %i\n", sl[l], m[i][j]);			
		}
		printf("---\n");
		l++;
	}
	
	for(i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			sc[c] += m[j][i]; 
		}
		c++;
	}
	
	// Resultado
	for(i = 0; i < 5; i++) {
		printf("Soma da linha %i: %i\n", i, sl[i]);
	}
	
	for(i = 0; i < 5; i++) {
		printf("Soma da coluna %i: %i\n", i, sc[i]);
	}
	

	
	return 0;
}
