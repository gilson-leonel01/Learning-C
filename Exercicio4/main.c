#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matResul[10][10] = {0};
	int matA[10][10], matB[10][10];
    int linA, colA, linB, colB;
    int i, j, k;

    printf("Digite o numero de linhas da matriz A: ");
    scanf("%d", &linA);

    printf("Digite o numero de colunas da matriz A: ");
    scanf("%d", &colA);

    printf("Digite o numero de linhas da matriz B: ");
    scanf("%d", &linB);

    printf("Digite o numero de colunas da matriz B: ");
    scanf("%d", &colB);

    if (colA != linB) {
        printf("As dimensoes das matrizes nao sao compativeis para multiplicacao\n");
        return 1; 
    }
    
	printf("_______________________________________________\n");

    printf("Digite os elementos da matriz A: \n");

    for (i = 0; i < linA; i++) {
        for (j = 0; j < colA; j++) {
            printf("Matriz A[%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    
	printf("_______________________________________________\n");
	
    printf("Digite os elementos da matriz B: \n");

    for (i = 0; i < linB; i++) {
        for (j = 0; j < colB; j++) {
            printf("Matriz B[%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }    

    for (i = 0; i < linA; i++) {
        for (j = 0; j < colB; j++) {
            for (k = 0; k < colA; k++) {
                matResul[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    
	printf("_______________________________________________\n");

    printf("Matriz Resultante: \n");
    for (i = 0; i < linA; i++) {
        for (j = 0; j < colB; j++) {
            printf("%d\t", matResul[i][j]);
        }
        printf("\n");
    }

	return 0;
}


