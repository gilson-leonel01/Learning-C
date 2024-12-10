#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
   
   for (i = 1; i <= 10; i++) {
        printf("%d + %d = %d\n", i, i, i);
    }
    
	while (i <= 10) {
        printf("%d + %d = %d\n", i, i, i);
        i++;
    }

    do {
        printf("%d + %d = %d\n", i, i, i);
        i++;
    } while (i <= 10);  


	return 0;
}
