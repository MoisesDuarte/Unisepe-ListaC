#include <stdio.h>
#include <stdlib.h>

int main() {

	int counter, pCounter = 0, iCounter = 0, n[15], p[15], i[15];
	
	for(counter = 0; counter < 15; counter++) {
		printf("Digite o dado do n[%i]: ", counter);
		scanf("%i", &n[counter]);
	}
	
	for(counter = 0; counter < 15; counter++) {
		if (n[counter] % 2 == 0) {
			p[pCounter] = n[counter];
			pCounter++;
		} else {
			i[iCounter] = n[counter];
			iCounter++;
		}
	}
	
	printf("Pares:\n");
	for(counter = 0; counter < 15; counter++) {
		printf("%i\n", p[counter]);
	}
	
	
	printf("\nImpares:\n");	
	for(counter = 0; counter < 15; counter++) {
		printf("%i\n", i[counter]);
	}


	return 0;
}
