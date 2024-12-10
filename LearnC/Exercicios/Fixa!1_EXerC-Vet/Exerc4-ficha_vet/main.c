#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[SIZE], i, menor, posicao;

    printf("Insira %d valores:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    
    posicao = 0;
    for (i = 1; i < SIZE; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("O menor elemento e %d e sua posicao e %d.\n", menor, posicao);
    
	return 0;
}
