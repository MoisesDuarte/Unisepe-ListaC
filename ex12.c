#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

    float x, i, s = 1;
    
    printf("Digite um valor x: ");
    scanf("%f", &x);

    for (i = 1; i <= 20; i++) {
        s += 1 / pow(x, i);   		
    	printf("1 / pow(%0.f , %0.f)\n", x, i);
	}

    printf("Resultado: %f", s);

    return 0;
}

