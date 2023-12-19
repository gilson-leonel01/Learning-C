#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float salarioBruto, salarioLiquido;
    float descontoINSS, descontoIRT = 0;
	float valor,valorConvertido, kwz=2.12, gbp=1.0;
	int opcao, ano, num1, num2, cond1, cond2;
	
	printf("--------SEJA BEM-VINDO--------\n");
	printf("Digite 1 para calcular  o IRT\nDigite 2 para converter o Valor\nDigite 3 para calcular o ANO\nDigite 4 para verificar FENT\nOpcao: ");
	scanf("%d", &opcao);

	switch(opcao){
		case 1:
		    printf("Digite o salario bruto: ");
		    scanf("%f", &salarioBruto);
		
		    if(salarioBruto <= 1100) {
		        descontoINSS = salarioBruto * 0.075;
		    } else if (salarioBruto <= 2203.48) {
		        descontoINSS = salarioBruto * 0.09;
		    } else if (salarioBruto <= 3305.22) {
		        descontoINSS = salarioBruto * 0.12;
		    } else if (salarioBruto <= 6433.57) {
		        descontoINSS = salarioBruto * 0.14;
		    }else {
		        descontoINSS = 751.99;
		    }
		    if(salarioBruto > 8500) {
		        if(salarioBruto <= 11000) {
		            descontoIRT = salarioBruto * 0.02;
		        }else if (salarioBruto <= 16000) {
		            descontoIRT = salarioBruto * 0.06;
		        }else if (salarioBruto <= 23000) {
		            descontoIRT = salarioBruto * 0.08;
		        }else {
		            descontoIRT = salarioBruto * 0.105;
		        }
		    }

		    salarioLiquido = salarioBruto - descontoINSS - descontoIRT;
		
		    printf("Salario liquido: %.2fkzs\n", salarioLiquido);
		    printf("Desconto do IRT: %.2fkzs\n", descontoIRT);
		break;
		
		case 2:
		    printf("Digite o valor a ser convertido: ");
		    scanf("%f", &valor);

			valorConvertido = (valor * gbp)/kwz;
			printf("O valor convertido e %.2fGBP", valorConvertido);
		break;
		
		case 3:
		    printf("Digite um ano: ");
		    scanf("%d", &ano);

		    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		        printf("Ano bissexto.\n");
		    } else {
		        printf("Ano comum.\n");
		    }
		break;
		
		case 4:
		    printf("Digite o primeiro numero: ");
		    scanf("%d", &num1);
		    
		    printf("Digite o segundo numero: ");
		    scanf("%d", &num2);
		    
		    cond1 = ((num1 > 50) || (num1 < 100));
		    cond2 = (num2 <= num1);
		    
		    if(cond1 ^ cond2) {
		        printf("FENT\n");
		    }
		
		return 0;
	}
}
