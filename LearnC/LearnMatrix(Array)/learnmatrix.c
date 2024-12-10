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

void multiplicarMatrizes(int lA, int cA, int A[lA][cA], int cB, int B[cA][cB], int C[lA][cB]) {
    int i, j, k;
	for (i = 0; i < lA; i++) {
        for (j = 0; j < cB; j++) {
            C[i][j] = 0; 
            for (k = 0; k < cA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void dividirMatrizes(int lA, int cA, int A[lA][cA], int cB, int B[cA][cB], int C[lA][cB]) {
    int i, j, k;
	for (i = 0; i < lA; i++) {
        for (j = 0; j < cB; j++) {
            C[i][j] = 0;  
            for (k = 0; k < cA; k++) {
                C[i][j] += A[i][k] / B[k][j];
            }
        }
    }
}

void matrizTransposta(int l, int c, int A[l][c], int AT[c][l]) {
    int i, j;
	for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            AT[j][i] = A[i][j];
        }
    }
}

int matrizDeterminante2x2(int A[2][2]) {
    return (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
}

void multiplicarVetorEMatriz(int vetor[], int matriz[3][2], int resultado[], int n) {
    int i, j;
	for (j = 0; j < 2; j++) {
        resultado[j] = 0;
        for (i = 0; i < n; i++) {
            resultado[j] += vetor[i] * matriz[i][j];
        }
    }
}

void exibirMatriz(int l, int c, int matriz[l][c]) {
	int i, j;
    for (i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
	
	return 0;
}
