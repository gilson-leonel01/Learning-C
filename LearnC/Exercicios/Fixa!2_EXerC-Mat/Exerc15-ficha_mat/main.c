#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM2 2

int main(int argc, char *argv[]) {
	float mat1[TAM2][TAM2], mat2[TAM2][TAM2], constante;
    int i, j, opcao;

    printf("Insira os elementos da primeira matriz 2x2:\n");
    for (i = 0; i < TAM2; i++) {
        for (j = 0; j < TAM2; j++) {
            scanf("%f", &mat1[i][j]);
        }
    }

    printf("Insira os elementos da segunda matriz 2x2:\n");
    for (i = 0; i < TAM2; i++) {
        for (j = 0; j < TAM2; j++) {
            scanf("%f", &mat2[i][j]);
        }
    }

    do {
        printf("\nMenu:\n");
        printf("1. Somar as duas matrizes\n");
        printf("2. Subtrair a primeira matriz da segunda\n");
        printf("3. Adicionar uma constante as duas matrizes\n");
        printf("4. Imprimir as duas matrizes\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Soma das matrizes:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        printf("%.2f ", mat1[i][j] + mat2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Subtracao (segunda - primeira):\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        printf("%.2f ", mat2[i][j] - mat1[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Insira a constante a ser adicionada: ");
                scanf("%f", &constante);
                printf("Matriz 1 apos adicao:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        mat1[i][j] += constante;
                        printf("%.2f ", mat1[i][j]);
                    }
                    printf("\n");
                }
                printf("Matriz 2 apos adicao:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        mat2[i][j] += constante;
                        printf("%.2f ", mat2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Matriz 1:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        printf("%.2f ", mat1[i][j]);
                    }
                    printf("\n");
                }
                printf("Matriz 2:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        printf("%.2f ", mat2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
    
	return 0;
}

