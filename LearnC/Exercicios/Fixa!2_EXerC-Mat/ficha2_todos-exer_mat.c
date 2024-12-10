#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define LINHAS1 10
#define COLUNAS1 15
#define TAMANHO 50
#define LINHAS2 3
#define COLUNAS2 3
#define N 2
#define ORDEM 4
#define TAM 5
#define TAM2 2

void exercicio1() {
    int mat[LINHAS1][COLUNAS1];
    int i, j;

    for (i = 0; i < LINHAS1; i++) {
        for (j = 0; j < COLUNAS1; j++) {
            mat[i][j] = (rand() % 100) + 1;
        }
    }

    for (i = 0; i < LINHAS1; i++) {
        int somaLinha = 0;
        for (j = 0; j < COLUNAS1; j++) {
            somaLinha += mat[i][j];
        }
        printf("Soma da linha %d: %d (%s)\n", i + 1, somaLinha, somaLinha % 2 == 0 ? "Par" : "Impar");
    }

    for (j = 0; j < COLUNAS1; j++) {
        int somaColuna = 0;
        for (i = 0; i < LINHAS1; i++) {
            somaColuna += mat[i][j];
        }
        printf("Soma da coluna %d: %d (%s)\n", j + 1, somaColuna, somaColuna % 2 == 0 ? "Par" : "Impar");
    }
}

