#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int quadrado(int x) {
    return x * x;
}

float media(float a, float b) {
    return (a + b) / 2;
}

int main(int argc, char *argv[]) {
	int num;
	printf("Insira o valor: "\n);
	scanf("%d, ", &num);

	quadrado(num);

	float a, b;
	printf("Insira o valor de a: "\n);
	scanf("%f, ", &a);

	printf("Insira o valor de b: "\n);
	scanf("%f, ", &b);

	media(a, b);
	return 0;
}
