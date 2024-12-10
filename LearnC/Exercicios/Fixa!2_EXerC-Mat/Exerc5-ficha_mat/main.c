#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N 2

int main(int argc, char *argv[]) {
	int A[N][N], B[N][N], C[N][N] = {0};
    int i, j;

    printf("Insira os elementos da matriz A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Insira os elementos da matriz B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] += A[i][j] + B[i][j];
        }
    }

    printf("Resultado da soma (A + B):\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

	return 0;
}

