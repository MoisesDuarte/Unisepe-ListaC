#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, f[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	
	for (i = 0; i < 20; i++) {
		f[i] = f[i] * i;
	}
	
	for (i = 0; i < 20; i++) {
		printf("%i\n", f[i]);
	}
	
	return 0;
}
