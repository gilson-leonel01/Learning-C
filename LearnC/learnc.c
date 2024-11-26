#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;       
  if (i > 0) 
  {
    printf("Positivo\n");
  } else {
    printf("Negativo ou zero\n");
  }

  int opcao;       
  printf("Insira a sua opcao: "\n);
  scanf("%d", &opcao);
         
  switch (opcao) 
  {
    case 1:
        printf("Opção 1\n");
        break;
    case 2:
        printf("Opção 2\n");
        break;
    default:
        printf("Opção inválida\n");
   }
         
  for (i = 0; i < 5; i++) 
  {
    printf("%d\n", i);
  }     
         
  i = 0;
  while (i < 5)
  {
    printf("%d\n", i);
    i++;
  }     
         
  do {
    printf("%d\n", i);
    i++;
  } while (i < 5);
         
  system("PAUSE");	
  return 0;
}
