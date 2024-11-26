#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int quadrado(int x) {
    return x * x;
}

float media(float a, float b) {
    return (a + b) / 2;
}

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
 
void verificaParOuImpar(int n) {
    if (n % 2 == 0) {
        printf("%d é par.\n", n);
    } else {
        printf("%d é ímpar.\n", n);
    }
}
 
void contagemRegressiva(int n) {
    printf("Contagem regressiva:\n");
    for (int i = n; i >= 0; i--) {
        printf("%d\n", i);
    }
}

int main(int argc, char *argv[]) {
	int num;
	printf("Insira o valor: "\n);
	scanf("%d, ", &num);

	quadrado(num);
	fatorial(num);
	verificarParOuImpar(num);
	contagemRegressiva(num);

	float a, b;
	printf("Insira o valor de a: "\n);
	scanf("%f, ", &a);

	printf("Insira o valor de b: "\n);
	scanf("%f, ", &b);

	media(a, b);
	return 0;
}
