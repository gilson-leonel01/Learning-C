#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM 5

int main(int argc, char *argv[]) {
	int mat[TAM][TAM], i, j;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (i == j) {
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }

    printf("Matriz 5x5 com diagonal principal preenchida com 1:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}

