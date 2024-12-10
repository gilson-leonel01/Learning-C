#include <stdio.h>
#include <stdlib.h>

#define SIZE 20 
#define DIM 10
#define MAX 15

void exercicio1() {
    int vetor1[10] = {0};  
    int vetor2[DIM];
    int i;
 
    for (i = 0; i < DIM; i++) {
        vetor2[i] = i * 2;  
    }
 
    printf("Vetor1 (zeros): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor2 (pares): ");
    for (i = 0; i < DIM; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");
}

void exercicio2() {
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
}

void exercicio3() {
    int vetor[SIZE], i, contPares = 0;

    printf("Insira %d valores:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) contPares++;
    }

    printf("Vetor: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nQuantidade de pares: %d\n", contPares);
}

void exercicio4() {
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

    printf("O menor elemento  %d e sua posicao %d.\n", menor, posicao);
}

void exercicio5() {
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
}

void exercicio6() {
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
}

void exercicio7() {
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
        printf("O valor %d esta� presente no vetor.\n", valorProcura);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", valorProcura);
    }
}

int main() {
    printf("Executando Exer-1:\n");
    exercicio1();
    
    printf("\nExecutando Exer-2:\n");
    exercicio2();
    
    printf("\nExecutando Exer-3:\n");
    exercicio3();
    
    printf("\nExecutando Exer-4:\n");
    exercicio4();
    
    printf("\nExecutando Exerc5:\n");
    exercicio5();
    
    printf("\nExecutando Exerc6:\n");
    exercicio6();
    
    printf("\nExecutando Exerc7:\n");
    exercicio7();
    
    return 0;
}
