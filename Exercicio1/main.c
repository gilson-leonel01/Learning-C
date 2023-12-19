#include <stdio.h>
#include <stdlib.h>

void startUp(int mat[10][15] ){
    int i, j, sum; //row = i & column = j
    
    for(i = 0; i < 10; i++){
        sum = 0; 
        for (j = 0; j < 15; j++){
            sum = sum + mat[i][j];
        }
        
        printf("The result of element is %d\n", sum);
        
        if(sum % 2 == 0){
            printf("Even\n");
        } else{
            printf("Odd\n");
        }
    }
}

int main() {
    int initializeMatrix[10][15];
	startUp(initializeMatrix);
	
    return 0;
}
