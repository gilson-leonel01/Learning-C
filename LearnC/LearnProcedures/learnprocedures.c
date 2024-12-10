#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void procedure(int a, int b) {
	int c = a + b;
	printf("Soma - Resultado de C: %d\n", c);
	
	if(c>1) {
		c =  a - b;
		printf("Subtracao - Resultado de C: %d\n", c);
	} else if(c>= 10) {
		c = a * b;
		printf("Multiplicacao - Resultado de C: %d\n", c);
	} else {
		c = a / b;
		printf("Divisao - Resultado de C: %d\n", c);
	}
}

int main(int argc, char *argv[]) {
	procedure(18, 4);
	
	return 0;
}

