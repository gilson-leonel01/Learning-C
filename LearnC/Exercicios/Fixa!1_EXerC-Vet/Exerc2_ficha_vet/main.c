#include <stdio.h>
#include <stdlib.h>
#define MAX 15
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[MAX], N, i;

    printf("Quantos valores deseja inserir (max %d)? ", MAX);
    scanf("%d", &N);

    if (N > MAX) N = MAX;  

    printf("Insira %d valores:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores inseridos: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
	return 0;
}
