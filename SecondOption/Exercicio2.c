#include <stdio.h>


float Media(int n1, int n2){
    return (n1 + n2)/2;
} 
int main(){
    int n1, n2;
    float media;

    printf("Digite um numero");
    scanf("%d",&n1);

    printf("Digite um  outro numero");

     scanf("%d",&n2);

   

    media =      Media(n1,n2);

    printf("A media dos seus valores  e igual %f", media);
}