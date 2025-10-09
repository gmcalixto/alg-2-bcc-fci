#include <stdio.h>

int main(){
    
    int i=100;


    //executa pelo menos uma iteração
    //teste de continuidade é executado ao final do bloco
    do{
       printf("Valor de i = %d\n",i);
       i++;    
    }while(i < 10);
    
    return 0;
}