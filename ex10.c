#include <stdio.h>
#include <stdlib.h>

int main() {
	int l=0, c=0;
	int soma;
	int matriz[7][5] = {1,  2,  3,  4,  5,
						4,  5,  6,  7,  8,
						8,  9,  10, 11, 12,
						13, 14, 15, 16, 17,
						18, 19, 20, 21, 22,
						23, 24, 25, 26, 27,
						28, 29, 30, 31, 32};
	
	while (l < 7) {
		while (c < 5) {
			soma += matriz[l][c];
			c++;
		}
		printf("Soma da linha %i : %i\n", l, soma);
		soma = 0;
		c = 0;
		l++;
	}
	
	return 0;
}
