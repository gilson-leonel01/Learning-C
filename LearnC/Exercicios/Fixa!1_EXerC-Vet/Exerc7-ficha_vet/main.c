#include <stdio.h>
#include <stdlib.h>
#define MAX 15

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[MAX], N, valorProcura, i, encontrado = 0;

    printf("Quantos valores deseja inserir (max %d)? ", MAX);
    scanf("%d", &N);

    if (N > MAX) N = MAX;  

    printf("Insira %d valores:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Insira o valor a procurar: ");
    scanf("%d", &valorProcura);

    for (i = 0; i < N; i++) {
        if (vetor[i] == valorProcura) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O valor %d esta presente no vetor.\n", valorProcura);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", valorProcura);
    }
    
	return 0;
}
