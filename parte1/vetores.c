#include <stdio.h>

void zeraVetor(int v[], int s){
    int i;

    for(i=0;i<s;i++){
        v[i]=0;
    }
}

void imprimeVetor(int v[], int s){
    int i;

    for(i=0;i<s;i++){
        printf("Vetor na posicao %d: %d\n",i,v[i]);
    }
}




int main(){
    
    //vetor
    int numeros[10];
    int i;

    //percorrer o vetor
    for(i=0;i<10;i++){
        numeros[i] = 2*i;
    }

    /*
    //imprimir o vetor
    for(i=0;i<12;i++){
        printf("Vetor na posicao %d: %d\n",i,numeros[i]);
    } */


    imprimeVetor(numeros,10);
    zeraVetor(numeros,10);
    imprimeVetor(numeros,10);

    
    
    return 0;
}