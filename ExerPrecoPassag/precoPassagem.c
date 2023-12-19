#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float precoBase, precoFinal;
    int opcao;
	
    printf("Selecione a opcao:\n");  
	printf("1. Cartao estudante.\n");
	printf("2. Passageiro/a fumador/a.\n");
	printf("3. Passagem normal.\n");
	printf("Opcao: ");
    scanf("%d", &opcao);
    
    printf("Insira o preco da passagem: ");
    scanf("%f", &precoBase);
	
	switch(opcao)
	{
		case 1:
			precoFinal = precoBase * 0.2;
	    	printf("O preco final da passagem e: %.2f\n", precoFinal);
		break;
		
		case 2:
			precoFinal = precoBase * 0.15;
	    	printf("O preco final da passagem e: %.2f\n", precoFinal);
		break;
		
		case 3:
			printf("Passagem normal, isento de desconto: %.2f", precoBase);
		break;
		
		default:
			printf("Opcao invalida tente novamente");
		break;
	}
	
	return 0;
}
