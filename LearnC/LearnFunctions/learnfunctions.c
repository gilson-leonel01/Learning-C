#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void somarMatrizes(int l, int c, int A[l][c], int B[l][c], int C[l][c]) {
    int i, j;
	for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int somaDeDoisNumeros(int a, int b) {
	return a + b;
}

int main(int argc, char *argv[]) {
	somaDeDoisNumeros(2, 3);

	return 0;
}
