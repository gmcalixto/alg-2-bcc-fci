#include <stdio.h>

int main(){

    //declarações de variáveis
    int i;
    int x = 50;
    int a;

    /*
        parte de atribuição de valores
    
    */

    i = 10;
    x = 20;

    printf("Numero informado: %d %d \n",i,x);

    printf("Insira o valor de a:");
    scanf("%d",&a);

    printf("Valor inserido: %d\n",a);
    printf("Endereco de memoria: %p\n",&a);

    return 0;
}