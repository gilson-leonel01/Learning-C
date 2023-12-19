#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num1, num2;
	int cond1, cond2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);

	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	cond1 = ((num1 > 10) || (num1 < 1000));
	cond2 = (num2 <= num1);
	

	if(cond1 ^ cond2) {
		printf("Condicao verificada\n");
	}
	
	return 0;
}
