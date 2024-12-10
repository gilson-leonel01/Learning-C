#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ORDEM 4

int main(int argc, char *argv[]) {
	int mat1[ORDEM][ORDEM], mat2[ORDEM][ORDEM], mat3[ORDEM][ORDEM], i, j;

    printf("Insira os elementos da primeira matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Insira os elementos da segunda matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            mat3[i][j] = (mat1[i][j] > mat2[i][j]) ? mat1[i][j] : mat2[i][j];
        }
    }

    printf("Matriz com os maiores valores:\n");
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}

