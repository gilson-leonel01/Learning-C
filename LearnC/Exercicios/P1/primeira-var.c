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
				float valores[5], maior, menor, soma = 0.0, media;
			
			    printf("\nInsira 5 valores ao vector:\n");
			    for (i = 0; i < 5; i++) {
			        scanf("%f", &valores[i]);
			        soma += valores[i];
			
			        if (i == 0) { 
			            maior = menor = valores[i];
			        } else {
			            if (valores[i] > maior) maior = valores[i];
			            if (valores[i] < menor) menor = valores[i];
			        }
			    }
			
			    media = soma / 5;
			
			    printf("Valores do vector: ");
			    for (i = 0; i < 5; i++) {
			        printf("%.2f ", valores[i]);
			    }
			    
			    printf("\nMaior: %.2f\nMenor: %.2f\nMedia: %.2f\n", maior, menor, media);
		
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
				int matA[2][2], matB[2][4];
				int soma[2][2], subtracao[2][2];
				
				printf("\n1)- Somar duas matrizes\n2)- Subtrair as matrizes\n3)- Adicionar uma constante nas matrizes\n4)- Imprimir os valores das matrizes\n5)- Imprimir as matrizes originais e as transpostas\nInsira a sua opcao: ");
				scanf("%d", &opcao);
				
				printf("\nInsira os elementos da primeira matriz(A):\n");
				for(i = 0; i < 2; i++) {
					for(j = 0; j < 2; j++) {
						scanf("%d", &matA[i][j]);
					}
				}
				
				printf("Insira os elementos da segunda matriz(B):\n");
				for(i = 0; i < 2; i++) {
					for(j = 0; j < 2; j++) {
						scanf("%d", &matB[i][j]);
					}
				} 
				
				switch(opcao) {
					case 1: {
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								soma[i][j] = matA[i][j] + matB[i][j];
							}
						}
						
						printf("Resultado da soma entra as matrizes: \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", soma[i][j]);
							}
							printf("\n");
						}
						break;
					}
					case 2: {
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								subtracao[i][j] = matA[i][j] - matB[i][j];
							}
						}
						
						printf("Resultado da subtracao entra as matrizes: \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", subtracao[i][j]);
							}
							printf("\n");
						}
						break;
					}
					case 3: {
						int constante;
						
						printf("Insira o valor da constante: \n");
						scanf("%d", &constante);
						
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								matA[i][j] += constante;
							}
						}
						
						printf("\nMatriz(A) com a constante: \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", matA[i][j]);
							}
							printf("\n");
						}
						 
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								matB[i][j] += constante;
							}
						}
						
						printf("\nMatriz(B) com a constante: \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", matB[i][j]);
							}
							printf("\n");
						}
						break;
					}
					case 4: {
						printf("\nMatriz(A): \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", matA[i][j]);
							}
							printf("\n");
						}
						
						printf("\nMatriz(B): \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", matB[i][j]);
							}
							printf("\n");
						}
						break;
					}
					case 5: {
						printf("\nMatriz(A) original: \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", matA[i][j]);
							}
							printf("\n");
						}
						
						printf("\nMatriz(A) transposta: \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", matA[j][i]);
							}
							printf("\n");
						}
						
						printf("\n++++++++++++++++++++++++++++++++++++\n");
						
						printf("\nMatriz(B) original: \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", matB[i][j]);
							}
							printf("\n");
						}
						
						printf("\nMatriz(B) transposta: \n");
						for(i = 0; i < 2; i++) {
							for(j = 0; j < 2; j++) {
								printf("%d\t", matB[j][i]);
							}
							printf("\n");
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
