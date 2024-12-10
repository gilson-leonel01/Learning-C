#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ORDEM 4

int main(int argc, char *argv[]) {
	int mat[ORDEM][ORDEM], i, j;

    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            mat[i][j] = i * j;
        }
    }

    printf("Matriz preenchida com o produto da linha e da coluna:\n");
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}

