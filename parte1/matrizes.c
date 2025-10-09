#include <stdio.h>

void imprimeMatriz(int l, int c, int m[l][c]){

    int i,j;

    //imprimir a matriz
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

}

void zeraMatriz(int l, int c, int m[l][c]){
    int i,j;

    //zera a matriz
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            m[i][j] = 0;
        }
    }
}


int main(){

    int elementos[8][8];

    int i,j;

    //percorrendo a matriz
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            elementos[i][j] = i*j;
        }
    }

    imprimeMatriz(8,8,elementos);
    zeraMatriz(8,8,elementos);
    printf("\n");
    imprimeMatriz(8,8,elementos);



    /*

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

    */




    return 0;
}