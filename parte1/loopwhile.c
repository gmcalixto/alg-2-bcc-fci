#include <stdio.h>

int main(){

    int cont = 0;

    //teste de continuidade é executado ao início do bloco
    while(cont < 10){
        printf("Valor do contador: %d\n",cont);
        //cont = cont + 1;
        //cont += 1;
        //cont++;
        ++cont;
    }

    return 0;

}