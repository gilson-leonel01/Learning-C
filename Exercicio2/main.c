#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double mat[50][50];
	double vet[50];
	int i, j;
	
    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            mat[i][j] = i * 50 + j + 1; 
        }
    }

    for (i = 0; i < 50; i++) {
        vet[i] = mat[i][i];
    }

    printf("Elementos do vetor: \n");
    
    for (i = 0; i < 50; i++) {
        printf("%.2f\n", vet[i]);
    }

    return 0;
}

