#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[SIZE], A, i;

    printf("Insira %d valores para o vetor:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Insira um valor para A: ");
    scanf("%d", &A);

    printf("Produtos:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d * %d = %d\n", A, vetor[i], A * vetor[i]);
    }
    
	return 0;
}
