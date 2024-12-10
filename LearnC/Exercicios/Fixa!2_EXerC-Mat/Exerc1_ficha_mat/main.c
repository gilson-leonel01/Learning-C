#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define LINHAS1 10
#define COLUNAS1 15

int main(int argc, char *argv[]) {
    int mat[LINHAS1][COLUNAS1];
    int i, j;

    for (i = 0; i < LINHAS1; i++) {
        for (j = 0; j < COLUNAS1; j++) {
            mat[i][j] = (rand() % 100) + 1;
        }
    }

    for (i = 0; i < LINHAS1; i++) {
        int somaLinha = 0;
        for (j = 0; j < COLUNAS1; j++) {
            somaLinha += mat[i][j];
        }
        printf("Soma da linha %d: %d (%s)\n", i + 1, somaLinha, somaLinha % 2 == 0 ? "Par" : "Impar");
    }

    for (j = 0; j < COLUNAS1; j++) {
        int somaColuna = 0;
        for (i = 0; i < LINHAS1; i++) {
            somaColuna += mat[i][j];
        }
        printf("Soma da coluna %d: %d (%s)\n", j + 1, somaColuna, somaColuna % 2 == 0 ? "Par" : "Impar");
    }

	return 0;
}

