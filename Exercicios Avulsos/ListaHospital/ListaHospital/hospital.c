#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hospital.h"

void criarFila(SPaciente *cabeca) {
    strcpy(cabeca->nome, "");
    cabeca->cod = 0;
    cabeca->prox = NULL;
}

void mostrarFila(SPaciente *cabeca) {
    SPaciente *temp;
    temp = cabeca->prox;

    system("cls");

    while (temp != NULL) {
        printf("Codigo: %i\nNome: %s\n\n", temp->cod, temp->nome);
        temp = temp->prox;
    }
}

void inserirInicio(SPaciente *cabeca) {
    SPaciente *novoPaciente;
    novoPaciente = (SPaciente*)malloc(sizeof(SPaciente));

    system("cls");

    printf("Digite o codigo: ");
    scanf("%i", &novoPaciente->cod);
    printf("Digite o nome: ");
    scanf("%s", &novoPaciente->nome);

    novoPaciente->prox = cabeca->prox;
    cabeca->prox = novoPaciente;

    tamanho++;
}

void inserirMeio(SPaciente *cabeca) {
    int meio, i;
    SPaciente *novoPaciente, *anterior, *atual;
    novoPaciente = (SPaciente*)malloc(sizeof(SPaciente));

    system("cls");

    printf("A lista possui %i pacientes.", tamanho);
    printf("\nDeseja inserir em qual posicao: ");
    scanf("%i", &meio);

    if (meio > 0 && meio <= tamanho) {
        if (meio == 1) {
            inserirInicio(cabeca);
        } else if (meio == tamanho) {
            inserirFim(cabeca);
        } else {
            atual = cabeca->prox; // Atual recebe primeiro elemento da lista

            while (i != meio) { // Encontra a posição definida
                anterior = atual; // Anterior recebe o 'antigo' atual
                atual = atual->prox; // Atual recebe o ponteiro apos atual
                i++;
            }

            printf("Digite o codigo: ");
            scanf("%i", &novoPaciente->cod);
            printf("Digite o nome: ");
            scanf("%s", &novoPaciente->nome);

            novoPaciente->prox = atual;
            anterior->prox = novoPaciente;
            tamanho++;
        }

    } else {
        printf("Posicao invalida!");
    }
}

void inserirFim(SPaciente *cabeca) {
    SPaciente *novoPaciente;
    novoPaciente = (SPaciente*)malloc(sizeof(SPaciente));

    system("cls");

    printf("Digite o codigo: ");
    scanf("%i", &novoPaciente->cod);
    printf("Digite o nome: ");
    scanf("%s", &novoPaciente->nome);
    novoPaciente->prox = NULL;

    if (cabeca->prox == NULL) { // Lista Vazia
        cabeca->prox = novoPaciente;
    } else {
        while (cabeca->prox != NULL) { // Percorre lista procurando por ultimo elemento
            cabeca = cabeca->prox;
        }
        cabeca->prox = novoPaciente; // Ultimo elemento aponta para novo
    }

    tamanho++;
}

void removerInicio(SPaciente *cabeca) {
    SPaciente *temp = cabeca->prox;

    cabeca->prox = cabeca->prox->prox;
}

void removerMeio(SPaciente *cabeca) {
    int meio, i;
    SPaciente *novoPaciente, *anterior, *atual;
    novoPaciente = (SPaciente*)malloc(sizeof(SPaciente));

    system("cls");

    printf("A lista possui %i pacientes.", tamanho);
    printf("\nDeseja remover em qual posicao: ");
    scanf("%i", &meio);

    system("cls");

    if (meio > 0 && meio <= tamanho) {
        if (meio == 1) {
            removerInicio(cabeca);
        } else if (meio == tamanho){
            removerFim(cabeca);
        } else {
            SPaciente *atual = cabeca->prox, *anterior = cabeca;

            for (i=1;i<meio;i++) {
                anterior = atual;
                atual = atual->prox;
            }
            anterior->prox = atual->prox;
        }
    }
}

void removerFim(SPaciente *cabeca) {
    SPaciente *ultimo = cabeca->prox, *penultimo;

    while(ultimo->prox != NULL) {
        penultimo = ultimo;
        ultimo = ultimo->prox;
    }
    penultimo->prox = NULL;
}

void mostrarMenu(SPaciente *cabeca) {
    criarFila(&cabeca);

    int op;
    while (op != 8) {
        printf("1 - Inserir no inicio (Prioridade Maxima)\n");
        printf("2 - Inserir no meio (Prioridade Média)\n");
        printf("3 - Inserir no fim (Prioridade Baixa)\n");
        printf("\n");
        printf("4 - Remover no inicio (Prioridade Maxima)\n");
        printf("5 - Remover no meio (Prioridade Média)\n");
        printf("6 - Remover no fim (Prioridade Baixa)\n");
        printf("\n");
        printf("7 - Mostrar Lista\n");
        printf("8 - Sair\n");

        printf("Digite a opcao desejada: ");
        scanf("%i", &op);

        switch(op) {
        case 1:
            inserirInicio(&cabeca);
            system("cls");
            break;
        case 2:
            inserirMeio(&cabeca);
            system("cls");
            break;
        case 3:
            inserirFim(&cabeca);
            system("cls");
            break;
        case 4:
            removerInicio(&cabeca);
            system("cls");
            break;
        case 5:
            removerMeio(&cabeca);
            system("cls");
            break;
        case 6:
            removerFim(&cabeca);
            system("cls");
            break;
        case 7:
            mostrarFila(&cabeca);
        default:
            break;
        }
    }
}
