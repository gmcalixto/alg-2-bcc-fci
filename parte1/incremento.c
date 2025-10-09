#include <stdio.h>

int main(){

    int x = 10;

    //atribui a y e depois incrementa x
    //int y = x++;

    //incrementa x e atribui valor incrementado a y
    int y = ++x;

    printf("Valor de y = %d\n",y);
    printf("Valor de x = %d\n",x);


}