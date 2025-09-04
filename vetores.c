#include <stdio.h>

int main(){
    
    //vetor
    int numeros[10];
    int i;

    //percorrer o vetor
    for(i=0;i<10;i++){
        numeros[i] = 2*i;
    }

    //imprimir o vetor
    for(i=0;i<12;i++){
        printf("Vetor na posicao %d: %d\n",i,numeros[i]);
    }

    
    
    return 0;
}