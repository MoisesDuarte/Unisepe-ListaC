#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sistema.h"

void criarFila(AlunoStruct *aluno) {
    strcpy(aluno->nome, "NULL");
    aluno->nota1 = 0;
    aluno->nota2 = 0;
    aluno->periodo = 0;
    aluno->prox = NULL;
}

void mostrarFila(AlunoStruct *aluno) {
    int i;
    float media;
    while (aluno->prox != NULL) {
        media = (aluno->prox->nota1 + aluno->prox->nota2) / 2.0;
        if (media > 6) {
            printf("%s (RA: %i) foi aprovado com media = %f\n", aluno->prox->nome, aluno->prox->ra, media);
        } else if (media < 6 && media > 3) {
            printf("%s (RA: %i) está em exame com media = %f\n", aluno->prox->nome, aluno->prox->ra, media);
        } else {
            printf("%s (RA: %i) foi reprovado com media = %f\n", aluno->prox->nome, aluno->prox->ra, media);
        }
        aluno = aluno->prox;
    }
    system("pause");
}

void inserir(AlunoStruct *aluno) {
    AlunoStruct *novo_aluno;
    novo_aluno = (AlunoStruct*)malloc(sizeof(AlunoStruct));

    printf("Digite o nome do aluno: ");
    scanf("%s", &novo_aluno->nome);

    printf("Digite a nota 1: ");
    scanf("%f", &novo_aluno->nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &novo_aluno->nota2);

    printf("Digite o periodo: ");
    scanf("%i", &novo_aluno->periodo);

    printf("Digite o ra: ");
    scanf("%i", &novo_aluno->ra);

    novo_aluno->prox = NULL;

    /// Checando se o elemento antigo aponta para null
    if (aluno->prox == NULL) {
        aluno->prox = novo_aluno;
    } else {
        while(aluno->prox != NULL) {
            aluno = aluno->prox;
        }
        aluno->prox = novo_aluno;
    }
}

void remover(AlunoStruct *aluno) {
    aluno->prox = aluno->prox->prox;
}
