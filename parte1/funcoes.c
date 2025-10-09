#include <stdio.h>

int g = 40;


//função para somar dois números
int soma(int a, int b){

    return a + b;

}

int somaGlobal(int a, int b){

    return g + a + b;

}


int main(){

    int i = 20;
    int j = -10;

    g = 20;

    printf("Soma dos valores: %d\n",soma(i,j));
    printf("Soma dos valores com a global: %d\n",somaGlobal(i,j));



    return 0;
}