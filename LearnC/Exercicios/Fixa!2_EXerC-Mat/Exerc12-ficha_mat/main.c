#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ORDEM 4

int main(int argc, char *argv[]) {
	int mat[ORDEM][ORDEM], i, j, maior = 0, linhaMaior = 0, colunaMaior = 0;

    printf("Insira os elementos da matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor e %d, localizado na linha %d e coluna %d.\n", maior, linhaMaior, colunaMaior);
    
	return 0;
}

