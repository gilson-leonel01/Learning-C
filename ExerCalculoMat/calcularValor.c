#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main(int argc, char *argv[]) {
	
	int i, j, n1, n2, opcao, result;
	float raio, area, diametro,lado;
	float diagonal, compri, largura;
	float lado1, lado2, lado3;
	float cate1, cate2, hipo;
	
	printf("Bem-vindo ao sistemas\n");
    printf("----------------------------\n");
    printf("Selecione a operacao:\n");
    printf("1. Crescente ou Decrescente\n");
    printf("2. Par ou Impar\n");
    printf("3. Maior, Menor ou Igual zero\n");
    printf("4. Area da Circunferencia\n");
    printf("5. Diametro da Circunferencia\n");
    printf("6. Lado do Quadrado\n");
    printf("7. Area do Quadrado\n");
    printf("8. Altura diagonal do Quadrado\n");
    printf("9. Area do Rectangulo\n");
    printf("10. Tipo de Triangulo\n");
    printf("11. Hipotenusa do Triangulo\n");
    printf("12. Tabuada dos 2 - 12\n");
    printf("13. Calculadora Simples\n");
    printf("Opcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Digite um numero: ");
			scanf("%d", &n1);
			
			printf("Digite outro numero: ");
			scanf("%d", &n2);
			
			if(n1 > n2){
				printf("Ordem decrescente\n");
			}else if(n1 < n2){
				printf("Ordem crescente\n");
			}else{
				printf("Numeros iguais");
			}
		break;
		
		case 2:
			printf("Digite um numero: ");
			scanf("%d", &n1);
			
			if(n1 % 2 == 0){
				printf("Par\n");
			}else{
				printf("Impar\n");
			}
		break;
		
		case 3:
			printf("Digite um numero: ");
			scanf("%d", &n1);
			
			if(n1 > 0){
				printf("Numero maior que 0\n");
			}else if(n1 < 0){
				printf("Numero menor que 0\n");
			} else{
				printf("Numero igual a 0\n");
			}
		break;
		
		case 4:
			printf("Digite o raio da circunferencia: ");
		    scanf("%f", &raio);
		
		    area = PI * raio * raio;
		
		    printf("A area da circunferencia e: %.2f\n", area);
		break;
		
		case 5:
			printf("Digite o raio da circunferencia: ");
		    scanf("%f", &raio);
		
		    diametro = 2 * raio;
		
		    printf("O diametro da circunferencia e: %.2f\n", diametro);
		break;
		
		case 6:
			printf("Digite a area do quadrado: ");
		    scanf("%f", &area);
		
		    lado = sqrt(area);
		
		    printf("O lado do quadrado e: %.2f\n", lado);
		break;
		
		case 7:
			printf("Digite o lado do quadrado: ");
		    scanf("%f", &lado);
		
		    area = lado * lado;
		
		    printf("A area do quadrado e: %.2f\n", area);
		break;
		
		case 8:
			printf("Digite o lado do quadrado: ");
		    scanf("%f", &lado);
		
		    diagonal = lado * sqrt(2);
		
		    printf("A diagonal do quadrado e: %.2f\n", diagonal);
		break;
		
		case 9:
			printf("Digite o comprimento do retangulo: ");
		    scanf("%f", &compri);
		
		    printf("Digite a largura do retangulo: ");
		    scanf("%f", &largura);
		
		    area = compri * largura;
		
		    printf("A area do retangulo e: %.2f\n", area);
		break;
		
		case 10:
			printf("Digite o comprimento do primeiro lado do triangulo: ");
		    scanf("%f", &lado1);
		
		    printf("Digite o comprimento do segundo lado do triangulo: ");
		    scanf("%f", &lado2);
		    
		    printf("Digite o comprimento do terceiro lado do triangulo: ");
		    scanf("%f", &lado3);
		
		    if (lado1 == lado2 && lado2 == lado3) {
		        printf("O triangulo e equilatero.\n");
		    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		        printf("O triangulo e isosceles.\n");
		    } else {
		        printf("O triangulo e escaleno.\n");
		    }
		break;
		
		case 11:
			printf("Digite o comprimento do primeiro cateto: ");
		    scanf("%f", &cate1);
		
		    printf("Digite o comprimento do segundo cateto: ");
		    scanf("%f", &cate2);
		
		    hipo = sqrt(pow(cate1, 2) + pow(cate2, 2));
		
		    printf("A hipotenusa do triangulo retangulo e: %.2f\n", hipo);
		break;
		
		case 12:	

		    for (i = 2; i <= 12; i++) {
		        printf("Tabuada do %d:\n", i);
		        for (j = 1; j <= 12; j++) {
		            printf("%d x %d = %d\n", i, j, i * j);
		        }
		        printf("\n");
		    }
		break;
		
		case 13:
			
		    printf("Selecione a operacao:\n");
		    printf("1. Soma\n");
		    printf("2. Subtracao\n");
		    printf("3. Multiplicacao\n");
		    printf("4. Divisao\n");
		    printf("Opcao: ");
		    scanf("%d", &opcao);
		
		    printf("Digite o primeiro numero: ");
		    scanf("%f", &n1);
		    
		    printf("Digite o segundo numero: ");
		    scanf("%f", &n2);
		
		    switch (opcao) {
		        case 1:
		            result = n1 + n2;
		            printf("Resultado: %.2f\n", result);
		        break;
		        
		        case 2:
		            result = n1 - n2;
		            printf("Resultado: %.2f\n", result);
		        break;
		        
		        case 3:
		            result = n1 * n2;
		            printf("Resultado: %.2f\n", result);
		        break;
		            
		        case 4:
		            if (n2 != 0) {
		                result = n1 / n2;
		                printf("Resultado: %.2f\n", result);
		            } else {
		                printf("Erro: Divisao por zero!\n");
		            }
		        break;
		        
		        default:
		            printf("Opcao invalida!\n");
		        break;
		    }

		break;
		
		default:
			printf("Opcao invalida, execute novamente");
		break;
	}
	
	return 0;
}

