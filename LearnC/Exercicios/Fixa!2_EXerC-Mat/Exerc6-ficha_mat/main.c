#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ORDEM 4

void imprimirMatriz(int mat[ORDEM][ORDEM]) {
    int i, j;
    printf("Matriz:\n");
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    int mat[ORDEM][ORDEM], i, j, escolha, soma;

    printf("Insira os valores da matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    do {
        printf("\nMenu de opcoes:\n");
        printf("1. Imprimir todos os valores\n");
        printf("2. Somar quadrados dos elementos da primeira coluna\n");
        printf("3. Somar todos os elementos da terceira linha\n");
        printf("4. Somar elementos da diagonal principal\n");
        printf("5. Somar elementos pares da segunda linha\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        soma = 0; 

        switch (escolha) {
            case 1:
                imprimirMatriz(mat);
                break;
            case 2:
                for (i = 0; i < ORDEM; i++) {
                    soma += mat[i][0] * mat[i][0];
                }
                printf("Soma dos quadrados da primeira coluna: %d\n", soma);
                break;
            case 3:
                for (j = 0; j < ORDEM; j++) {
                    soma += mat[2][j];
                }
                printf("Soma dos elementos da terceira linha: %d\n", soma);
                break;
            case 4:
                for (i = 0; i < ORDEM; i++) {
                    soma += mat[i][i];
                }
                printf("Soma da diagonal principal: %d\n", soma);
                break;
            case 5:
                for (j = 0; j < ORDEM; j++) {
                    if (mat[1][j] % 2 == 0) {
                        soma += mat[1][j];
                    }
                }
                printf("Soma dos elementos pares da segunda linha: %d\n", soma);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (escolha != 0);

	return 0;
}

