#include <stdio.h>

int main(){

    int i;
    int j;
    int x=0;


    for(i=1;i<=20;i*=2){
        printf("Valor de i = %d\n",i);
    }

    for(j=30;j>-20;j-=5){
        printf("Valor de j = %d\n",j);
    }

    for(;x<20;){
        printf("Valor de x = %d\n",x);
        x+=2;
    }

    return 0;
}