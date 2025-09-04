#include <stdio.h>

int main(){

    int elementos[5][5];

    int i,j;

    //percorrendo a matriz
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            elementos[i][j] = i*j;
        }
    }

    //imprimir a matriz
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",elementos[i][j]);
        }
        printf("\n");
    }

    //imprimir a matriz
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Elemento i = %d, j = %d: %d\n",i,j,elementos[i][j]);
        }

        
    }




    return 0;
}