#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, nAlunos;
	float vG1[nAlunos], vG2[nAlunos], vMedia[nAlunos]; 	
	
	printf("Digite o numero de alunos: ");
	scanf("%i", &nAlunos);
	
	for (i = 0; i < nAlunos; i++) {
		printf("Digite a G1 do aluno %i: ", i);
		scanf("%f", &vG1[i]);
		
		printf("Digite a G2 do aluno %i: ", i);
		scanf("%f", &vG2[i]);
	}
	
	system("cls");
	
	printf("Media\n");
	for (i = 0; i < nAlunos; i++) {
		vMedia[i] = (vG1[i] + vG2[i]) / 2;
		printf("Aluno %i\nG1 = %2.f\nG2 = %2.f\nMedia = %2.f\n\n", i, vG1[i], vG2[i], vMedia[i]);
	}

	
	return 0;
}
