#include <stdio.h>

int main(){

    int cont = 0;

    while(cont < 10){
        printf("Valor do contador: %d\n",cont);
        //cont = cont + 1;
        //cont += 1;
        //cont++;
        ++cont;
    }

    return 0;

}