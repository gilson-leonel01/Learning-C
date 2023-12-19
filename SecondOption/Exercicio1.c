#include <stdio.h>
#include <stdio.h>


int soma(){
	int n1, n2, soma;
	
    printf("Digite primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite segundo numero: ");
    scanf("%d", &n2); 
    
    soma = n1 + n2;

    printf("A soma de %d + %d  e igual %d", n1, n2, soma);
    
    return 1;
} 

int main (){
    Soma();
    return 0;
}


