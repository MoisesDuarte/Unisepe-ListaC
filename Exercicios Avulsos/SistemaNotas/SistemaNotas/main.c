#include <stdio.h>
#include <stdlib.h>
#include "sistema.h"

int main() {
    int opcao;
    AlunoStruct *aluno;

    criarFila(aluno);

    while(1) {
        printf("1 - Inserir Aluno\n2 - Remover Aluno Inicial\n3 - Mostrar medias\n0 - Sair\nEscolha uma opcao: ");
        scanf("%i", &opcao);

        switch(opcao) {
            case 0:
                exit(0);
            case 1:
                inserir(aluno);
                break;
            case 2:
                remover(aluno);
                break;
            case 3:
                mostrarFila(aluno);
                break;
        }

        system("cls");
    }


    return 0;
}
