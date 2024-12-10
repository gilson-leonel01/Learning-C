#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define LINHAS2 3
#define COLUNAS2 3

int main(int argc, char *argv[]) {
    int mat[LINHAS2][COLUNAS2], transposta[COLUNAS2][LINHAS2];
    int i, j;

    printf("Insira os elementos da matriz %dx%d:\n", LINHAS2, COLUNAS2);
    for (i = 0; i < LINHAS2; i++) {
        for (j = 0; j < COLUNAS2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < LINHAS2; i++) {
        for (j = 0; j < COLUNAS2; j++) {
            transposta[j][i] = mat[i][j];
        }
    }

    printf("Matriz Transposta:\n");
    for (i = 0; i < COLUNAS2; i++) {
        for (j = 0; j < LINHAS2; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

	return 0;
}

