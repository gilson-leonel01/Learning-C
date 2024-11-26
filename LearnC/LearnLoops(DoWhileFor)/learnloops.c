#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for (i = 0; i < 5; i++) {
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
	
	return 0;
}
