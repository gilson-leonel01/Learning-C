#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[SIZE], i, temp;

    printf("Insira %d valores:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vetor[i]);
    }
 
    for (i = 0; i < SIZE / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[SIZE - 1 - i];
        vetor[SIZE - 1 - i] = temp;
    }

    printf("Vetor invertido: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
	return 0;
}
