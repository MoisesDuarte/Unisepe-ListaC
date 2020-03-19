#include <stdio.h>
#include <stdlib.h>

int main() {
	const vetTam = 30;
	int i, vet[vetTam];
	int nValidas, nInvalidas, nAcima, mValidas;
	
	while (i < vetTam) {
		printf("Digite a note %i: ", i);
		scanf("%i", &vet[i]);
		i++;
	}
	
	system("cls");
	
	// Checar notas válidas
	i = 0;
	while(i < vetTam) {
		if (vet[i] > 0 && vet[i] < 10) {
			nValidas++;
		} else {
			nInvalidas++;
		}
		i++;
	}
	
	printf("Notas validas: %i\n", nValidas);
	printf("Notas invalidas: %i\n", nInvalidas);
	
	// Checar acima média
	i = 0;
	while(i < vetTam) {
		if (vet[i] > 7) {
			nAcima++;
		}
		i++;
	}
	
	printf("Notas acima da media: %i\n", nAcima);
	
	mValidas = nValidas / vetTam;
	
	printf("Media de notas validas: %i\n", mValidas);
	
	
	
	return 0;
}
