#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAMANHO 50

int main(int argc, char *argv[]) {
    double mat[TAMANHO][TAMANHO], vetor[TAMANHO];
    int i, j;

	for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            mat[i][j] = (rand() % 10000) / 100.0; 
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = mat[i][i];
    }

    printf("Vetor da diagonal principal:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
    
	return 0;
}

