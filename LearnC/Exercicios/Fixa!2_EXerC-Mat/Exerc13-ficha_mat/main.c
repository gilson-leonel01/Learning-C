#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM 5

int main(int argc, char *argv[]) {
	int mat[TAM][TAM], i, j, x, encontrado = 0;

    printf("Insira os elementos da matriz %dx%d:\n", TAM, TAM);
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Insira o valor para buscar na matriz: ");
    scanf("%d", &x);

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (mat[i][j] == x) {
                printf("Valor %d encontrado na linha %d e coluna %d.\n", x, i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("Valor %d nao encontrado na matriz.\n", x);
    }
    
	return 0;
}

