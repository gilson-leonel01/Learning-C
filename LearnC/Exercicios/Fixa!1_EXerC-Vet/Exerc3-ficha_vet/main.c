#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[SIZE], i, pares = 0;

    printf("Insira %d valores:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) pares++;
    }

    printf("Vetor: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nQuantidade de pares: %d\n", pares);
	
	return 0;
}
