#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM 5

int contem(int vetor[], int tamanho, int valor) {
	int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1; 
        }
    }
    return 0; 
}

int main(int argc, char *argv[]) {
	int x[TAM], y[TAM], soma[TAM], uniao[2 * TAM], interseccao[TAM], diferencaXY[TAM];
    int i, j, tamanhoUniao = 0, tamanhoInterseccao = 0, tamanhoDiferencaXY = 0;

    printf("Insira 5 valores Anicos para o vetor X:\n");
    for (i = 0; i < TAM; i++) {
        do {
            scanf("%d", &x[i]);
        } while (contem(x, i, x[i])); 
    }

    printf("Insira 5 valores Anicos para o vetor Y:\n");
    for (i = 0; i < TAM; i++) {
        do {
            scanf("%d", &y[i]);
        } while (contem(y, i, y[i])); 
    }

    for (i = 0; i < TAM; i++) {
        soma[i] = x[i] + y[i];
    }

    for (i = 0; i < TAM; i++) {
        uniao[tamanhoUniao++] = x[i];
    }

    for (i = 0; i < TAM; i++) {
        if (!contem(x, TAM, y[i])) {
            uniao[tamanhoUniao++] = y[i];
        }
    }

    for (i = 0; i < TAM; i++) {
        if (contem(y, TAM, x[i])) {
            interseccao[tamanhoInterseccao++] = x[i];
        }
    }

    for (i = 0; i < TAM; i++) {
        if (!contem(y, TAM, x[i])) {
            diferencaXY[tamanhoDiferencaXY++] = x[i];
        }
    }

    printf("\nSoma dos elementos (X + Y): ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", soma[i]);
    }

    printf("\nUniao (X uni Y): ");
    for (i = 0; i < tamanhoUniao; i++) {
        printf("%d ", uniao[i]);
    }

    printf("\nIntersecao (X int Y): ");
    for (i = 0; i < tamanhoInterseccao; i++) {
        printf("%d ", interseccao[i]);
    }

    printf("\nDiferenca (X - Y): ");
    for (i = 0; i < tamanhoDiferencaXY; i++) {
        printf("%d ", diferencaXY[i]);
    }
    printf("\n");
    
	return 0;
}