void exercicio2() {
    double mat[TAMANHO][TAMANHO], vetor[TAMANHO];
    int i, j;

	for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            mat[i][j] = (rand() % 10000) / 100.0; 
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = mat[i][i];
    }

    printf("Vetor da diagonal principal:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

void exercicio3() {
    int mat[LINHAS2][COLUNAS2], transposta[COLUNAS2][LINHAS2];
    int i, j;

    printf("Insira os elementos da matriz %dx%d:\n", LINHAS2, COLUNAS2);
    for (i = 0; i < LINHAS2; i++) {
        for (j = 0; j < COLUNAS2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < LINHAS2; i++) {
        for (j = 0; j < COLUNAS2; j++) {
            transposta[j][i] = mat[i][j];
        }
    }

    printf("Matriz Transposta:\n");
    for (i = 0; i < COLUNAS2; i++) {
        for (j = 0; j < LINHAS2; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }
}

void exercicio4() {
    int A[N][N], B[N][N], C[N][N] = {0};
    int i, j, k;

    printf("Insira os elementos da matriz A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Insira os elementos da matriz B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultado da multiplicacao (A x B):\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}

void exercicio5(){
	int A[N][N], B[N][N], C[N][N] = {0};
    int i, j;

    printf("Insira os elementos da matriz A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Insira os elementos da matriz B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] += A[i][j] + B[i][j];
        }
    }

    printf("Resultado da soma (A + B):\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatriz(int mat[ORDEM][ORDEM]) {
    int i, j;
    printf("Matriz:\n");
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void exercicio6() {
    int mat[ORDEM][ORDEM], i, j, escolha, soma;

    printf("Insira os valores da matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    do {
        printf("\nMenu de opcoes:\n");
        printf("1. Imprimir todos os valores\n");
        printf("2. Somar quadrados dos elementos da primeira coluna\n");
        printf("3. Somar todos os elementos da terceira linha\n");
        printf("4. Somar elementos da diagonal principal\n");
        printf("5. Somar elementos pares da segunda linha\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        soma = 0; 

        switch (escolha) {
            case 1:
                imprimirMatriz(mat);
                break;
            case 2:
                for (i = 0; i < ORDEM; i++) {
                    soma += mat[i][0] * mat[i][0];
                }
                printf("Soma dos quadrados da primeira coluna: %d\n", soma);
                break;
            case 3:
                for (j = 0; j < ORDEM; j++) {
                    soma += mat[2][j];
                }
                printf("Soma dos elementos da terceira linha: %d\n", soma);
                break;
            case 4:
                for (i = 0; i < ORDEM; i++) {
                    soma += mat[i][i];
                }
                printf("Soma da diagonal principal: %d\n", soma);
                break;
            case 5:
                for (j = 0; j < ORDEM; j++) {
                    if (mat[1][j] % 2 == 0) {
                        soma += mat[1][j];
                    }
                }
                printf("Soma dos elementos pares da segunda linha: %d\n", soma);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (escolha != 0);
}

void exercicio7() {
    int valores[5], maior, menor, soma = 0;
    float media;
    int i;

    printf("Insira 5 valores:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i];

        if (i == 0) { 
            maior = menor = valores[i];
        } else {
            if (valores[i] > maior) maior = valores[i];
            if (valores[i] < menor) menor = valores[i];
        }
    }

    media = soma / 5.0;

    printf("\nValores inseridos: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\nMaior valor: %d\nMenor valor: %d\nMedia: %.2f\n", maior, menor, media);
}

int contem(int vetor[], int tamanho, int valor) {
	int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1; 
        }
    }
    return 0; 
}

void exercicio8() {
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
}

void exercicio9() {
    int mat[ORDEM][ORDEM], i, j, count = 0;

    printf("Insira os elementos da matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > 10) {
                count++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", count);
}

void exercicio10() {
    int mat[TAM][TAM], i, j;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (i == j) {
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }

    printf("Matriz 5x5 com diagonal principal preenchida com 1:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void exercicio11() {
    int mat[ORDEM][ORDEM], i, j;

    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            mat[i][j] = i * j;
        }
    }

    printf("Matriz preenchida com o produto da linha e da coluna:\n");
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void exercicio12() {
    int mat[ORDEM][ORDEM], i, j, maior = 0, linhaMaior = 0, colunaMaior = 0;

    printf("Insira os elementos da matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor e %d, localizado na linha %d e coluna %d.\n", maior, linhaMaior, colunaMaior);
}

void exercicio13() {
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
}

void exercicio14() {
    int mat1[ORDEM][ORDEM], mat2[ORDEM][ORDEM], mat3[ORDEM][ORDEM], i, j;

    printf("Insira os elementos da primeira matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Insira os elementos da segunda matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            mat3[i][j] = (mat1[i][j] > mat2[i][j]) ? mat1[i][j] : mat2[i][j];
        }
    }

    printf("Matriz com os maiores valores:\n");
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}

void exercicio15() {
    float mat1[TAM2][TAM2], mat2[TAM2][TAM2], constante;
    int i, j, opcao;

    printf("Insira os elementos da primeira matriz 2x2:\n");
    for (i = 0; i < TAM2; i++) {
        for (j = 0; j < TAM2; j++) {
            scanf("%f", &mat1[i][j]);
        }
    }

    printf("Insira os elementos da segunda matriz 2x2:\n");
    for (i = 0; i < TAM2; i++) {
        for (j = 0; j < TAM2; j++) {
            scanf("%f", &mat2[i][j]);
        }
    }

    do {
        printf("\nMenu:\n");
        printf("1. Somar as duas matrizes\n");
        printf("2. Subtrair a primeira matriz da segunda\n");
        printf("3. Adicionar uma constante as duas matrizes\n");
        printf("4. Imprimir as duas matrizes\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Soma das matrizes:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        printf("%.2f ", mat1[i][j] + mat2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Subtracao (segunda - primeira):\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        printf("%.2f ", mat2[i][j] - mat1[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Insira a constante a ser adicionada: ");
                scanf("%f", &constante);
                printf("Matriz 1 apos adicao:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        mat1[i][j] += constante;
                        printf("%.2f ", mat1[i][j]);
                    }
                    printf("\n");
                }
                printf("Matriz 2 apos adicao:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        mat2[i][j] += constante;
                        printf("%.2f ", mat2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Matriz 1:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        printf("%.2f ", mat1[i][j]);
                    }
                    printf("\n");
                }
                printf("Matriz 2:\n");
                for (i = 0; i < TAM2; i++) {
                    for (j = 0; j < TAM2; j++) {
                        printf("%.2f ", mat2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

int main(int argc, char *argv[]) {
	//exercicio 1 ();
	//exercicio 2 ();
	//exercicio 3 ();
	//exercicio 4 ();
	//exercicio 5 ();
	//exercicio 6 ();
	//exercicio 7 ();
	//exercicio 8 ();
	//exercicio 9 ();
	//exercicio 10 ();
	//exercicio 11 ();
	//exercicio 12 ();
	//exercicio 13 ();
	//exercicio 14 ();
	//exercicio15();
	return 0;
}
