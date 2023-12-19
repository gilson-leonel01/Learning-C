#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float salarioBruto, salarioLiquido;
    float descontoINSS, descontoIRT = 0;

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);

    if (salarioBruto <= 1100) {
        descontoINSS = salarioBruto * 0.075;
    } else if (salarioBruto <= 2203.48) {
        descontoINSS = salarioBruto * 0.09;
    } else if (salarioBruto <= 3305.22) {
        descontoINSS = salarioBruto * 0.12;
    } else if (salarioBruto <= 6433.57) {
        descontoINSS = salarioBruto * 0.14;
    } else {
        descontoINSS = 751.99;
    }
    if (salarioBruto > 8500) {
        if (salarioBruto <= 11000) {
            descontoIRT = salarioBruto * 0.02;
        } else if (salarioBruto <= 16000) {
            descontoIRT = salarioBruto * 0.06;
        } else if (salarioBruto <= 23000) {
            descontoIRT = salarioBruto * 0.08;
        } else {
            descontoIRT = salarioBruto * 0.105;
        }
    }

    salarioLiquido = salarioBruto - descontoINSS - descontoIRT;

    printf("Salario liquido: %.2f\n", salarioLiquido);
    printf("Desconto do IRT: %.2f\n", descontoIRT);
	
	return 0;
}
