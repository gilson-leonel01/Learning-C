#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao, i, j;
	
	printf("Seja Bem-vindo a resolucao da primeira prova parcelar\n");
	printf("******************************************************\n");
	printf("1)- Primeiro exercicio\n2)- Segundo exercicio\n3)- Terceiro exercicio\n4)- Quarto exercicio\n5)- Sair\nInsira a sua opcao: ");
	scanf("%d", &opcao);
	do {
 		switch(opcao) {
			case 1: {
				printf("\nMenu - Para resolucao do primeiro exercicio\n");
				printf("********************************************\n");
				printf("1)- Para resolucao do primeiro caso\n2)- Para atualizacao do primeiro caso\nInsira a sua opcao: ");
				scanf("%d", &opcao);
				switch(opcao) {
					case 1: {
						int i, busca, encontrado, vetA[5];
						
						printf("\nInsira valores inteiros ao vetor:\n");
						for(i = 0; i < 5; i++){
							scanf("%d", &vetA[i]);
						}
						
						printf("Vetor normal\n");
						for(i = 0; i < 5; i++){
							printf("%d ", vetA[i]);
						}
						
						printf("Vetor invertido\n");
						for(i = 4; i >= 0; i--){
							printf("%d ", vetA[i]);
						}			
						
						printf("\nInsira o valor de busca: \n");
						scanf("%d", &busca);
						
						encontrado = 0;
						
						for (i = 0; i < 5; i++) {
					        if (vetA[i] == busca) {
					            encontrado = 1;
					            break;
					        }
					    }
					    
					    if (encontrado) {
					        printf("O valor %d foi encontrado no vetor.\n", busca);
					    } else {
					        printf("O valor %d nao foi encontrado no vetor.\n", busca);
					    }
						break;
					}
					case 2: {
						int i, busca, contador = 0, vetA[5];
			
					    printf("\nInsira valores inteiros ao vetor:\n");
						for(i = 0; i < 5; i++){
							scanf("%d", &vetA[i]);
						}
						
						printf("Vetor normal\n");
						for(i = 0; i < 5; i++){
							printf("%d ", vetA[i]);
						}
						
						printf("Vetor invertido\n");
						for(i = 4; i >= 0; i--){
							printf("%d ", vetA[i]);
						}		
					
					    printf("\nInsira um valor para busca: ");
					    scanf("%d", &busca);
					
					    for (i = 0; i < 5; i++) {
					        if (vetA[i] == busca) {
					            contador++;
					        }
					    }
					
					    printf("O valor %d ocorreu %d vez(es) no vetor.\n", busca, contador);
					    
						break;
					}
					
					default: {
						if(opcao > 2) {
							printf("Opcao invalida!");
						}
						break;
					}
				}
				break;
			}
			case 2: {
				float diagonal[50], matriz[50][50];
			
			    printf("\nInsira valores reais a matriz:\n");
			    for (i = 0; i < 50; i++) {
			        for (j = 0; j < 50; j++) {
			            scanf("%f", &matriz[i][j]);
			        }
			    }
			
			    for (i = 0; i < 50; i++) {
			        diagonal[i] = matriz[i][i];
			    }
			
			    printf("\nValores da matriz:\n");
			    for (i = 0; i < 50; i++) {
			        for (j = 0; j < 50; j++) {
			            printf("%.2f\t", matriz[i][j]);
			        }
			        printf("\n");
			    }
			
			    printf("\nVetor com elementos da diagonal principal:\n");
			    for (i = 0; i < 50; i++) {
			        printf("%.2f ", diagonal[i]);
			    }
				break;
			}
			case 3: {
				int matA[4][4], matB[4][4], matC[4][4];
				
				printf("\nInsira os elementos da primeira matriz(A):\n");
				for(i = 0; i < 4; i++) {
					for(j = 0; j < 4; j++) {
						scanf("%d", &matA[i][j]);
					}
				}
				
				printf("Insira os elementos da segunda matriz(B):\n");
				for(i = 0; i < 4; i++) {
					for(j = 0; j < 4; j++) {
						scanf("%d", &matB[i][j]);
					}
				}
				
				for(i = 0; i < 4; i++) {
					for(j = 0; j < 4; j++) {
						matC[i][j] = (matA[i][j] > matB[i][j]) ? matA[i][j] : matB[i][j];
					}
				}
				
				printf("Matriz(C) dos maiores valores:\n");
				for(i = 0; i < 4; i++) {
					for(j = 0; j < 4; j++) {
						printf("%d\t", matC[i][j]);
					}
					printf("\n");
				}
				break;
			}
			case 4: {
				int soma, matriz[4][4];
				
				printf("\n1)- Imprimir os valores da matriz\n2)- Somar os quadrados da primeira coluna da matriz\n3)- Somar a terceira linha\n4)- Somar a diagonal principal\n5)- Somar os pares da segunda linha\nInsira a sua opcao: ");
				scanf("%d", &opcao);
				
				printf("\nInsira os valores da matriz:\n");
				for(i = 0; i < 4; i++) {
					for(j = 0; j < 4; j++) {
						scanf("%d", &matriz[i][j]);
					}
				}
				
				switch(opcao) {
					case 1: {
						for(i = 0; i < 4; i++) {
							for(j = 0; j < 4; j++) {
								printf("%d\t", matriz[i][j]);
							}
							printf("\n");
						}
						break;
					}
					case 2: {						
					    for (i = 0; i < 4; i++) {
					        soma += matriz[i][0] * matriz[i][0];
					    }
					
					    printf("A soma dos quadrados da primeira coluna e: %d\n", soma);
					    
						break;
					}
					case 3: {
						for (i = 0; i < 4; i++) {
					        soma += matriz[2][i];
					    }
					
					    printf("A soma dos elementos da terceira linha e: %d\n", soma);
					    
						break;
					}
					case 4: {
						for (i = 0; i < 4; i++) {
					        soma += matriz[i][i];
					    }
					
					    printf("A soma dos elementos da diagonal principal e: %d\n", soma);
					    
						break;
					}
					case 5: {
						for (i = 0; i < 4; i += 2) {
					        soma += matriz[1][i];
					    }
					
					    printf("A soma dos elementos par da matriz e: %d\n", soma);
					    
						break;
					}
					
					default: {
						if(opcao > 5) {
							printf("Opcao invalida!");
						}
						break;
					}
				}
				break;
			}
			
			default: {
				if(opcao > 5) {
					printf("Opcao invalida!");
				}
				break;
			} 
		}
		break;
	} while(opcao != 5);
	
	return 0;
}
